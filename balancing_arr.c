#include<stdio.h>

int main(){
    int n;
    printf("enter the no of integaers : ");
    scanf("%d",&n);

    int A[n];
    int sum_smaller = 0;
    int sum_larger = 0;
    int i,balanced_idx[n];
    int c = 0;

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    

    for ( i = 1; i < n; i++)
    {
        sum_larger = sum_larger + A[i];
    }

    
    for (i = 0; i < n; i++)
    {
        if (sum_smaller == sum_larger)
        {
            balanced_idx[c] = i;
            c++;
        }
        sum_smaller = sum_smaller + A[i];
        sum_larger = sum_larger - A[i+1];
    }
    
    if (c == 0)
    {
        printf("\n -1\n");
    }
    else
    {
        for ( i = 0; i < c; i++)
        {
            printf("balanced_point[%d] = %d \n",i,balanced_idx[i]);
        }
    }
}