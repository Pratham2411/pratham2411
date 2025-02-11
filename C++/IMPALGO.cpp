#include<bits/stdc++.h>
using namespace std;
class Nstack{
int *a,*top,*next;
int n ;//no. of stack
int size;//size of array 
int freespot;//tells free space in main array 
public:
Nstack(int _n, int _s):n(_n),size(_s){
    freespot=0;
    a= new int[size];
    top= new int[n];
    next= new int[size];
    
    for( int i =0; i<n;i++){
        top[i]=-1;
    }
    for( int i =0;i<size;i++){
        next[i]=i+1;
    }
    next[size-1]=-1; 

}
//push x into mth stack
bool push( int x , int m ){
    if(freespot==-1){
        return false ;//stack overflow 
    }

    //1st step
    int index= freespot;
    //update freespot
    freespot= next[index];
    // assign in array
    a[index]=x;
    // upadte next
    next[index]= top[m-1];
    // upadte top
    top[m-1]=index;
    return true ;//push success 
}
// pop into mth stack
int pop( int m){
  if(top[m-1]==-1){
    return -1;// stack underflow
  }

  int index = top[m-1];
  top[m-1]=next[index];
  int poppedele=a[index];
  next[index]=freespot;
  freespot=index;
  return poppedele;
}
~Nstack(){
    delete[]a;
    delete[]top;
    delete[]next;


}
};
int main (){
    Nstack s(3,6);
    cout<<s.push(10,1)<<endl;
    cout<<s.pop(1)<<endl;

return 0;
}

