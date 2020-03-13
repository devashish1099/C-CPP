#include<stdio.h>
#include<stdlib.h>

int main(){
    int *i;
    int *array;

    i = (int *) malloc(sizeof(int));
    array = (int*) malloc(sizeof(int) * 10);
    *i = 3;
    array[4] = 3;
    printf("%d %d",*i , *(array+4));
    // printf("%p",array);
}