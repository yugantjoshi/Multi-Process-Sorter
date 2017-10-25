#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/*

void print_csv_file(Records** finalInput, int arraySize){
  char fileName[] = "sortedMovies.csv";
  FILE *file = fopen(fileName, "w");

  int i=0;

  while(i!=arraySize-1){

    fprintf(file, "%s,", (*finalInput)[i].color);
    fprintf(file, "%s,", (*finalInput)[i].director_name);
    fprintf(file, "%d,", (*finalInput)[i].num_critic_for_reviews);
    fprintf(file, "%d,", (*finalInput)[i].duration);
    fprintf(file, "%d,", (*finalInput)[i].director_facebook_likes);
    fprintf(file, "%d,", (*finalInput)[i].actor_3_facebook_likes);
    fprintf(file, "%s,", (*finalInput)[i].actor_2_name);
    fprintf(file, "%d,", (*finalInput)[i].actor_1_facebook_likes);
    //printf("GROSS: %d\n", (*finalInput)[i].gross);
    fprintf(file, "%d,", (*finalInput)[i].gross);
    //printf("final gross: %d\n", (*finalInput)[i].gross);
    fprintf(file, "%s,", (*finalInput)[i].genres);
    fprintf(file, "%s,", (*finalInput)[i].actor_1_name);
    fprintf(file, "%s,", (*finalInput)[i].movie_title);
    fprintf(file, "%d,", (*finalInput)[i].num_voted_users);
    fprintf(file, "%d,", (*finalInput)[i].cast_total_facebook_likes);
    fprintf(file, "%s,", (*finalInput)[i].actor_3_name);
    fprintf(file, "%d,", (*finalInput)[i].facenumber_in_poster);
    fprintf(file, "%s,", (*finalInput)[i].plot_keywords);
    fprintf(file, "%s,", (*finalInput)[i].movie_imdb_link);
    fprintf(file, "%d,", (*finalInput)[i].num_user_for_reviews);
    fprintf(file, "%s,", (*finalInput)[i].language);
    fprintf(file, "%s,", (*finalInput)[i].country);
    fprintf(file, "%s,", (*finalInput)[i].content_rating);
    fprintf(file, "%d,", (*finalInput)[i].budget);
    fprintf(file, "%d,", (*finalInput)[i].title_year);
    fprintf(file, "%d,", (*finalInput)[i].actor_2_facebook_likes);
    fprintf(file, "%d,", (*finalInput)[i].imdb_score);
    fprintf(file, "%d,", (*finalInput)[i].aspect_ratio);
    fprintf(file, "%d\n", (*finalInput)[i].movie_facebook_likes);
    i++;

  }
  i=0;
  while(i!=arraySize-1){

    fprintf(file, "%d,", (*finalInput)[i].gross);

    i++;

  }
  fclose(file);
}

void printRecord(Records* input, int s){
  int arraySize = s;
  int t=0;
  for(t=0; t<arraySize; t++){
  //  printf("%s ", input[t].color);
    printf("%s \n", input[t].director_name);
  }

}


