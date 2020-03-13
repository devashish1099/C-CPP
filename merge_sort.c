#include<stdio.h>

int merge(int A[], int p ,int r ,int q){
    int B[q-p+1],i;
    int a = 0;
    int b = 0;
    
    for ( i = 0; i<q-p+1 ; i++)
    {
        if(a<(r-p+1) && b<(q-r))
        {
            if (A[p+a] < A[r+1+b])
            {
                B[i] = A[p+a];
                a++;
            }else
            {
                B[i] = A[r+1+b];
                b++;
            }
        }
        else if (a >= (r-p+1) && b<(q-r))
        {
            B[i] = A[r+1+b];
            b++;
        }else if (b >= q-r && a<(r-p+1))
        {
            B[i] = A[p+a];
            a++;
        }
    }
    
    for ( i = 0; i < q-p+1; i++)
    {
        A[p+i] = B[i];
    }
    
}

int mergeSort(int A[], int p ,int q){
    int r = (p+q)/2;
    if(p<q)
    {
        mergeSort(A,p,r);
        mergeSort(A,r+1,q);
        merge(A,p,r,q);
    }
    
}

int main(){
    int A[]={4,5,3,2,1,6,7,9,8,0} ;
    int n = 10;
    int i;
    mergeSort(A,0,n-1);
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",A[i]);
    }
}