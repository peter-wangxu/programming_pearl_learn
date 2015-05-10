#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

#define N 1000000
int s[N],n,i;
int cmp(const void *a, const void *b)
{
         return(*(int *)a-*(int *)b);
}
int main()
{
    FILE* file = fopen("data.txt", "r");
    n = 0;
    i = 0;
    while(!feof(file)) {
//        printf("n=%d, i=%d\t", n, i);
        s[n++] = i;
        fscanf(file, "%d",&i);
        //printf("%d\n", n);
    }
    fclose(file);
    clock_t start_t = clock();
    qsort(s,n,sizeof(s[0]),cmp);
    clock_t end_t = clock();
    double duration = (double)(end_t - start_t) / CLOCKS_PER_SEC;
    printf( "%f seconds\n", duration ); 
    //for(i=0;i<n;i++) printf("%d ",s[i]);
    return(0);
}
