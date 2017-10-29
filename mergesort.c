#include<stdlib.h>
#include<stdio.h>

void print_csv_file(Records** finalInput, int arraySize, char* directoryPath, char* originalFilename, char* sortedColumn){

      char* filename = (char*)calloc(1,sizeof(char*)*(strlen(originalFilename)+7+strlen(sortedColumn)));

      char* modifiedOriginalFilename = (char*)calloc(1, sizeof(originalFilename));

      int i;
      for(i=0; i<strlen(originalFilename)-4; i++){
        modifiedOriginalFilename[i] = originalFilename[i];
      }

      strcat(filename, modifiedOriginalFilename);
      strcat(filename, "-sorted-");
      strcat(filename, sortedColumn);
      //strcat(filename, ".csv");

      printf("filename: %s\n", filename);

      FILE *file = fopen(filename, "w");

      i=0;

      while(i!=arraySize){

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
      fclose(file);
    }

void merge(Records** arr, int l, int m, int r, char * data_type, const char* param)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    Records* L= (Records*)malloc(sizeof(Records)*n1);
    Records* R= (Records*)malloc(sizeof(Records)*n2);
    //int L[n1], R[n2];//i think i should turn these into records

    for (i = 0; i < n1; i++)
        L[i] = (*arr)[l + i];
    for (j = 0; j < n2; j++)
        R[j] = (*arr)[m + 1+ j];

    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray

    //printf("this is data type %s\n",data_type);

    if(strcmp(data_type,"int")==0 ||    strcmp(data_type,"double")==0  ){


     if(strcmp(param,"duration")==0 ){
           // printf("duration");
        while (i < n1 && j < n2)
    {
        if (L[i].duration <= R[j].duration)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }


    }



    if(strcmp(param,"num_critic_for_reviews")==0 ){
            printf("num_crtis");
         while (i < n1 && j < n2)
    {
        if (L[i].num_critic_for_reviews <= R[j].num_critic_for_reviews)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }


    }



    if(strcmp(param,"director_facebook_likes")==0 ){
       while (i < n1 && j < n2)
    {
        if (L[i].director_facebook_likes <= R[j].director_facebook_likes)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }


    }


    if(strcmp(param,"actor_3_facebook_likes")==0 ){
        while (i < n1 && j < n2)
    {
        if (L[i].actor_3_facebook_likes <= R[j].actor_3_facebook_likes)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }


    }

    if(strcmp(param,"actor_1_facebook_likes")==0 ){
        while (i < n1 && j < n2)
    {
        if (L[i].actor_1_facebook_likes <= R[j].actor_1_facebook_likes)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }


    }

    if(strcmp(param,"gross")==0 ){
        while (i < n1 && j < n2)
    {
        if (L[i].gross <= R[j].gross)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }


    }

    if(strcmp(param,"num_voted_users")==0 ){
        while (i < n1 && j < n2)
    {
        if (L[i].num_voted_users <= R[j].num_voted_users)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }


    }


    if(strcmp(param,"cast_total_facebook_likes")==0 ){
        while (i < n1 && j < n2)
    {
        if (L[i].cast_total_facebook_likes <= R[j].cast_total_facebook_likes)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }


    }

    if(strcmp(param,"facenumber_in_poster")==0 ){
        while (i < n1 && j < n2)
    {
        if (L[i].facenumber_in_poster <= R[j].facenumber_in_poster)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }



    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }


    }

    if(strcmp(param,"num_user_for_reviews")==0 ){
        while (i < n1 && j < n2)
    {
        if (L[i].num_user_for_reviews <= R[j].num_user_for_reviews)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }



    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }


    }


    if(strcmp(param,"budget")==0 ){
        while (i < n1 && j < n2)
    {
        if (L[i].budget <= R[j].budget)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }



    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }


    }

    if(strcmp(param,"title_year")==0 ){
        while (i < n1 && j < n2)
    {
        if (L[i].title_year <= R[j].title_year)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }



    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }


    }

    if(strcmp(param,"actor_2_facebook_likes")==0 ){
        while (i < n1 && j < n2)
    {
        if (L[i].actor_2_facebook_likes <= R[j].actor_2_facebook_likes)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }


    }

    if(strcmp(param,"imdb_score")==0 ){
       while (i < n1 && j < n2)
    {
        if (L[i].imdb_score <= R[j].imdb_score)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }


    }

    if(strcmp(param,"aspect_ratio")==0 ){
        while (i < n1 && j < n2)
    {
        if (L[i].aspect_ratio <= R[j].aspect_ratio)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }


    }

    if(strcmp(param,"movie_facebook_likes")==0 ){
        while (i < n1 && j < n2)
    {
        if (L[i].movie_facebook_likes <= R[j].movie_facebook_likes)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }


    }




    }







    if(strcmp(data_type,"string")==0){
        if(strcmp(param,"color")==0 ){

        while (i < n1 && j < n2)
    {

        if (strcmp(L[i].color,R[j].color)<=0)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }




        }

        if(strcmp(param,"director_name")==0 ){

        while (i < n1 && j < n2)
    {

        if (strcmp(L[i].director_name,R[j].director_name)<=0)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }



    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }




        }

        if(strcmp(param,"actor_2_name")==0 ){

        while (i < n1 && j < n2)
    {

        if (strcmp(L[i].actor_2_name,R[j].actor_2_name)<=0)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }




        }

         if(strcmp(param,"genres")==0 ){

         while (i < n1 && j < n2)
    {

        if (strcmp(L[i].genres,R[j].genres)<=0)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }



    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }





        }

         if(strcmp(param,"actor_1_name")==0 ){

         while (i < n1 && j < n2)
    {

        if (strcmp(L[i].actor_1_name,R[j].actor_1_name)<=0)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }




        }

         if(strcmp(param,"movie_title")==0 ){


         while (i < n1 && j < n2)
    {

        if (strcmp(L[i].movie_title,R[j].movie_title)<=0)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }




        }

        if(strcmp(param,"actor_3_name")==0 ){

        while (i < n1 && j < n2)
    {

        if (strcmp(L[i].actor_3_name,R[j].actor_3_name)<=0)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }






        }

        if(strcmp(param,"plot_keywords")==0 ){

        while (i < n1 && j < n2)
    {

        if (strcmp(L[i].plot_keywords,R[j].plot_keywords)<=0)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }





        }


        if(strcmp(param,"movie_imdb_link")==0 ){

        while (i < n1 && j < n2)
    {

        if (strcmp(L[i].movie_imdb_link,R[j].movie_imdb_link)<=0)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }




        }


        if(strcmp(param,"language")==0 ){

        while (i < n1 && j < n2)
    {

        if (strcmp(L[i].language,R[j].language)<=0)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }



    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }




        }


        if(strcmp(param,"country")==0 ){

        while (i < n1 && j < n2)
    {

        if (strcmp(L[i].country,R[j].country)<=0)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }



        }


        if(strcmp(param,"content_rating")==0 ){

        while (i < n1 && j < n2)
    {

        if (strcmp(L[i].content_rating,R[j].content_rating)<=0)
        {
            (*arr)[k] = L[i];
            i++;
        }
        else
        {
            (*arr)[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }




        }






    }




}


void mergeSort(Records ** input, int l, int r, char* data_type,const char* param)
{
    if (l < r)
    {
        int m = l+(r-l)/2;

        mergeSort(input, l, m, data_type,param);
        mergeSort(input, m+1, r,data_type,param);
        merge(input, l, m, r, data_type,param);
    }
}





/*
void printArray(int A[], int size)
{

    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}





int main()
{


    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;

}

*/
