#include<stdio.h>
#include<stdlib.h>

typedef struct node Node;

struct node
{
    int n;
    int data;
    Node* next;
};

Node* createList(){                                                             // function to create a list
    Node* list;
    Node* head;
    head = (Node*) malloc(sizeof(Node));
    list = head;
    head->next = NULL;
    return list;
}

void insertNode (Node* list,Node* extra,int n){                                              //function to insert a node a given n or to start a list
    Node* temp = list->next;
    int z = 0;

    if (temp == NULL)
    {   
        list->next = extra;
        extra->next = NULL;
        z = 2;

    }
    
    while (temp != NULL && z ==0)
    {
        if (temp->n == n ){}
        {
            extra->next =  temp->next;
            temp->next = extra;
            z = 1;
        }
        temp = temp->next;

    }
    if (z == 0)
    {
        printf("node not found\n");
    }
    else if (z == 1)
    {
        printf("node inserted successfully\n");
    }
    else if (z == 2)
    {
        printf("list started successfully with its first node\n");
    }
}

int isEmpty(Node* list){                                                                // returns 0 if list is empty otherwise returns 1
    if (list->next == NULL)
    {
        return 0;
    }else
    {
        return 1;
    }
}

Node* findbyn(Node* list ,int n){                                                   // to find node by n
    Node* temp = list->next;
    int z = 0;
    while (temp != NULL)
    {
        if (temp->n == n)
        {
            return temp;
        }
        temp = temp->next;
    }
    if (z == 0)
    {
        printf("node not found\n");
    }
    return NULL;
}


Node* findbydata(Node* list ,int data){                                           // to find node by data
    Node* temp = list->next;
    int z = 0;
    while (temp != NULL)
    {
        if (temp->data == data)
        {
            return temp;
        }
        temp = temp->next;
    }
    if (z == 0)
    {
        printf("node not found\n");
    }
    return NULL;
}

void deleteNode(Node* list ,int n){                                             //to delete node
    Node* temp = list->next;
    Node* currentNode = list;

    while (temp != NULL)
    {
        if (temp->n == n)
        {   
            currentNode->next = temp->next;
            free(temp);
            temp = NULL;
            break;
        }
        currentNode = temp;
        temp = temp->next;
    }
    
}

void printList(Node* list){                                                             //to print list
    Node* temp = list->next;
    while (temp != NULL)
    {
        printf("\n n = %d \n data = %d \n",temp->n,temp->data);
        temp = temp->next;
    }
    
}

Node* makeNode(int n, int data){                                                        // to make a node element
    Node* temp = (Node*) malloc(sizeof(Node));
    temp->n = n;
    temp->data = data;
    return temp;
}

int main(){
    Node* devu = createList();
    int n = isEmpty(devu);
    printf("%d\n",n);

    Node*first;
    first = (Node*) malloc(sizeof(Node));
    first->n = 1;
    first->data = 69;
    Node* second = makeNode(3,70);
    insertNode(devu,first,0);
    insertNode(devu,second,1);
    n = isEmpty(devu);
    printf("%d\n",n);
    if (n)
    {
        printList(devu);
    }
    deleteNode(devu,1);
    printList(devu);
    Node* desh = findbyn(devu,1);
    desh = findbydata(devu,90);
}
