#include<bits/stdc++.h>
#include<stack>
using namespace std ;

// class Stack{
//  public:
//  int* arr;
//  int size ; 
//  int top ;
//  Stack(int size){
//     arr= new int[size];
//     this->size= size;
//     this->top= -1;
//  }

//  void push(int data){
//     if(top==size-1){
//         cout<<"stack overflow "<<endl;
//         return ;
//     }
//     else{
//          top++;
//     arr[top]=data;
//     }
  
//  }
//  void pop(){
//     if(top==-1){
//         cout<<"stack is empty"<<endl;
//         return ;
//     }
//     else {
//         top--;
//     }
    
//  }
//  bool isempty(){
//     if(top==-1){
//         return true ;
//     }
//     else {
//         return false ;
//     }
//  }
//  int getsize(){
//     return top+1;
//  }
//  int tope(){
//     if(top==-1){
//         cout<<"stack is empty "<<endl;
//         return -1;
//     }
//     else {
//          return arr[top];
//     }
//    return 0;
//  }
//  void print(){
//     cout<<"stack:"<<endl;
//     for( int i = 0; i<getsize();i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//  }

// };
void solve( stack<int>&st, int &pos , int &ans){
    if(pos==1){
        ans= st.top();
        return ;
    }
    pos--;
    int temp = st.top();
    st.pop();
       solve(st, pos, ans );
       st.push(temp);
}
int getmidelement(stack<int> &st){
    int size = st.size();
    if(st.empty()){
  return -1;
    }
    int pos = 0; 
    if(size & 1 ){
        pos= size/2+1;
    }
    else {
        pos = size/2 ;
    }
    int ans =-1;
    solve(st, pos ,ans);
    return ans ;
}
void insertatbottom(stack<int>&st, int &element){
    if(st.empty()){
        st.push(element);
        return ;

    }
    int temp = st.top();
    st.pop();
    insertatbottom(st,element);
    st.push(temp);
}
void reversestack(stack<int>&st){
    if(st.empty()){
        return ;
    }
    int temp = st.top();
    st.pop();
    reversestack(st);
    insertatbottom(st, temp);

}

  class Stack{
    public:
          int* arr;
          int size ;
          int top1;
          int top2;
          Stack(int size){
            arr= new int[size];
            this->size= size ;
            top1= -1 ;
            top2= size;

          }
          void push1(int data ){
            if(top2-top1==1){
                cout<<"overflow"<< endl ;
            }
            else {
                top1++;
                arr[top1]= data;
            }
          }
          
          void push2(int data ){
            if(top2-top1==1){
                cout<<"overfkow "<<endl;
            }
            else {
                top2--;
                arr[top2]=data;
            }
          }

          void pop1( ){
            if(top1==-1){
                cout<<"underflow"<<endl;
            }
            else {
                arr[top1]=0;
                top1--;
            }
          }

          void pop2( ){
            if(top2==size){
                cout<<"underflow"<<endl;
            }
            else {
                arr[top2]=0;
                top2++;
            }
          }

          void print(){
            for( int i = 0; i<size;i++){
                cout<<arr[i]<<" ";
            }
          }

  };



int main (){

    Stack st(5);
   st.push1(10);
   st.push2(20);
   st.push1(20);
   st.push1(25);
   st.push1(30);
   st.push1(300);
  st.pop1();
  st.print();
    // st.push1(10);
    // st.push1(20);
    // st.push2(30);
    // st.push2(40);
    // st.push1(50);

   
    // reversestack(st);
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // stack<int>rt;
    // while(!st.empty()){
    // rt.push(st.top());
    //     st.pop();
    // }
    // while(!rt.empty()){
    //     cout<<rt.top()<<" ";
    //     rt.pop();
    // }

    // int element= 400;
//     insertatbottom(st, element);
//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
// //     st.push(40);
//     st.push(50);
//     st.push(60);

// int mid = getmidelement(st);

// cout<<"middle element : "<< mid << endl;




    
//      string str = "hellojee";
//    stack<char>st ;

//     for( int i = 0; i<str.length();i++){
//         char ch = str[i];
//         st.push(ch);
//     }
//     cout<<endl;
//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
//     cout<<endl;




//  Stack st(5);
//   st.push(10);
//   st.push(20);
//   st.push(30);
//   cout<<st.getsize()<<endl;
 
//   cout<<st.tope()<<endl;
//   if(st.empty()){
//     cout<<"stack is empty"<<endl;

//   }
//   else {
//     cout<<"stack is not empty "<<endl;
//   }
//   cout<<st.top()<<endl;

    return 0;
}