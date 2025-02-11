#include<bits/stdc++.h>
using namespace std ;

class Node{
    public :
    int data ;
    Node* next ;
    Node(){
       cout<<"i am inside def ctor"<<endl;
        this->next=NULL;
    }
    Node(int data ){
        // cout<<" i am inside parameter ctor"<<endl ;
        this->data=data;
        this->next=NULL;
        // cout<<" i am inside parameter ctor"<<endl ;
        
    }
    ~Node(){
        cout<<" destructor called :"<< this->data<<endl;
    }

};

void printll(Node* head ){
  Node* temp = head ;
  while(temp!=NULL){
    cout<<temp->data<<"->";
    temp = temp->next;
  }
  cout<<endl;


}
int printlen(Node* head ){
    Node* temp = head ;
   int  count=0;
    while(temp!=NULL){
        count++;
        temp= temp->next;
    }
    return count;
}
void insertathead(Node* &head,Node* &tail,int data ){
 if(head==NULL){
    Node* temp = new Node(data);
    head = temp ;
    tail = temp ;
 }

else {
     Node* newnode=new Node(data);//call by reference 
    newnode->next=head  ;
    head= newnode;
}

    
    // Node* temp = head ;
    // Node* newnode = new Node(data);
    // newnode->next= temp;
    // temp= newnode ;
    

}
void insertattail(Node* &head, Node* &tail, int data ){
    if(head== NULL){
        Node* newnode= new Node(data);
        head= newnode;
        tail= newnode;
    }
    else {
        Node* newnode= new Node(data);
     tail->next= newnode;
     tail= newnode ;

    }
}

void insertatanyposition(Node* &head,Node* &tail , int data , int position ){
    
    int len = printlen(head);  

    if(position==1){
        insertathead(head, tail,data);
    }
    else if (position ==len+1){//yha pe galti ho sakti hai 
        insertattail(head, tail , data );
    }
    else {
// insertatanyposition
Node* newnode=new Node(data);
 
 Node* prev=NULL;
 Node* curr= head;
 while(position!=1){
    prev = curr;
    curr= curr->next;
    position--;

 }
 prev->next=newnode;
 newnode->next= curr;

    }

}
void deleteatanyposition(Node*&head,Node*tail,int position ){
    if(head==NULL||tail==NULL){
        return ;
    }
    if(position==1){
        Node* temp = head;
        delete temp ;
        head = NULL;
        tail = NULL;
        return ;
    }
     int len =printlen(head);
    //delete from head
    if(position==1){
 Node* temp = head;
  head = temp->next;
  temp->next=NULL;
  delete temp;


     }
   
    //delete from tail 
  else if  (position==len){
  Node* prev=head;
  while(prev->next!=tail){
    prev=prev->next;
  
  }
  prev->next=NULL;
  delete tail;
  tail=prev;
    }
    else {
        // delete at any position 
        Node* prev = NULL ;
        Node* curr =head;
        while(position!=1){
            prev = curr;
            curr=curr->next;
            position--;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }

}
void add0netolinkedlist(Node* & head ){
    
}
int main (){
   
       Node* head = NULL;
       Node* tail = NULL;
       insertathead(head,tail,7);
       insertathead(head, tail,3);
       insertathead(head, tail,1);
    //    insertattail(head, tail, 50);
    //     insertattail(head, tail, 60);



// insertatanyposition(head, tail ,100,2);

// deleteatanyposition(head, tail,1);
printll(head);






    //creation of node 
    // Node  a ;static allocation
    // Node* first = new Node (10);
    // Node* second = new Node(20);
    // Node* third = new Node (30);
    // Node* fourth = new Node (40);
    // Node* fifth= new Node (50);

    // first->next= second;
    // second->next= third ;
    // third->next= fourth;
    // fourth->next= fifth ; 
    //linked list create ho chuki hai 
//     Node* head = first ;
//     Node* tail= fifth ;
//   cout<<"printing the entire LL:"<<endl ;
//     printll(head);

// // cout<<printlen(head);
//     // insertathead(head,tail,20);
//     insertattail(head , tail ,30);
//     printll(head);

    return 0 ;


}
