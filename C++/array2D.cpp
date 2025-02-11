#include<bits/stdc++.h>
#include<vector>
#include<limits.h>
using namespace std ;

// void printarray(int arr[][3],int row , int col ){
//     for(int i = 0; i<col ; i++){
//         for (int j = 0 ; j<row; j++){
            

//  cout<<arr[j][i]<<" ";
            
           
//         }
     
        
//         cout<<"\n";
//     }
    
//     return ;
// }

// int main (){

// int arr[5][3]= {
//    {1,2,3},
//    {4,5,6},
//    {7,8,9},
//    {10,11,12},
//    {13,14,15}
//    };
// int row = 5;
// int col = 3;
// printarray(arr,row,col);
    
   

// return 0 ;
// }
// bool findtarget(int arr[][4],int row ,int col,int target ){
//     for (int i = 0 ; i<row ; i++){
//         for (int j = 0; j<col ; j++){
//             if (arr[i][j]==target )

            

//             return true ;
            
        
//         }
    
        
//     }

//     return false ;
// }
// int findminimumofarray(int arr[][4],int row , int col ){
//     int minAns = INT_MAX;
//     for(int i = 0; i<row ;i++){
//         for (int j =0 ; j<col ; j++){
//             if(arr[i][j]<minAns)
//            minAns= arr[i][j];
    
//     }
//     return minAns ;
// }
void rowwisesum(int arr[][4],int row , int col){
   
    for (int i =0; i<col; i++){
         int sum =0;
        for (int j=0; j <row; j++){
            sum = sum +arr[j][i];
        }
        cout<<sum<<endl;
    }
    return ;
}
int main (){
    // int arr[3][4];
    // int row = 3; 
    // int col = 4;
    

    // for (int i = 0; i<row ; i++){
    //     for (int j = 0 ; j<col ; j++){
    //         cout<<"enter the row value :"<<i<<"and col value :"<<j;
    //         cin>>arr[i][j];
    //     }
    // }
    // for (int i = 0; i<row ; i++){
    //     for (int j = 0; j < col ; j++){
    //         cout<<arr[i][j]<<" ";

    //     }
    //     cout<<endl ; 
        
        
        

    // }
    //  cout<<"foundornot"<<findtarget(arr,row , col, target );
    // cout<<"minimum number : "<<findminimumofarray(arr,row , col );
    
    //     rowwisesum(arr,row, col);
   void rotate(vector<int>&nums,int k );
   int index=0;
   

   
     return 0;
}