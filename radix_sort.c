#include<stdio.h>
#include<math.h>

int countingSort(int A[],int n, int a){
    int i;
    int C[10] = {0};
    int B[n+1];
    int m = pow(10,a);
    for ( i = 0; i <n; i++)
    {
        C [( A[i] / m ) % 10 ] = C[ ( A[i] / m ) % 10 ] + 1;
    }
    
    for ( i = 1; i <10; i++)
    {
        C[i] = C[i] + C[i-1];
    }
    
    for ( i = n-1; i >=0; i--)
    {   
        B [C [ ( A[i] / m ) % 10 ]] = A[i];
        C [( A[i] / m ) % 10 ] = C[( A[i] / m ) % 10 ] - 1;
    }
    for ( i = 0; i < n; i++)
    {
        A[i] = B[i+1];
    }
    
}

int radix(int A[],int n){
    int max_number,max_digit,i;
    max_number = A[0];
    for ( i = 0; i < n; i++)
    {
        if (A[i] > max_number)
        {
            max_number = A[i];
        }
    }

    for ( i = 1; i < 20; i++)
    {
        if (max_number/10 == 0)
        {
            break;
        }else
        {
         max_number = max_number/10;   
        }
    }

    max_digit = i;
    for ( i = 0; i < max_digit; i++)
    {
        countingSort(A,n,i);
    }
}

int main(){
    int A[] = {4,66,87,98,4,6,8,7,12,13,14,234,456,444,68};
    int n= 15;
    int i;

    radix(A,n);
    
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",A[i]);
    }
}