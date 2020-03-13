#include<stdio.h>
#include<math.h>

int main(){
    int x,n,a,i,temp;
    printf("enter the number whose power is to calculated : ");
    scanf("%d",&x);
    printf("which power of %d to calculate : ",x);
    scanf("%d",&n);

    if (n%2==0){
        a = 1;
        n = log2 (n);
    }else
    {
        a = x;
        n = log2 (n - 1);
    }

    
    
    for ( i = 0; i < n; i++)
    {
        x = x*x;
    }

    x = x*a;

    printf("%d\n",x);
    
}