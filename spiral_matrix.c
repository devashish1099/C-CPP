#include<stdio.h>

int main(){
    int A[4][5]={{1,2,3,4,5},
                 {14,15,16,17,6},
                 {13,20,19,18,7},
                 {12,11,10,9,8}};
    int rows = 4;
    int cols = 5;
    int max_rows = 4;
    int max_cols = 5;
    int min_cols = 0;
    int min_rows = 1;
    int a = 0;
    int b = 1;
    int i=0,j=0,k;
    for ( k = 0; k < rows*cols; k++)
    {
        printf("%d  %d  %d\n",A[i][j],i,j);
        i = i+a;
        j= j+b;
        if(j == max_cols -1 && i==min_rows -1){
            a = 1;
            b = 0;
            max_cols-=1;
        }
        if (i == max_rows -1 && j == max_cols)
        {
            a = 0;
            b = -1;
            max_rows-=1; 
        }
        if (j == min_cols && i==max_rows)
        {
            a=-1;
            b=0;
            min_cols +=1;
        }
        if ( i == min_rows && j ==min_cols-1 )
        {
            a = 0;
            b =1;
            min_rows+=1;
        }   
    }
}