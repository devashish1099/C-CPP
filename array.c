#include<stdio.h>

int main(){
    int A[]={0,1,2,3};
    int *ptr = A;
    int i;
    for ( i = 0; i < 4; i++)
    {
        printf("%d\n",*(++ptr));
    }
    
}