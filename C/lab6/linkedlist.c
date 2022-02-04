#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct node {
    int data;           
    struct node *next; 
}*head;
int size =1;
int createList(int n){
    struct node *newNode, *temp;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL){
        printf("Unable to allocate memory.");
        exit(0);
    }
    printf("Enter the data of node 1: ");
    scanf("%d", &data);
    head->data = data;
    head->next = NULL; 
    temp = head;
    for(i=2; i<=n; i++){
        newNode = (struct node *)malloc(sizeof(struct node));
        if(newNode == NULL){
            printf("Unable to allocate memory.");
            break;
        }
        printf("Enter the data of node %d: ", i);
        scanf("%d", &data);
        newNode->data = data; 
        newNode->next = NULL; 
        temp->next = newNode; 
        temp = temp->next;    
        size++;
    }
}
void traverseList(){
    struct node *temp; 
    if(head == NULL){
        printf("List is empty.");
        return;
    }
    temp = head;
    while(temp != NULL){
        printf("Data = %d\n", temp->data); 
        temp = temp->next;                 
    }
}
void reverse(struct node** head_ref){
    struct node* prev = NULL;
    struct node* current = *head_ref;
    struct node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head_ref = prev;
}
void printList(struct node* head){
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}
void insertNodeAtMiddle(int data, int pos){
    int i;
    struct node *newNode, *temp;
    newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode == NULL){
        printf("Unable to allocate memory.");
    }
    else{
        newNode->data = data;
        newNode->next = NULL;
        temp = head;
        for(i=2; i<=pos-1; i++){
            temp = temp->next;
            if(temp == NULL)
                break;
        }
        if(temp != NULL){
            newNode->next = temp->next; 
            temp->next = newNode;
            printf("DATA INSERTED SUCCESSFULLY\n");
        }else{
            printf("UNABLE TO INSERT DATA AT THE GIVEN POSITION\n");
        }
    }
}
void deleteNode(struct node **head_ref, int position){
   if (*head_ref == NULL)
      return;
   struct node* temp = *head_ref;
    if (position == 0){
        *head_ref = temp->next;   
        free(temp);               
        return;
    }
    for (int i=0; temp!=NULL && i<position-1; i++)
         temp = temp->next;
    if (temp == NULL || temp->next == NULL)
         return;
    struct node *next = temp->next->next;
    free(temp->next); 
    temp->next = next;
}
void deleteKey(struct node** head_ref, int data){
    struct node *temp = *head_ref, *prev;
    while (temp != NULL && temp->data == data){
        *head_ref = temp->next;
        free(temp); 
        temp = *head_ref;
    }
    while (temp != NULL){
        while (temp != NULL && temp->data != data){
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
            return;
        prev->next = temp->next;
        free(temp);
        temp = prev->next;
    }
}
bool search(struct node* head, int data){
    if (head == NULL)
        return false;
    if (head->data == data)
        return true;
    return search(head->next, data);
}
int main(){
    int n,pos,data;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    if(n==0){
        printf("List is empty");
    }else{
        createList(n);
        printf("\nData in the list \n");
        traverseList();
        reverse(&head);
        printf("After reversing the lis: ");
        printList(head);
        printf("\nEnter the pos to add value: ");
        scanf("%d",&pos);
        printf("Enter the data for position %d: ",pos);
        scanf("%d",&data);
        insertNodeAtMiddle(data,pos);
        printList(head);
        printf("\nEnter the position to delete the node: ");
        scanf("%d",&pos);
        deleteNode(&head,pos);
        printList(head);
        printf("\nEnter key to delete a node: ");
        scanf("%D",&data);
        deleteKey(&head,data);
        printList(head);
        printf("\nLength of List is: %d",size);
        printf("\nEnter the value to search: ");
        scanf("%d",&data);
        search(head, data)? printf("Yes") : printf("No");
    }
    return 0;
}