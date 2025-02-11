#include<bits/stdc++.h>
using namespace std ;


// class Queue{
//     public : 
//     int *arr;
//     int size ;
//     int front ;
//     int  rear ;

//     Queue(int size){
//         arr= new int(size);
//         this->size= size ;
//         front =-1 ;
//         rear = -1 ;
//     }
//     void push (int val){
//         if(front ==0 && rear == size -1 ){
//             cout<<"overflow "<<endl;
//         }
//         else if ( front ==-1 && rear ==-1){
//             front++;
//             rear ++;
//             arr[rear]= val;
//         }
//         else if (rear ==size-1&& front !=0){
//             rear=0;
//             arr[rear]= val;
//         }
//         else {
//             rear++;
//             arr[rear]=val;
//         }
//     }


//     void print(){
//         for( int i =0; i<size ; i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };

void reversequeue(queue<int>&q){
    stack<int>st;
    while(!q.empty()){
        int frontelement= q.front();
        q.pop();
        st.push(frontelement) ;
    }
    while(!st.empty()){
        int topelement= st.top();
        st.pop();
        q.push(topelement);
    }
   
}

 void reverse(queue<int> &q){
    if(q.empty()){
        return ;
    }
     int temp = q.front();
     q.pop();
     reverse(q);
     q.push(temp);
 }

  void reverse1stkele(queue<int>&q , int k ){
    stack<int>st;
    if(k>q.size()|| k==0){
        return ;
    }
    for( int i =0;i<k;i++){
        int frontele= q.front();
        q.pop();
        st.push(frontele);
    }
  while(!st.empty()){
    int topele= st.top();
    st.pop();
    q.push(topele);
  }

  for( int i =0; i<q.size()-k;i++){
    int temp = q.front();
    q.pop();
    q.push(temp);
  }

  }

void interleavequeue( queue<int>& first){
    queue<int>second;
    int size= first.size();
    for( int i =0 ; i<size/2;i++){
        int temp = first.front();
        first.pop();
        second.push(temp);
    }
    for( int i = 0; i<size/2;i++){
        int temp = second.front();
        second.pop();
        first.push(temp);
        temp = first.front();
        first.pop();
        first.push(temp);
    }
}


int main (){

  string str ="ababc";
  queue<char>q;
  int freq[26]={0};

  for( int i =0;i<str.length();i++){
    char ch = str[i];
    freq[ch-'a']++;
    q.push(ch);
  
  while(!q.empty()){
    char frontchar=q.front();
    if(freq[frontchar-'a']>1){
        q.pop();
    }
    else{
        cout<<frontchar<<"->";
        break;
    }
   
    }
    if(q.empty()){
        cout<<"#"<<"->";
  }
  }
   




   
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // q.push(50);
    // q.push(60);
    
    // interleavequeue(q);
    // reverse1stkele(q,0 );
    // reversequeue(q);
    // reverse(q);

    // while(!q.empty()){
    //     int element = q.front();
    //     q.pop();
    //     cout<<element << " ";
    // }
    return 0;
}










    // q.push(5);
    // // cout<<q.size()<<endl;
    // q.push(10);
    // q.push(15);
    // q.push(20);
    // cout<<"front element :"<<q.front()<<endl;
    // cout<<"back element : "<<q.back()<<endl;
    // q.pop();
    // cout<<q.front();

    