char* findColumnType(const char* value){
    char *data_type = (char*)malloc(sizeof(char*)*30);
    //printf("value %s\n", value);
    //printf("findColumnType value %s\n", value);

  if(strcmp(value, "color") == 0){
    strncpy(data_type, "int", 10);
    //data_type = 'int';
    return data_type;
  }
  else if(strcmp(value, "director_name")==0){
    strncpy(data_type, "string", 10);
    //printf("value after director_name %s\n", value);
    return data_type;
  }
  else if(strcmp(value, "num_critic_for_reviews") == 0){
    strncpy(data_type, "int", 10);
    return data_type;
  }
  else if(strcmp(value, "duration") == 0){
    strncpy(data_type, "int", 10);
    return data_type;
  }
  else if(strcmp(value, "director_facebook_likes") == 0){
    strncpy(data_type, "int", 10);
    return data_type;
  }
  else if(strcmp(value, "actor_3_facebook_likes") == 0){
    strncpy(data_type, "int", 10);
    return data_type;
  }
  else if(strcmp(value, "actor_2_name") == 0){
    strncpy(data_type, "string", 10);
    return data_type;
  }
  else if(strcmp(value, "actor_1_facebook_likes") == 0){
    strncpy(data_type, "int", 10);
    return data_type;
  }
  else if(strcmp(value, "gross") == 0){
    strncpy(data_type, "int", 10);
    return data_type;
  }
  else if(strcmp(value, "genres") == 0){
    strncpy(data_type, "string", 10);
    return data_type;
  }
  else if(strcmp(value, "actor_1_name") == 0){
    strncpy(data_type, "string", 10);
    return data_type;
  }
  else if(strcmp(value, "movie_title") == 0){
    strncpy(data_type, "string", 10);
    return data_type;
  }
  else if(strcmp(value, "num_voted_users") == 0){
    strncpy(data_type, "int", 10);
    return data_type;
  }
  else if(strcmp(value, "cast_total_facebook_likes") == 0){
    strncpy(data_type, "int", 10);
    return data_type;
  }
  else if(strcmp(value, "actor_3_name") == 0){
    strncpy(data_type, "string", 10);
    return data_type;
  }
  else if(strcmp(value, "facenumber_in_poster") == 0){
    strncpy(data_type, "int", 10);
    return data_type;
  }
  else if(strcmp(value, "plot_keywords") == 0){
    strncpy(data_type, "string", 10);
    return data_type;
  }
  else if(strcmp(value, "movie_imdb_link") == 0){
    strncpy(data_type, "string", 10);
    return data_type;
  }
  else if(strcmp(value, "num_user_for_reviews") == 0){
    strncpy(data_type, "int", 10);
    return data_type;
  }
  else if(strcmp(value, "language") == 0){
    strncpy(data_type, "string", 10);
    return data_type;
  }
  else if(strcmp(value, "content_rating") == 0){
    strncpy(data_type, "int", 10);
    return data_type;
  }
  else if(strcmp(value, "budget") == 0){
    strncpy(data_type, "int", 10);
    return data_type;
  }
  else if(strcmp(value, "title_year") == 0){
    strncpy(data_type, "int", 10);
    return data_type;
  }
  else if(strcmp(value, "actor_2_facebook_likes") == 0){
    strncpy(data_type, "int", 10);
    return data_type;
  }
  else if(strcmp(value, "imdb_score") == 0){
    strncpy(data_type, "int", 10);
    return data_type;
  }
  else if(strcmp(value, "aspect_ratio") == 0){
    strncpy(data_type, "int", 10);
    return data_type;
  }
  else if(strcmp(value, "movie_facebook_likes") == 0){
    strncpy(data_type, "int", 10);
    return data_type;
  }
  else{
    printf("WRONG INPUT_ABORT\n");
    strncpy(data_type, "invalid", 10);
    //return -1;
  }
}
//Find column index based on parameter value passed in from command line
int findColumnIndex(const char* value){
  if(strcmp(value, "color") == 0){
    return 0;
  }
  else if(strcmp(value, "director_name") == 0){

    return 1;
  }
  else if(strcmp(value, "num_critic_for_reviews") == 0){
    return 2;
  }
  else if(strcmp(value, "duration") == 0){
    return 3;
  }
  else if(strcmp(value, "director_facebook_likes") == 0){
    return 4;
  }
  else if(strcmp(value, "actor_3_facebook_likes") == 0){
    return 5;
  }
  else if(strcmp(value, "actor_2_name") == 0){

    return 6;
  }
  else if(strcmp(value, "actor_1_facebook_likes") == 0){
    return 7;
  }
  else if(strcmp(value, "gross") == 0){
    return 8;
  }
  else if(strcmp(value, "genres") == 0){

    return 9;
  }
  else if(strcmp(value, "actor_1_name") == 0){

    return 10;
  }
  else if(strcmp(value, "movie_title") == 0){

    return 11;
  }
  else if(strcmp(value, "num_voted_users") == 0){
    return 12;
  }
  else if(strcmp(value, "cast_total_facebook_likes") == 0){
    return 13;
  }
  else if(strcmp(value, "actor_3_name") == 0){

    return 14;
  }
  else if(strcmp(value, "facenumber_in_poster") == 0){
    return 15;
  }
  else if(strcmp(value, "plot_keywords") == 0){

    return 16;
  }
  else if(strcmp(value, "movie_imdb_link") == 0){

    return 17;
  }
  else if(strcmp(value, "num_user_for_reviews") == 0){
    return 18;
  }
  else if(strcmp(value, "language") == 0){

    return 19;
  }
  else if(strcmp(value, "content_rating") == 0){

    return 20;
  }
  else if(strcmp(value, "budget") == 0){
    return 21;
  }
  else if(strcmp(value, "title_year") == 0){
    return 22;
  }
  else if(strcmp(value, "actor_2_facebook_likes") == 0){
    return 23;
  }
  else if(strcmp(value, "imdb_score") == 0){

    return 24;
  }
  else if(strcmp(value, "aspect_ratio") == 0){

    return 25;
  }
  else if(strcmp(value, "movie_facebook_likes") == 0){
    return 26;
  }
  else{
    printf("WRONG INPUT_ABORT\n");
   // data_type = "invalid";
    return -1;
  }
}

