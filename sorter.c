
bool isValidColumn(char* columnArg){
  if(
  strcmp(columnArg, "color")!= 0
  && strcmp(columnArg, "director_name")!= 0
  && strcmp(columnArg, "num_critic_for_reviews")!= 0
  && strcmp(columnArg, "duration")!= 0
  && strcmp(columnArg, "director_facebook_likes")!= 0
  && strcmp(columnArg, "actor_3_facebook_likes")!= 0
  && strcmp(columnArg, "actor_2_name")!= 0
  && strcmp(columnArg, "actor_1_facebook_likes")!= 0
  && strcmp(columnArg, "gross")!= 0
  && strcmp(columnArg, "genres")!= 0
  && strcmp(columnArg, "actor_1_name")!= 0
  && strcmp(columnArg, "movie_title")!= 0
  && strcmp(columnArg, "num_voted_users")!= 0
  && strcmp(columnArg, "cast_total_facebook_likes")!= 0
  && strcmp(columnArg, "actor_3_name")!= 0
  && strcmp(columnArg, "facenumber_in_poster")!= 0
  && strcmp(columnArg, "plot_keywords")!= 0
  && strcmp(columnArg, "movie_imdb_link")!= 0
  && strcmp(columnArg, "num_user_for_reviews")!= 0
  && strcmp(columnArg, "language")!= 0
  && strcmp(columnArg, "country")!= 0
  && strcmp(columnArg, "content_rating")!= 0
  && strcmp(columnArg, "budget")!= 0
  && strcmp(columnArg, "title_year")!= 0
  && strcmp(columnArg, "actor_2_facebook_likes")!= 0
  && strcmp(columnArg, "imdb_score")!= 0
  && strcmp(columnArg, "aspect_ratio")!= 0
  && strcmp(columnArg, "movie_facebook_likes")!= 0){
    return true;
  }
  return false;
}
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

void listdir(const char *name, int indent)
{
    DIR *dir;
    struct dirent *entry;

    if (!(dir = opendir(name)))
        return;

    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_type == DT_DIR) {
            char path[1024];
            if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0)
                continue;
            snprintf(path, sizeof(path), "%s/%s", name, entry->d_name);
            printf("%*s[%s]\n", indent, "", entry->d_name);
            listdir(path, indent + 2);
        } else {
            printf("%*s- %s\n", indent, "", entry->d_name);
        }
    }
    closedir(dir);
}


int main(int argc, char const *argv[]) {
  Records* input = (Records*)malloc(sizeof(Records)*8000);

  int indexToSortOn = -1;
  char*data_type = (char*)malloc(sizeof(char)*10);

  if(argc<3 || argc>7){
    printf("invalid arguments!\n");
    exit(1);
  }
  if(argc==4){
    printf("invalid arguments!\n");
    exit(1);
  }
  if(argc==6){
    printf("invalid arguments!\n");
    exit(1);
  }

  if(!isValidColumn(argv[2])){
    printf("invalid parameter\n");
    exit(1);
  }

  indexToSortOn = findColumnIndex(argv[2]);
  data_type = findColumnType(argv[2]);

  //sorter -c food
  if(argc==3){
    //Parse everything in this single directory
    //Every time we hit a CSV file in this direcotry, fork
    //Parse into database, mergesort

  }
  //sorter -c food -d thisdir/thatdir
  else if(argc==5){
    //Parse everything from this directory to that directory
  }
  //sorter -c  movie_title -d thisdir -o thatdir
  else if(argc==7){
    //Parse everything from this directory, output somewhere
  }

  return 0;
}
