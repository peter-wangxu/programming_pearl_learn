#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


#define N 1000000
int main()
{

    printf("Reading data from data.txt\n");
    FILE* file = fopen("data.txt", "r");
    if(file == NULL)
    {
        printf("ERROR in reading data.txt\n");
        return -1;
    }
    int i = 0;
    int n = 0;
    int s[N];
    memset(s, 0, N);
    while(!feof(file)) {
        fscanf(file, "%d\n", &s[n++]);
    }
    //Start to sort via bit map sorting
    char bitmap[N];
    memset(bitmap, 48, N);
    //Sorting
    clock_t start_t = clock();
    for(i=0; i < N; i++) {
        bitmap[s[i]] = 49;
    }
    clock_t end_t = clock();
    double duration = (double)(end_t - start_t) / CLOCKS_PER_SEC;
    printf( "%f seconds\n", duration );
    //Printing all sorted data
    //for(i=0;i < N; i++) {
    //    if(bitmap[i] == 49) {
    //        printf("%d\n", i+1);
    //    }
    //}
    fclose(file);
    return 0;
}
