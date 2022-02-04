#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node *next;
}*head,*temp;
int count=0;
void insert(int val){
   struct node* newnode = (struct node*)malloc(sizeof(struct node));
   newnode->data = val;
   newnode->next = NULL;
   if(head == NULL){
      head = newnode;
      temp = head;
      count++;
   } else {
      temp->next=newnode;
      temp=temp->next;
      count++;
   }
}
void display(){
   if(head==NULL)
      printf("no node ");
   else {
      temp=head;
      while(temp!=NULL) {
         printf("%d ",temp->data);
         temp=temp->next;
      }
   }
}

void last(int n){
   int i;
   temp=head;
   for(i=0;i<count-n;i++){
      temp=temp->next;
   }
   printf("\n%drd node from the end of linked list is : %d" ,n,temp->data);
}
int main(){
   
   struct node* head = NULL;
   int n;
    printf("Enter the number of the term to print : ");
   scanf("%d", &n);
   insert(1);
   insert(2);
   insert(3);
   insert(4);
   insert(5);
   insert(6);
   printf("\nlinked list is : ");
   display();
   last(n);
   return 0;
}