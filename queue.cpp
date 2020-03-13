#include<iostream>

using namespace std;

typedef struct node Node;

struct node
{
    int data;
    Node* next;
};

class queue
{
private:
    Node* front ;
    Node* rear;
public:
    void makeNull();
    void enQueue(int a);
    void deQueue();
    int isEmpty();
};

void queue::makeNull()
{
    front = (Node*) malloc(sizeof(Node));
    front->next = NULL;
}

void queue::enQueue(int a)
{
    Node* temp = (Node*) malloc(sizeof(Node));
    temp->data = a;
    if (front->next == NULL)
    {
        front->next = temp;
        rear = temp;
    }
    else{
        rear->next = temp;
        rear = temp;
    }
}

void queue::deQueue(){
    if (front->next == NULL)
    {
        exit;
    }
    else{
        Node* temp = front->next;
        front->next = temp->next;
        temp->next = NULL;
        delete(temp);
    }
}

int queue::isEmpty(){
    if (front->next == NULL)
    {
        return 1;
    }else{
        return 0;
    }   
}

int main(){
    queue anuj;
    anuj.makeNull();
    cout<<anuj.isEmpty()<<endl;
    anuj.enQueue(1);
    cout<<anuj.isEmpty()<<endl;
    anuj.deQueue();
    cout<< anuj.isEmpty()<<endl;
}