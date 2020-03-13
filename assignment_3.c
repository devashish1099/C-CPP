#include<stdio.h>

void xyz(int *A){
    int i,j;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%d\t",A[i]);
        }
        printf("\n");
    }
    
}

int main(){
    int A[][5] ={1};
    xyz(&A[0][0]);
}