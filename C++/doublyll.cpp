#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data ;
    Node* prev ;
    Node* next;
    Node(){
        this-> prev = NULL;
        this-> next=NULL;
    }
    Node(int data ){
        this->data = data;
        this->prev= NULL;
        this->next=NULL;
    }

};


void print(Node* head ){
    Node* temp = head ;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next ;
    }
}
int printlend(Node* head){
    Node* temp = head;
    int count = 0;
    
    while(temp!=NULL){
    count++;
   temp= temp->next;
    }
    return count ;
}
void insertathead(Node* &head , Node* & tail , int data ){
    if(head==NULL){
        Node* newnode = new Node(data);
        head= newnode ;
        tail = newnode ;
    }
    else {
        Node* newnode= new Node(data);
        newnode->next= head;
        head->prev= newnode;
        head = newnode;
    }
}
void insertattail(Node* &head, Node* &tail,int data ){
    if(head==NULL){
        Node* newnode = new Node(data);
        head= newnode ;
        tail = newnode ;
    }
  else {
    Node* newnode = new Node(data);
    newnode->prev= tail ;
    tail->next= newnode;
    tail = newnode ; 
  }
}

 void insertatanyposition(Node* &head , Node* &tail, int data , int position ){
   if(head==NULL){
    Node* newnode= new Node(data);
    head= newnode ;
    tail = newnode ;
   }
   
   else {
    int len = printlend(head);
       if(position == 1 ){
       insertathead(head, tail , data );
       }
       
       else if (position == len +1){
         insertattail(head,tail,data);
       }
       else {
        Node* newnode = new Node(data);
        Node* prev1= NULL;
        Node* curr= head;
        while(position !=1){
             position--;
            prev1= curr;
            curr= curr->next;
           
        }
         prev1->next=newnode;
         newnode->prev= prev1;
         newnode->next = curr;
         curr->prev=newnode;


       }
   }

 }

    void deleteatanyposition(Node* &head,Node* &tail, int position){
     if(head==NULL){
        cout<<"we cannot delete ";
        return ;
     }
     if(head==tail){
        Node* temp = head;
  delete temp ;
  head= NULL;
  tail=NULL;
        
     }
     int len = printlend(head);
     if(position==1){
        Node* temp = head;
        head= temp->next;
        temp->next=NULL;
        head->prev= NULL;
        delete temp;
     }
     else if(position==len){
        Node* temp = tail->prev;
        temp->next= NULL;
        tail->prev=NULL;
        delete tail ;
        tail = temp;
     }
     else {
         Node* prev1=NULL;
         Node* curr=head;
         while(position!=1){
          prev1=curr;
            curr=curr->next;
            position--;
         }
         Node* nextnode= curr->next;
         
         prev1->next=nextnode;
         curr->prev= NULL;
         curr->next=NULL;
         nextnode->prev=prev1;
         delete curr;

     }
    }
 



int main (){

Node* head = NULL;
Node* tail = NULL;
insertathead(head,tail,10);
insertathead(head,tail,20);
insertathead(head,tail,30);
insertattail(head,tail,40);
insertattail(head,tail,50);
insertattail(head,tail,60);
  print(head);cout<<endl;
deleteatanyposition(head, tail ,4);
//  insertatanyposition(head, tail , 1000 , 7 );
  print(head);

    // Node* first = new Node(10);
    //  Node*second  = new Node(20);
    //   Node*third = new Node(30);
    //    Node* fourth = new Node(40);
    //     Node*fifth = new Node(50);
    //     first->next= second;
    //  second->next= third ;
    //  third->next= fourth;
    //  fourth->next= fifth ; 
    //     Node* head = first ;
    //     Node* tail = fifth ;
  
    return 0;

}