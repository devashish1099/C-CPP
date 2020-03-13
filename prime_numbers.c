#include<stdio.h>
#include<math.h>

#define N 70

int main(){
    int prime[N],i,j,k;
    int noofprime = 2;
    int primeChecker = 0;
    int Y = sqrt(N);
    prime[0] = 2;
    prime[1] = 3;
    for ( i = 5; i < N; i= i + 2)
    {
        for ( j = 0; j < noofprime ; j++)
        {
            if (prime[j]>Y)
            {
                break;
            }
            
            if(i%prime[j] == 0){
                primeChecker++;
                break;
            }
        }

        if(primeChecker == 0){
            prime[noofprime] = i;
            noofprime++;
        }
        else
        {
            primeChecker = 0 ;
        }  
    }

    for ( k = 0; k < noofprime; k++)
    {
        printf("%d\n",prime[k]);
    }
    
    
}