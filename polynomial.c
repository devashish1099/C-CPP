#include<stdio.h>

int main(){
    int n;
    printf("enter the order of polynomial to be calculated: ");
    scanf("%d",&n);
    int A[n];
    int P , p ,i,x;
    p=1;
    P=0;
    for ( i = 0; i < n; i++)
    {
        printf("enter %d th power coefficient : ",i);
        scanf("%d",&A[i]);
    }

    printf("enter the value of x:");
    scanf("%d",&x);

    for ( i = 0; i < n; i++)
    {
        P = P + (A[i]*p);
        p = p*x;
    }
    
    printf("the value of polynomial for the x = %d is %d \n",x,P);
}