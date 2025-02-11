#include<bits/stdc++.h>
using namespace std ;
float  addnumbers( float  a , float  b , float  c ){
    float sum = a+b+c ;
    return sum ;
}
float max (float num1, float num2, float num3){
 if ( num1>num2&& num1> num3)
 return num1 ;
 else if ( num2>num3&&num2>num1)
 return num2 ;
 else return num3 ;
}
int factorial( int n ){
     int product = 1 ;
    for( int i =1 ; i<= n ; i++){
       
        product = product * i;
    }
    return product ;
}
bool isprime (int n ){
  if( n <=1) return false ;
  for( int i = 2 ; i*i<=n;i++){
    if( n%i==0) return false ;
  }
  return true ;
}

 bool searchinarray(int arr[], int size , int target , int index ){
    if(index >= size ){
      return false ; 
    }
    if( arr[index]== target ){
      return true ;
    }
    bool aagekaans= searchinarray(arr, size , target , index+1 );
    return aagekaans ;
   }
   int findtar(int arr[], int size , int index , int target ){
    if(index>=size ){
      return -1 ;

    }
    if(arr[index]== target ){
      return index ;
    }
    findtar(arr, size , index+1,target );
   }
    int main (){
        // cout<< factorial(5)<<endl;
    //   printcounting(5);
  //  cout<<sum(10);
  int arr[]={10,20,30,40,50};
  int size =5;
  int index =0;
  int target =60 ;
  cout<<findtar(arr, size , index , target );
  // cout<<searchinarray<<" ";
  // printarray(arr,size,index);
       return 0 ; 
    }

















// float a , b , c ; 
// cin>>a>>b>>c;
//  float ans = addnumbers(a,b,c);


// cout<<ans ;
//   float num1 , num2, num3;
//   cin>>num1>>num2>>num3;
//  float ans =  max(num1,num2,num3);

//  cout<<ans ;

// factorial function 
// int n ;
// cin>>n;
// int ans = factorial(n);
// cout<<ans ;

    // int n;
    // cin>>n;
    // for ( int i = 0 ; i < n ; i++){
    //     if(i==0) 
    //     continue ;
    //     else cout<<i<<" ";
    // }
    // int num1 =10;
    // float num2 = 5.5 ;
    // int  result = num1+ num2;
    // cout<<result<<endl;
     