void data_mine(Records* input, int s){
  //Need to write to text file
  //Mine for mean, standard deviation, variance
  //Mean = sum of all Xi's / N for i from 0 to n1
  int i=0;
  int countUSA=0;
  long int sumUSA =0;
  int countUK=0;
  long int sumUK=0;


  for(i=0; i<s; i++){
    if(strcmp(input[i].country, "USA")==0){
      countUSA++;
      sumUSA=sumUSA + input[i].budget;
    }
  }
  for(i=0; i<s; i++){
    if(strcmp(input[i].country, "UK")==0){
      countUK++;
      //printf("countUK %d\n", countUK);
      sumUK= sumUK+ input[i].budget;
    }
  }
  //printf("USA: %d UK: %d\n", countUSA, countUK);

  unsigned long  avgUS = sumUSA/countUSA;
  unsigned long  avgUK = sumUK/countUK;
  //printf("AVG US: %d AVG US: %d\n", avgUS, avgUK);

char fileName[] = "data_mine.txt";
FILE *file = fopen(fileName, "w");
fprintf(file, "The USA produced %d movies and had an average budget of %d compared to the UK which produced %d movies and had an average budget of %d.", countUSA, avgUS, countUK, avgUK);
fclose(file);

}


*/
int start(char* fileName) {
    //Records* input[5000];
    char current[200];
    int length=strlen(fileName);
    int i=0;
    while(i<length){
        current[i]=fileName[i];
        i++;
    }

    printf("this is i %s\n",current);


    FILE *fp;
    fp = fopen(current,"r");
    //printf("hello world \n");

   // while(!feof(fp)){
     //   printf("wow");
    //}
   char *line=(char*)malloc(sizeof(char)*500);//this will hold the current line till its parsed
    fgets(line,500,fp);
    //fgets(current, 5000,fp);
    printf("this is first line %s \n",line);
    /*
    Records* input= (Records*)malloc(sizeof(Records)*8000);
    //printf("input size %d\n", sizeof(input));
    if(argc != 3)
    {
        printf("You have input the wrong amount of arguments!");
        exit(1);
    }
    if(
    strcmp(argv[2], "color")!= 0
    && strcmp(argv[2], "director_name")!= 0
    && strcmp(argv[2], "num_critic_for_reviews")!= 0
    && strcmp(argv[2], "duration")!= 0
    && strcmp(argv[2], "director_facebook_likes")!= 0
    && strcmp(argv[2], "actor_3_facebook_likes")!= 0
    && strcmp(argv[2], "actor_2_name")!= 0
    && strcmp(argv[2], "actor_1_facebook_likes")!= 0
    && strcmp(argv[2], "gross")!= 0
    && strcmp(argv[2], "genres")!= 0
    && strcmp(argv[2], "actor_1_name")!= 0
    && strcmp(argv[2], "movie_title")!= 0
    && strcmp(argv[2], "num_voted_users")!= 0
    && strcmp(argv[2], "cast_total_facebook_likes")!= 0
    && strcmp(argv[2], "actor_3_name")!= 0
    && strcmp(argv[2], "facenumber_in_poster")!= 0
    && strcmp(argv[2], "plot_keywords")!= 0
    && strcmp(argv[2], "movie_imdb_link")!= 0
    && strcmp(argv[2], "num_user_for_reviews")!= 0
    && strcmp(argv[2], "language")!= 0
    && strcmp(argv[2], "country")!= 0
    && strcmp(argv[2], "content_rating")!= 0
    && strcmp(argv[2], "budget")!= 0
    && strcmp(argv[2], "title_year")!= 0
    && strcmp(argv[2], "actor_2_facebook_likes")!= 0
    && strcmp(argv[2], "imdb_score")!= 0
    && strcmp(argv[2], "aspect_ratio")!= 0
    && strcmp(argv[2], "movie_facebook_likes")!= 0){
    printf("invalid parameter\n");
    exit(1);
  }

    int count=450;//counts the lines we reach;
    int amountofLines=0;
    int y;
    int i=0;//interate current line
    int j=0;//used to add to token
    int s=0;//iterate through input
    int commas=0;
    char token[300];
    char *line=(char*)malloc(sizeof(char)*500);//this will hold the current line till its parsed
    fgets(line,500,stdin);
    char *data_type =(char*)malloc(sizeof(char)*10);

    for(y =0; y<10; y++){
      data_type[i] = '-';
    }
    //i=0;

  //  printf("This is the first line: %s\n",line);//this is a tester line showing the first line of data with categories
    char* first_line = (char*)malloc(sizeof(char)*500);
    strcpy(first_line, line);
    //char* parameterToSort = (char*)malloc(sizeof(char)*20);
    //int countNum = 0;
    // fgets(line,500,stdin);
    while(!feof(stdin))
    {
      //printf("count %d\n", countNum);
        //countNum++;

        amountofLines++;

        if(amountofLines==count){
        count=count*2;
        //input= realloc(input,sizeof(Records)*count);
        }

        i=0;
        j=0;
        commas=0;

        fgets(line,500,stdin);


        //printf("this is first line %s\n",line);
       // printf("this is line %s\n",line);
       // printf("this is i %i and strlen %i\n",i,strlen(line));
        while(i < strlen(line))
        {


            if(line[i]==',')
            {
                commas++;
                switch (commas)
                {

                    case 1:

                     //printf("this is color token %s\n",token);
                        strncpy(input[s].color, token, 50);
                        memset(token, 0, 300);//empties token array
                      //  printf("this is color %s\n",input[s].color);
                    break;

                    case 2:
                       // printf("this is director token %s\n",token);
                        strncpy(input[s].director_name, token, 50);
                        memset(token, 0, 300);//empties token array
                        //printf("this is director name %s\n",input[s].director_name);
                    break;

                    case 3:
                        input[s].num_critic_for_reviews=atoi(token);
                        memset(token, 0, 300);//empties token array
                        //printf("this is num critics %i\n",input[s].num_critic_for_reviews);
                    break;

                    case 4:
                        input[s].duration=atoi(token);
                        memset(token, 0, 300);//empties token array
                        //printf("this is duration %i\n",input[s].duration);
                    break;

                    case 5:
                        input[s].director_facebook_likes=atoi(token);
                        memset(token, 0, 300);//empties token array
                        //printf("this is director facebook likes %i\n",input[s].director_facebook_likes);
                    break;

                    case 6:
                        input[s].actor_3_facebook_likes=atoi(token);
                        memset(token, 0, 300);//empties token array
                        //printf("this is actor 3 fb likes %i\n",input[s].actor_3_facebook_likes);
                    break;

                    case 7:
                        strncpy(input[s].actor_2_name, token, 50);
                        memset(token, 0, 300);//empties token array
                        //printf("this is actor 2 name %s\n",input[s].actor_2_name);
                    break;

                    case 8:
                        input[s].actor_1_facebook_likes=atoi(token);
                        memset(token, 0, 300);//empties token array
                        //printf("this is actor 1 fb likes %i\n",input[s].actor_1_facebook_likes);
                    break;

                    case 9:
                        input[s].gross=atoi(token);
                        memset(token, 0, 300);//empties token array
                        //printf("this is gross %i\n",input[s].gross);
                    break;

                    case 10:
                        strncpy(input[s].genres, token, 50);
                        memset(token, 0, 300);//empties token array
                        //printf("this is genre %s\n",input[s].genres);
                    break;

                    case 11:
                        strncpy(input[s].actor_1_name, token, 50);
                        memset(token, 0, 300);//empties token array
                        //printf("this is actor 1 name %s\n",input[s].actor_1_name);
                    break;

                    case 12:
                        while(!isdigit(line[i+1])){



                            if(line[i]== ','){
                                printf("i should make it in here after second I \n");
                                token[j]=' ';
                            }else if(line[i]== '"'){
                            token[j]=' ';

                            }

                            else{
                            token[j]=line[i];
                            }


                            j++;
                            i++;




                        }


                        strncpy(input[s].movie_title, token, 50);
                        memset(token, 0, 300);//empties token array
                        //printf("this is movie title %s\n",input[s].movie_title);
                    break;

                    case 13:
                        input[s].num_voted_users=atoi(token);
                        memset(token, 0, 300);//empties token array
                        //printf("this is num voted users %i\n",input[s].num_voted_users);
                    break;

                    case 14:
                        input[s].cast_total_facebook_likes=atoi(token);
                        memset(token, 0, 300);//empties token array
                        //printf("this is cast total facebook likes %i\n",input[s].cast_total_facebook_likes);
                    break;

                    case 15:
                        strncpy(input[s].actor_3_name, token, 50);
                        memset(token, 0, 300);//empties token array
                        //printf("this is actor 3 name %s\n",input[s].actor_3_name);
                    break;

                    case 16:
                        input[s].facenumber_in_poster=atoi(token);
                        memset(token, 0, 300);//empties token array
                        //printf("this is face num in poster %i\n",input[s].facenumber_in_poster);
                    break;

                    case 17:
                        strncpy(input[s].plot_keywords, token, 50);
                        memset(token, 0, 300);//empties token array
                        //printf("this is plot keywords %s\n",input[s].plot_keywords);
                    break;

                    case 18:
                        strncpy(input[s].movie_imdb_link, token, 50);
                        memset(token, 0, 300);//empties token array
                        //printf("this is imbd link %s\n",input[s].movie_imdb_link);
                    break;

                    case 19:
                        input[s].num_user_for_reviews=atoi(token);
                        memset(token, 0, 300);//empties token array
                        //printf("this is num user for review %i\n",input[s].num_user_for_reviews);
                    break;

                    case 20:
                        strncpy(input[s].language, token, 50);
                        memset(token, 0, 300);//empties token array
                        //printf("this is language %s\n",input[s].language);
                    break;

                    case 21:
                        strncpy(input[s].country, token, 50);
                        memset(token, 0, 300);//empties token array
                        //printf("this is language %s\n",input[s].country);
                    break;

                    case 22:
                        strncpy(input[s].content_rating, token, 50);
                        memset(token, 0, 300);//empties token array
                        //printf("this is content rating %s\n",input[s].content_rating);
                    break;

                    case 23:
                        input[s].budget=atoi(token);
                        memset(token, 0, 300);//empties token array
                        //printf("this is budget %i\n",input[s].budget);
                    break;

                    case 24:
                        input[s].title_year=atoi(token);
                        memset(token, 0, 300);//empties token array
                        //printf("this is title year %i\n",input[s].title_year);
                    break;

                    case 25:
                        input[s].actor_2_facebook_likes=atoi(token);
                        memset(token, 0, 300);//empties token array
                        //printf("this is actor 2 facebook likes %i\n",input[s].actor_2_facebook_likes);
                    break;

                    case 26:
                        input[s].imdb_score=atoi(token);
                        memset(token, 0, 300);//empties token array
                        //printf("this is imdb %i\n",input[s].imdb_score);
                    break;

                    case 27:
                        input[s].aspect_ratio=atoi(token);
                        memset(token, 0, 300);//empties token array
                        //printf("this is aspect ratio %i\n",input[s].aspect_ratio);
                    break;


                }
                //printf("we got a comma %s\n",token);
                j=0;
                i++;
            }
            else
            {
                if(line[i]=='a'||line[i]=='A'||line[i]=='b'||line[i]=='B' || line[i]=='c'||line[i]=='C'||line[i]=='d'||line[i]=='D'||line[i]=='e'||line[i]=='E'||
                   line[i]=='f'||line[i]=='F'||line[i]=='g'||line[i]=='G' || line[i]=='h'||line[i]=='H'||line[i]=='i'||line[i]=='I'||line[i]=='j'||line[i]=='J'||
                   line[i]=='k'||line[i]=='K'||line[i]=='l'||line[i]=='L' || line[i]=='m'||line[i]=='M'||line[i]=='n'||line[i]=='N'||line[i]=='o'||line[i]=='O'||
                   line[i]=='p'||line[i]=='P'||line[i]=='q'||line[i]=='Q' || line[i]=='r'||line[i]=='R'||line[i]=='s'||line[i]=='S'||line[i]=='t'||line[i]=='T'||
                   line[i]=='u'||line[i]=='U'||line[i]=='v'||line[i]=='V' || line[i]=='w'||line[i]=='W'||line[i]=='x'||line[i]=='X'||line[i]=='y'||line[i]=='Y'||
                   line[i]=='z'||line[i]=='Z'||line[i]==' '||line[i]=='?'||line[i]=='_'||line[i]=='-'||line[i]=='.'||line[i]=='/'||line[i]=='|'||line[i]=='?'||
                   line[i]=='1'||line[i]=='2'||line[i]=='3'||line[i]=='4'||line[i]=='5'||line[i]=='6'||line[i]=='7'||line[i]=='8'||line[i]=='9'||line[i]=='0'
                   ){

                    token[j]=line[i];
                    j++;
                   }



                //token[j]=line[i];
               // printf("we got a character %c\n",line[i]);
                i++;

            }


        }

            input[s].movie_facebook_likes=atoi(token);
            memset(token, 0, 300);//empties token array
            //printf("this is movie facebook likes %i\n",input[s].movie_facebook_likes);
            s++;

    }
    const char *param = argv[2];
    //Determine index to sort on
    //printf("param HERE %s\n", param);
   int indexToSortOn = findColumnIndex(param);
   //printf("indexToSortOn %d\n", indexToSortOn);
   //printf("param after index %s\n", param);
    //Determine datatype of index
    data_type = findColumnType(param);
    //printf("data_type %s\n", data_type);
    //printf("param %s\n", param);
    //if statement for invalid

    free(first_line);
    int arraySize = s;
    int q=0;

        mergeSort(&input,0,s-1,data_type,param);
        for(q=0; q<s; q++){
      printf("this is title %s\n",input[q].movie_title);
        }


        data_mine(input, arraySize-1);

        print_csv_file(&input, arraySize-1);

        */

    return 0;
}
