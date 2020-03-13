#include<stdio.h>

void swap(int a[]){
    a[3]=99999;
};

int main(){
    int a[5]={1,2,3,4,5};
    int i;
    swap(a);
    for(i = 0;i<5;i++){
        printf("%d",a[i]);
    }
}