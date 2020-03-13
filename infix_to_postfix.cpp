#include<iostream>

using namespace std;

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
          if (t == 200)
          {
              return 0;
          }
          else
          {
            t++;
            return strg[t-1];
            
          }
      }
      
      char top(){
          if (t == 200)
          {
              return 0;
          }
          else{
            return strg[t];
          }
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

void in_to_post(char stg[], char out[] , int a){
    Stack anuj;
    int m = 0;
    int t = 0;
    for (size_t i = 0; i < a; i++)
    {
        if((int)stg[i] > 96 && (int)stg[i] < 123){
            out[m] = stg[i];
            m++;
        }
        else if (anuj.isEmpty())
        {
            anuj.push(stg[i]);
        }
        else{
            switch ((int)stg[i])
            {
            case 43: case 45:
                if( anuj.top() == 43 || anuj.top() == 45 || anuj.top() == 40 ){
                    anuj.push(stg[i]);
                }else{
                    while (!anuj.isEmpty())
                    {   
                        if ((int)anuj.top()== 40)
                        {
                            break;
                        }
                        
                        out[m] = anuj.pop();
                        m++;
                    }
                    anuj.push(stg[i]);
                }
                break;

            case 47: case 42:
                anuj.push(stg[i]);
                break;
            
            case 40:
                anuj.push(stg[i]);
                t++;
                break;
            
            case 41:
                while ((int)anuj.top() != 40)
                {
                    out[m] = anuj.pop();
                    m++;
                }
                anuj.pop();
                t--;
                break;
                
            default:
                break;
            }
        }
    }
    while (!anuj.isEmpty())
    {
        out[m] = anuj.pop();
        m++;
    }
    
    if(m==a){
        cout<<"success\n";
    }
}

int main(){
    int x = 1;
    int a = 0;
    char stg[200];
    char output[200];
    cout<<"enter an expression\n";
    cout <<  "enter length of expression\n";
    cin >> a;
    for (size_t i = 0; i < a; i++)
    {
        cin>> stg[i];
    }
    
    in_to_post(stg,output,a);
    for (size_t i = 0; i < a; i++)
    {
        cout<<output[i];
    }
    
}