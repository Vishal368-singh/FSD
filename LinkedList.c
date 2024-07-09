// ..................Singly linked list............
#include<stdio.h>
#include<stdlib.h>
//................Struct node...................
typedef struct Node
{
    int data;
    struct Node * next;
}sll;
//....................Prototype...................
sll * createNode(int);
sll * insertNode(sll*,int);
sll * insertAtBegin(sll*,int);
sll * sum(sll*,int );
sll * deleteNode(sll*, int);
void display(sll *);
sll * num(sll *);
// ..................Main Function................
int main(){
    sll * head= NULL;
    head = insertNode(head,10);
    insertNode(head,20);
    insertNode(head,30);
    insertNode(head,40);
    insertNode(head,50);
    insertNode(head,60);
    insertNode(head,70);
    head= insertAtBegin(head,1);
    display(head);
    sum(head,4);
    num(head);
    head = deleteNode(head, 3);
    // display(head);
    return 0;
}
// ...........Creation of node........................
sll * createNode(int data){
    sll * newNode= (sll *)malloc(sizeof(sll ));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}
//...............Insert at end.........................
sll * insertNode(sll * head,int data){
    if (head==NULL){
        head= createNode(data);
    }else{
        sll * temp=head;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=createNode(data);
    }
    return head;
}
//.................Insert at begining....................
sll * insertAtBegin(sll *head,int data){
    sll *temp = head;
    head = createNode(data);
    // head->data =data;
    head->next =temp;
    return head;
}
//...............Display the linked list................. 
void display(sll * head){
    sll * temp= head;
    while (temp){
        printf("%d ",temp->data);
        temp=temp->next;
    }
} 
// ...................Sum of numbers......................
sll * sum(sll *head, int k){
    sll *temp =head;
    int sum =0;
    while(k>0){
        sum += temp->data;
        temp = temp ->next;
        k--;
    }
    printf("\nSum of all element :%d",sum);
}
// ......................Number of Nodes in linked list.............
sll * num(sll *head)
{
    sll *temp = head;
    int count = 1;
    while(temp->next!= NULL)
    {
        count+=1;
        temp = temp->next;
    }
    printf("\nNumber of nodes : %d",count);
}
// ....................Delete of nodes in linked list.....................
sll * deleteNode(sll *head, int pos){
    sll *temp = head;
    sll *temp1 = head;
    int count = 1;
    while(count<pos)
    {
        temp1 = temp;
        temp = temp->next;
        count+=1;
    }
    temp1->next = temp->next;
    head = temp;
    printf("\nDeleted Successfully\n");
    display(head);
    return head;
}