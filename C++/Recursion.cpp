#include<bits/stdc++.h>
using namespace std ;
void findMin( int arr[], int size , int index , int &mini ){
    if(index>=size){
        return ;
    }
    mini = min(mini,arr[index]);
    findMin(arr,size,index+1,mini);
}
void solve(int arr[], int size , int index, vector<int>&v ){
    if(index>=size){
        return ;
    }
    if(arr[index]%2==0){
        v.push_back(arr[index]);
    }
    solve(arr, size , index+1, v );

}
void findMax(int arr[], int size , int index , int &maxi ){
    if(index>=size){
        return ;
    }
    maxi = max(maxi,arr[index]);
    findMax(arr,size,index+1,maxi);
}
void arrmulti(int arr[], int size , int index ){
    if(index>= size ){
        return ;
    }
    arr[index]=2*arr[index];
    arrmulti(arr,size,index+1);
    
}


 void findall(int arr[], int size , int index , int target ){
   if(index>=size){
    return ;
   }
   if(target==arr[index]){
    cout<<index<<" ";
   }
   findall(arr,size, index+1, target);
}
 
void finda(int arr[],int  size, int index , int target , vector<int>&ans ){
    if( index >= size ){
        return ;
    }
    if(arr[index]==target){
        ans.push_back(index);
    }
    finda(arr, size, index+1, target, ans );
}

void printdigit( int num , vector < int> &ans ){
    if(num==0){
        return ;
    }
    int digit = num%10;
    num = num /10;
    printdigit( num,ans  );
    ans . push_back(digit);

}
 
 void findtar(string str ,int size , int index , int target , vector<int> &ans  ){
    if(index>=size){
        return ;
    }
    if(target == str[index]){
        ans.push_back(index);
    }
    findtar(str, size , index+1,target , ans );

 }

bool checksorted( int arr[], int size , int index ){
    if( index >= size ){
        return true ;
    }
    if(arr[index]>arr[index-1]){
        bool aagekaans=checksorted(arr,size, index+1);
        return aagekaans;
    }
    

    else return false ;
    
}
 int binsearch( int arr [], int s , int e , int target ){
    if(s>e){
        return -1 ;
    }
     int mid = s + (e-s)/2;
     if ( arr[mid]== target ){
        return mid ;
     }
     if ( arr[mid ]<target ){
   s = mid+1;
 return  binsearch(arr, s , e , target );
  
     }
     else {
     e = mid-1;
     return  binsearch(arr, s , e , target );
  
     }
 }
 int BINSEARCH(int arr[], int s , int e , int target ){
    if(s>e){
        return -1 ; 
    }
    int mid = s+(e-s)/2;
    if(arr[mid]==target ){
        return mid ; 
    }
    if(arr[mid]>target){
        return BINSEARCH(arr,s,mid -1,target );
    }
    else {
        return BINSEARCH(arr,mid+1,e,target );
    }
 }

 void findsubsequences(string str , string output, int index ,vector<string>&ans){
    if(index>=str.length()){
        ans.push_back(output);
        return ;
    }
    char ch =str[index ];
    output.push_back(ch);
    findsubsequences(str, output, index+1,ans);
    output.pop_back();
    findsubsequences(str, output, index+1,ans);
    //exclude
    // findsubsequences(str, output, index+1);
    // //include
    // output.push_back(ch);
    //   findsubsequences(str, output, index+1);
 

 }

int main(){
 
 string str = " abc";
 
 string output="";
 int index = 0;
vector<string>ans;
 findsubsequences(str , output , index , ans );
for(string s : ans){
    cout<<s<<endl;
}






// int arr[]={10,20,30,40,50};
// int s= 0;
// int e =  4;
//  int target =50 ;
//    int found =  binsearch( arr, s , e ,  target  );

// if(found!=-1){
//     cout<<"target found"<<" "<<found;
// }
// else {
//     cout<<"target not found";
// }
// cout<<BINSEARCH(arr, s, e , target );









//    string str ="Babbar";
//   int  size = 6;
//   int index = 0;
//   char target= 'a';
//   vector<int> ans ;
//    findtar( str ,size , index , target,ans   );

// for( int num : ans ){
//     cout<<num<<" ";
// }
   
//    int arr[]={10,20,30,40,70,60};
//    int size = 6;
//    int index = 1; 
     
//      bool issorted = checksorted( arr, size , index );

// if(issorted){
//     cout<<"sorted";
// }
// else {
//     cout<<" not sorted ";
// }






    // int num;
    // cin>>num;
    // vector<int> ans ;
    // printdigit(num, ans );
    // for( int num : ans ){
    //     cout<< num<<" ";
    // }
    // int arr[]={10,15,15,13,15,15};
    // int size = 6;
    // int index = 0;
    
    // int target = 15;
  
//   findall(arr,size, index , target ) ;
//  vector<int>ans;
// finda(arr, size, index, target, ans  );
  
//   for(int nums : ans ){
//     cout<< nums << " ";
//   }
  
//      arrmulti(arr,size , index );  

//    for( int i =0 ; i<size;i++){
//     cout<<arr[i]<<" ";
//    }






//     vector<int>v;
//     solve(arr, size , index,v );
// for( int num :v){
//     cout<<num<<" ";
// }
// int maxi= INT_MIN;
// findMax(arr,size, index , maxi );

// cout<<maxi;


    // int arr[]={10,20,30,40,50};
    // int size = 5;
    // int index =0;
    // int mini= INT_MAX;
    // findMin(arr,size,index,mini);
    // cout<<mini<<endl;
    return 0;
}