#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <dirent.h>
#include "sorter.c"

#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_RESET   "\x1b[0m"

pid_t arr[256];
int p=0;

void printDirInfo(char *dir, char* param) {
    int initialpidBool=0;
    int initialpid=0;
    int pid;


	DIR *dp = NULL;
	struct dirent *curObj = NULL;
	if ((dp = opendir(dir)) == NULL) {
		fprintf(stderr, "Can't open directory: %s\n", dir);
		return;
	}
	while (curObj = readdir(dp)) {
		if (!strcmp(".", curObj->d_name) || !strcmp("..", curObj->d_name)) {
            //printf("hello\n");
			continue;
		}
		if (curObj->d_type == DT_REG) {
			char * newPath = (char *) malloc(strlen(curObj->d_name)
					+ strlen(dir) + 2);

			newPath[0] = '\0';
			strcpy(newPath, dir);
			strcat(newPath, "/");
			strcat(newPath, curObj->d_name);


			int fd = open(newPath, O_RDONLY);
			if (fd < 0) {
				fprintf(stderr, "Can't open file: %s\n", newPath);
				return;
			}
			int len = lseek(fd, 0, SEEK_END);
			close(fd);

			printf("%-30s%s%d\n", newPath, " ", len);

			//ok so here is where you forl
			int length=strlen(newPath);
			//printf("file name hm %s\n", curObj->d_name);
			if(newPath[length-1]=='v'||newPath[length-2]=='s'||newPath[length-3]=='c'){


                pid=fork();
                start(newPath,curObj->d_name,param);
               arr[p]=getpid();
                 printf("arrp %d\n",arr[p]);
                p++;





			}

			free(newPath);



		}
		else if (curObj->d_type == DT_DIR) {
			char * newPath = (char *)malloc(strlen(curObj->d_name)
					+ strlen(dir) + 2);

			newPath[0] = '\0';

			strcpy(newPath, dir);
			strcat(newPath, "/");
		    //////////////////////

			strcat(newPath, curObj->d_name);
			printf(ANSI_COLOR_BLUE "%s" ANSI_COLOR_RESET "\n", newPath);
			 pid=fork();
               arr[p]=getpid();
                 printf("arrp %d\n",arr[p]);
                p++;


			printDirInfo(newPath,param);
			free(newPath);
		}
	}
	closedir(dp);
	return;
}

int main(int argc, char * argv[]) {

	char * base = ".";
	char * param = argv[2];
	if (argc == 3) {
		//base = argv[1];
		printf("Directory index from %s\n", base);
	printDirInfo(base,param);
	}


	if (argc == 5) {
	    base="./";
        char * givenDir= (char*)malloc(sizeof(argv[4])+3);
		strcpy(givenDir,base);
        strcat(givenDir,argv[4]);
		printf("Directory index from %s\n", givenDir);
        printDirInfo(givenDir,param);
	}

	printf("this is p %d\n",p);
	int the_process=1;

	printf("Initial PID: %d\n",arr[0]);
	printf("PIDS of all child processes: ");
	while(the_process<p){

                 printf("%d, ",arr[the_process]);
                 the_process++;
	}

	printf("\nTotal number of processes: %d\n",p);





	return 0;
}
