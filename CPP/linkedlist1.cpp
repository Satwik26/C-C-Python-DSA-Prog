#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtHead(node* &head,int val){
    node* n =new node(val);
    n->next=head;
    head=n;
}
void insertAtTail(node* &head,int val){
    node* n =new node(val);
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
bool search(node* head,int key){
    while(head->next!=NULL){
        if(head->data==key){
            return true;
        }
    }
    return false;
}
node* deleteAtHead(node* &head){
    node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
node* deletion(node* &head,int val){
    if(head==NULL){
        cout<<"no";
    }
    if(head->next=NULL){
        deleteAtHead(head);
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    
    node* todelete = temp->next;
    head->next=temp->next->next;
    delete todelete;
    return head;
}
node* reverse(node* &head){
    node* prev=NULL, *current=head, *nxt;
    while(current!=NULL){
        nxt=current->next;
        current->next=prev;
        prev=current;
        current=nxt;
    }
    return prev;
}
node* reverseK(node* &head,int k){
    node* prev=NULL,* current=head,*nxt;
    int count=0;
    while(current!=NULL&&count<k){
        nxt =current->next;
        current->next=prev;
        prev=current;
        current=nxt;
        count++;
    }
    if(nxt!=NULL){
        head->next=reverseK(nxt,k);
    }
    return prev;
}
bool detectCycle(node* &head){
    node* slow=head,*fast=head;
    while(fast->next!=NULL&&fast!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return 1;
        }
    }
    return 0;
}
int main(){
    node* head=NULL;
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,4);
    
    display(head);
    //cout<<deletion(head,4);
    node* newhead=reverseK(head,2);
    display(newhead);
    return 0;
}
