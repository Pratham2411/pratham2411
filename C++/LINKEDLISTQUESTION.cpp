#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
    int data ;
    Node* next;
    Node(){
        cout<<"nothing"<<endl;
    }
    Node(int data ){
        this->data= data ;
        this->next=NULL;
    }
    ~Node(){
        cout<<"dtor is called :"<<this->data<<endl;
    }
};
void printll(Node* head ){
    Node* temp = head ;
    while (temp != NULL){
cout<<temp->data<<"->";
temp = temp->next ;
    }
}
 
 int printlen(Node*head){
    int cnt=0;
    Node* temp= head;
    while(temp!=NULL){
        cnt++;
        temp= temp->next;

    }
    return cnt;

 }

   void reversell(Node* &head){
  

   
    
        Node* prev= NULL;
    Node* curr= head ;
    while(curr!=NULL){
        Node* nextnode= curr->next;
curr->next=prev;
 prev= curr;
  curr= nextnode;
    } 
    head = prev ;
    
   }

void addonetolinkedll(Node* &head ){
  reversell(head);
    int carry=1;
    Node* temp = head ;
    while(temp->next!=NULL){
        int totalsum=temp->data+ carry;
        int digit = totalsum%10;
        carry= totalsum/10;
       temp->data = digit;
       temp = temp->next;
        if(carry==0){
            break ;
        }
    }
 if ( carry!= 0){
    int totalsum=temp->data+ carry;
        int digit = totalsum%10;
        carry= totalsum/10;
        temp->data = digit ;
       
        if(carry!=0){
            Node* newnode = new Node(carry) ;
            temp->next= newnode ;
        }

 }
  reversell(head);

}

 
    

int main (){
   
   Node* first = new Node(9);
   Node* second = new Node(9);
   Node* third = new Node(9);


   first->next= second ;
   second->next= third ;
  
   Node* head = first ;
   Node* prev = NULL;
   Node* curr= head ;

  printll(head);
  cout<<endl;
//   reversell(head);
 addonetolinkedll(head);
// reversell(head);
 printll(head);









}