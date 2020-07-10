#include<iostream>

using namespace std;

void heapify(int A[],int n,int i){
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if(left < n && A[left] > A[largest]){
        largest = left;
    }
    if(right < n && A[right] > A[largest]){
        largest = right;
    }
    if(largest!=i){
        int temp = A[i];
        A[i] = A[largest];
        A[largest] = temp;

        heapify(A,n,largest);
    }
}

void heapSort(int A[], int n){
    for(int i = n/2-1 ; i >=0 ;i--){
        heapify(A,n,i);
    }
    for(int i = n-1 ; i > 0 ; i--){
        int temp = A[0];
        A[0] = A[i];
        A[i] = temp;

        heapify(A,i,0);
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