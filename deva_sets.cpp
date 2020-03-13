#include<iostream>

using namespace std;

/* Naam sudhar sbka*/
/* koi function ka start small koi ka bada mat rakh koi convention follow kar*/
/* Datatype small hote h int float stack vector etc.*/

class Set{

    int n;
    int* lists = NULL;
    int counter = 0;

    public:

        Set(int a){
            n = a;
            lists = new int[n];
        }
        Set(const Set& A){
            n = A.Length();
            lists = new int[n];
            for (size_t i = 0; i < n; i++)
            {
                lists[i] = A.getn(i);
                counter++;
            }
        }
        void setn(int a , int x){
            lists[a] = x;
        }

        void Resetn(int a){
            n = a;
        }

        int Length() const{
            return n;
        }

        int getn(int n) const{
            return lists[n];
        }

        void insertArr(int A[],int a){
            for (size_t i = 0; i < a; i++)
            {
                lists[counter] = A[i];
                counter++;
            }
            
        }

        void insert (int x){
            lists[counter] = x;
            counter++;
        }

        void print(){
            cout<<endl;
            for (size_t i = 0; i < counter; i++)
            {
                cout<<lists[i]<<"\t";
            }
            cout<<endl;
        }

        Set intersection (Set A){
            int B[n];
            int ct = 0;
            for (size_t i = 0; i < n; i++)
            {
                for (size_t j = 0; j < A.Length() ; j++)
                {
                    if(lists[i] == A.getn(j)){
                        B[ct] = lists[i];
                        ct++;
                        A.setn(j,0);
                        break;
                    }
                }
            }
            Set C(10);
            for (size_t i = 0; i < ct; i++)
            {
                C.insert(B[i]);
            }
            
            return C;
        }

        void operator= (const Set &A){
            Resetn(A.Length());
            delete[] lists;
            lists = new int[n];
            for (size_t i = 0; i < n; i++)
            {
                lists[i] = A.getn(i);
                counter++;
            }
        }

};

int main(){

    /* Set me repetetive elements ni hote h*/
    Set A(7), B(8),C(5);
    int a[] = {1,1,1,2,2,3,4};
    int b[] = {1,1,2,3,3,4,4,6};
    A.insertArr(a,7);
    B.insertArr(b,8);
    A.print();
    B.print();
    C = A.intersection(B);
    C.print();
    B.print();

}