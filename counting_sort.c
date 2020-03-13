#include<stdio.h>

int main(){
    int A[] ={2,3,5,7,0,2,2,4,4,4,5};
    int B[12];
    int C[8]={0};
    int i;
    for ( i = 0; i <11; i++)
    {
        C[A[i]] = C[A[i]] + 1;
    }
    
    for ( i = 1; i <8; i++)
    {
        C[i] = C[i] + C[i-1];
    }
    
    for ( i = 10; i >=0; i--)
    {   
        B[C[A[i]]] = A[i];
        C[A[i]] = C[A[i]]-1;
    }
    
    for ( i = 1; i <= 11; i++)
    {
        printf("%d\n",B[i]);
    }
    
}