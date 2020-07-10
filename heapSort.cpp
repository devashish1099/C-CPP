#include<iostream>

using namespace std;

void heapify(int A[] , int n , int i){
    int parent = i;
    int left = i*2;
    int right = 2*i+1;

    if(A[left-1] > A[parent-1] && left <= n){
        parent = left;
    }
    if(A[right-1] > A[parent-1] && right <= n){
        parent = right;
    }
    if(parent != i){
        int temp = A[i-1];
        A[i-1] = A[parent-1];
        A[parent-1] = temp;

        heapify(A,n,parent);
    }
}

void heapSort(int A[] , int n){
    for(int i = n/2 ; i >=1 ; i--){
        heapify(A,n,i);
    }

    for(int i = n-1 ; i > 0 ;i--){
        int temp = A[0];
        A[0] = A[i];
        A[i] = temp;
        heapify(A,i,1);
    }
}

int main(){
    int A[] = {4,6,2,6,3,9,8,10,39,29};
    int n = sizeof(A)/sizeof(int);

    heapSort(A,n);

    for(int i = 0 ; i < n ; i++){
        cout << A[i] << " ";
    }
    cout << "\n";
    return 0;
}