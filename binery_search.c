#include<stdio.h>
#include<math.h>

int main(){
    int A[]={2,4,5,6,9,11,20,32,65,98,110,123,128,158,168,198,201,204,205,258,268,299};
    int first =0;
    int last = 21;
    int key,i,mid;
    printf("enter the key : ");
    scanf("%d",&key);
    for ( i = 0; i < 22; i++)
    {
        mid = (first+last)/2;
        if (A[mid] == key)
        {
            printf("key found at index %d",i);
            break;
        }
        else if (A[first] >= A[last])
        {
            printf("key is not present");
            break;
        }
        
        else if(A[mid] > key)
        {
            last = mid -1;
        }
        else
        {
            first = mid +1;
        }
    }
    
}