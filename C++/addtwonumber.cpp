#include<iostream>
using namespace std;
int main (){
 int N;
int arr[N];
for (int i= 0 ; i<N;i++){
    cin>>arr[i];
}
int maxANS= INT_MIN;
for(int i = 0; i<N;i++){
    if(arr[i]>maxANS){
        maxANS = arr[i];
    }
}
cout<<maxANS<<"\n" ;

    return 0;
}
  