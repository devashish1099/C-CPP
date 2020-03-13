#include<stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


int sort (int A[],int n){
    int i,j,temp;
    int x = 0;
    for ( i = 0; i < n; i++)
    {
        x = 0;
        for ( j = i; j > 0 && x ==0 ; j--)
        {
            if(A[j] < A[j-1]){
                swap(&A[j],&A[j-1]);
            }else
            {
                x = 1;
            }
        }
    }
}


int main(){
    int n;
    scanf("%d",&n);
    int A[n],E[n],O[n],i;
    int a = 0;
    int b = 0; 
    int sum = 0 ;
    for ( i = 0; i < n; i++)
    {   
        scanf("%d",&A[i]);  
    }
    sort(A,n);
    for ( i = 0; i < n; i++)
    {
        if (A[i]%2 == 0)
        {
            E[a] = A[i];
            a++;
        }else
        {
            O[b] = A[i];
            b++;   
        }
    }
    
    for ( i = 0; i < a; i++)
    {
        printf("%d ",E[i]);
        sum = sum + E[i];
    }
    printf("%d ",sum);
    sum  = 0;
    for ( i = 0; i < b; i++)
    {
        printf("%d ",O[i]);
        sum = sum + O[i];
    }  
    printf("%d ",sum);
}