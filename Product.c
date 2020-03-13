#include<stdio.h>

#define N 4

int main(){
    int A[N],i;
    int left_Product[N] = {1};
    int right_Product[N] ={1};
    int result[N];

    printf("enter %d elements in array",N);
    for ( i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }

    left_Product[0] = A[0];
    right_Product[N-1] = A[N-1];

    for ( i = 1; i < N; i++)
    {
        left_Product[i] = left_Product[i-1]*A[i];
    }
    

    for ( i = N-2; i >= 0; i--)
    {
        right_Product[i] = right_Product[i+1]*A[i];
    }
    
    for ( i = 1; i < N-1; i++)
    {
        result[i] = left_Product[i-1]*right_Product[i+1];
    }
    
    result[0] = right_Product[1];
    result[N-1] = left_Product[N-2];

    for ( i = 0; i < N; i++)
    {
        printf("%d \n ",result[i]);
    }
    
}