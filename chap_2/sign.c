#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int charcmp(char* x, char* y) { return (int)*x - *y;}

#define WORDMAX 100

int main(void) {
    char word[WORDMAX], sig[WORDMAX];
    while(scanf("%s", word) != EOF) {
        strcpy(sig, word);
        qsort(sig, strlen(sig), sizeof(char), charcmp);
        printf("%s %s\n", sig, word);
    }
    return 0;
}
