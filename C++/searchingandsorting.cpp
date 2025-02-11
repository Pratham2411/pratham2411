#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n , int target ){
int start = 0; 
int end = n-1;
int mid = (start+end)/2;
while (start<=end){
    if(arr[mid]==target){
        return mid;
    }
    else if (target>arr[mid]){
        start= mid +1;

    }
    else if(arr[mid]<target){
        end = mid -1;
    }
    mid = (start+end)/2;
    
   

}
return -1;
}
//FIRST OCCURANCE 
int firstoccurance(int arr[],int n , int target ){
    int s = 0; 
    int e = n-1;
    int mid = (s+e)/2;
    int ans= 0;
    while(s<=e){
        if(arr[mid]==target){
        ans = mid ;
        e= mid -1;
        }
        else if (target >arr[mid]){
            s= mid +1;
        }
        else if ( target <arr[mid]){
            e = mid -1 ;
        }
        mid = (s+e)/2;

    }
    return ans ;
}
int lastoccurance(int arr[],int n , int target ){
    int s =0 ;
    int e= n-1 ; 
    int mid = s+(e-s)/2;
    int ans = 0; 
    while (s<=e){
        if (arr[mid]==target ){
            ans = mid ;
            s= mid +1 ;
        }
        else if ( target >arr[mid]){
            s=mid+1;
        }
        else if (target <arr[mid]){
            e = mid -1;
        }
        mid = s+(e-s)/2;
    }
    return ans ;
}
int totaloccurance(int arr[],int n , int target ){
    int firstoccurance= firstoccurance(arr, n, target );
    int lastoccurance = lastoccurance(arr,n,target );
    int total=lastoccurance-firstoccurance+1;
    return total ;
}
int main (){
    int arr[]={10,20,40,40,40,60,70,80,90};
    int n = 9;
    int target = 40;
    // int ansindex = binarysearch(arr, n , target );
    // int ansindex= firstoccurance(arr, n , target );
    // int ansindex=lastoccurance(arr, n , target );
    // if(ansindex==0){
    //     cout<<"elements not found ";
    // }
    // else {
    //     cout<<"element found at index :"<<ansindex;
    // }
    int ans=totaloccurance(arr, n, target );
    cout<<"total occurance :"<<ans<<endl;

    return 0 ; 

}
    