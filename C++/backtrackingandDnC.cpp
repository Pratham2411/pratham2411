#include<bits/stdc++.h>
using namespace std ;
void merge(int arr[], int s , int e ){
    int mid = s+(e-s)/2;
    int lenleft= mid -s+1;
    int lenright= e-mid ;
    int *left= new int[lenleft];
    int *right= new int[lenright];
    int k = s ;
    for ( int i = 0 ; i< lenleft;i++){
        left[i]= arr[k];
        k++;
    }
    k=mid +1 ;

    for ( int i = 0 ; i<lenright;i++){
        right[i]=arr[k];
        k++;
    }
     int leftindex=0;
     int rightindex = 0;
      int mainarrayindex = s;
      while(leftindex<lenleft&&rightindex<lenright){
        if(left[leftindex]<right[rightindex]){
            arr[mainarrayindex]=left[leftindex];
            leftindex++;
            mainarrayindex++;
        }
        else {
            arr[mainarrayindex]=right[rightindex];
            rightindex++;
            mainarrayindex++;
        }
        }
        while(leftindex<lenleft){
            arr[mainarrayindex]=left[leftindex];
            mainarrayindex++;
            leftindex++;

        }
        while(rightindex>lenright){
            arr[mainarrayindex]=right[rightindex];
            mainarrayindex++;
            rightindex++;

        }
delete []left;
delete []right;
      
}
void mergesort(int arr[], int s , int e ){
    if(s>=e){
        return ;
    }
  int mid = s + (e-s)/2;
  mergesort(arr,s, mid);
  mergesort(arr, mid+1, e);
  merge(arr, s , e );

}




void printpermutation(string  &str , int index ){
    //base case 
    if(index>=str.length()){
        cout<<str<<" ";
        return ;
    }
    for( int j = index ; j<str.length();j++){
        swap(str[index],str[j]);
        
        printpermutation(str,index+1);
        //backtracking
        swap(str[index],str[j]);
    }
}
int main (){
  string str = "abc";
  int index = 0;
  printpermutation(str, index );










    // int arr[]={2,1,9,7,4,6};
    // int size = 6;
    // int s = 0;
    // int e = size -1 ;
    // cout<<" before merge sort :"<<endl;
    // for( int i = 0 ; i<size ; i++){
    //     cout<<arr[i]<<" ";

    // }
    // cout<<endl;
    // mergesort(arr, s, e );

    
    //  cout<<"after merge sort : "<<endl;
    //  for( int i =0 ; i< size ; i++){
    //     cout<<arr[i]<<" ";
    //  }
     return 0;
}