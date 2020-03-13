#include<stdio.h>

int main(){
    int n;
    printf("enter the no of elements in array:");
    scanf("%d",&n);
    

    int A[n],i,j,k;
    int sum =0;
    int current_max =0;
    printf("enter the entries");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    
    for (j = 1; j<=n; j++)
    {
        for ( k = 0; k < n-(j-1); k++)
        {
            for ( i = 0; i < j; i++)
            {
                sum += A[k+i];
            }
            if (sum > current_max)
            {
                current_max = sum;
            }
            sum =0;
        }
        
    }
    
    printf("\n\n%d",current_max);
}