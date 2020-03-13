#include<iostream>

class Stack{
      char strg[200];
      int t = 200;
    public :
      void makeNull(){
          t = 200;
      }

      void push(char a){
          t--;
          strg[t] = a;
      }

      char pop(){
          t++;
          return strg[t-1];
      }
      
      char top(){
          return strg[t];
      }

      int isEmpty(){
          if(t == 200){
              return 1;
          }
          else
          {
              return 0;
          }
      }
};

int main(){
    Stack anuj;
    
}