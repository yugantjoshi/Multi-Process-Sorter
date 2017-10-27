/* C program for Merge Sort */
#include<stdlib.h>
#include<stdio.h>

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(Records** arr, int l, int m, int r, char * data_type, const char* param)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    Records* L= (Records*)malloc(sizeof(Records)*n1);
    Records* R= (Records*)malloc(sizeof(Records)*n2);
    //int L[n1], R[n2];//i think i should turn these into records

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = (*arr)[l + i];
    for (j = 0; j < n2; j++)
        R[j] = (*arr)[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        (*arr)[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */

    while (j < n2)
    {
        (*arr)[k] = R[j];
        j++;
        k++;
    }




        }






    }




}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(Records ** input, int l, int r, char* data_type,const char* param)
{

    //printf("this is records %s,left %i,right%i \n",input[0].director_name,l,r);
    //printf("this is data type %s and param %s\n",data_type,param);

    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
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
