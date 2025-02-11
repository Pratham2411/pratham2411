#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void printarray(int arr[],int size ){
    for (int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
}
bool linearsearch(int arr[],int size ,int target ){
    for (int i = 0;i<size;i++){
         if (arr[i]==target ){
        return true ;
    }
    
    }
    return false ; 
    
}

    // int arr[100];
    // cout<<"array created successfully"<<endl;
    //  int a = 5;
    //  cout<<"size of a :"<<sizeof(a)<<endl;
    // int arr [10];
    // cout<<"size of array :"<<sizeof(&arr);
    // int arr[]={1,2,3,4,5};
    // int n = 5;
    // for (int i = 0 ; i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // int arr [5];
    // int n =5; 
    // for (int i = 0; i<n; i++){
    //     cout<<"enter the value 0f index "<<i<<":";
    //     cin>>arr[i];
    //     cout<<endl; 

    // }
    // cout<<"printing the array :";

    // for (int i = 0 ; i<n ; i++){
    //     cout<<arr[i]<<" ";
        
    // }
    // int arr[10];
    // int n = 10; 
    // for (int i = 0; i<n;i++){
    //     cout<<"integer stored at "<<i<<":";
    //     cin>>arr[i];
    // }
    // for (int i = 0;i<n;i++){
    //     arr[i]=2*arr[i];

    // }
    // cout<<"printing the value of array :";

    // for (int i = 0;i<n; i++){
    //     cout<<arr[i]<<" ";
        
    // }
    // int arr[5];
    // int n=5 ;
    
    // for(int i =0; i<n;i++){
    //     cout<<"value of index"<<i<<":";
    //     cin>>arr[i];
    // }
    // int sum =0;
    // for (int i =0;i<n;i++){
    //     sum = sum +arr[i];
    // }
    // cout<<"printing sum :"<<sum;
    
    // int arr[5]={0,1,2,3,5};
    // int n = 5;
    // int target = 6;
    // bool flag = 0;
    // for (int i = 0; i<n;i++){
    //     if (arr[i]==target){
    //         flag = 1;
    //         break;
    //     }
    // }
    // if (flag == 1){
    //     cout<<"target is found ";
    // }
    // else cout << " target is not found ";
//     int arr[5]={1,2,3,4,5};
//     int size = 5;
//     int target = 5;
//     // printarray(arr,size);
//    bool ans = linearsearch(arr,size, target );
//     if(ans == 1){
//         cout<<"target found";
    
//     }
//     else 
//     cout<<"target is  not found";
void countzeroone(int arr [],int size ){
     int countzero = 0;
        int countone = 0;
    for (int i = 0; i<size;i++){
        if (arr[i]==0){
            countzero++;
        }
        if (arr[i]==1){
            countone++;
        }
      
    }
 cout<<"countzero:"<<countzero;
       cout<<"countone:"<<countone;

}
// int minimuminanarray(int arr[],int size ){
//     int minAns= INT_MAX;
//     for(int i = 0;i<size ;i++){
//         if(arr[i]<minAns){
//             minAns=arr[i];
//         }
//     }
//     return minAns;
// }
// int main (){

// int arr[]={2,4,1,5,6,10};
// int size = 6;
// int min = minimuminanarray(arr,size);
// cout<<"mininum answer :"<<min;



//     return 0;

// }
// int maximumofanarray(int arr[],int size){
//     int maxAns=INT_MIN;
//     for(int i = 0;i<size;i++){
//         if(arr[i]>maxAns){
//             maxAns=arr[i];
//         }
//     }
//     return maxAns;

// }
// int main (){
//     int arr[]={1,20,40,30,50,60};
//     int size =6;
//     int maximum = maximumofanarray(arr,size);
//     cout<<"maximum is :"<<maximum ;
//     return 0;
// }

// void reversinganarray(int arr[],int size ){
//     int left = 0;
//     int right = size -1;
//     while (left <=right ){
//         swap( arr[left ],arr[right]);
//         left ++;
//         right --;
    
//     }
//     for (int i = 0; i<size ; i++){
//         cout<<arr[i]<<" ";
//     }
//     return ;
// }
// int main (){
//     int arr[]={20,30,40,50,60,70};
//     int size = 6;
//     reversinganarray(arr,size);
//     return 0;
// }
//extreme print in array 
// void extremeprintinarray(int arr[],int size ){
//     int left = 0;
//     int right = size -1 ;
//     while (left <= right ){
//         cout<<arr[left]<<" ";
//         cout<<arr[right]<<" ";
//         left++;
//         right--;

    
//     }
//     return ;
// }
// int main (){
//     int arr[]={20,30,40,50,60,70,90};
//     int size = 7;
//     extremeprintinarray(arr,size);
//     return 0 ;
// }
// void reversingofanarray(int arr[],int size ){
//     int left = 0;
//     int right = size-1;
//     for (int left = 0,right = size -1;left<=right  ;left++,right -- ){
//     swap(arr[left], arr[right]);


//     }
// }
// int main (){
//     int arr[]= {10,20,30,40,50,60 ,70, 80, 90 };
//     int size = 9;
//     reversingofanarray(arr,size);
//     for(int i = 0;i<size;i++){
//         cout<<arr[i]<<" ";

//     }
//     return 0 ;
// }
// int getunique(int arr[],int size ){
//     int Ans = 0;
//     for (int i = 0; i<size ; i++){
//         Ans = Ans ^ arr[i];
       
//     }
//      return Ans ;
// }

// int main(){
// int arr[]= {2,10,11,13,15,2,13,10,15};
// int size = 9;
// int ans = getunique(arr,size);
// cout<<"final answer :"<<ans << endl;
// return 0 ;
// }
// void  printpairsinanarray(int arr[],int size ){
// for(int i = 0; i<size ; i++){
//     for (int j = 0; j<size ; j++){
//         cout<<arr[i]<<" "<<arr[j]<<" ";
        

//     }

// }

// }


// int main (){
//     int arr[]={10,20,30};
//     int size = 3 ; 
//     printpairsinanarray(arr,size );

//     return 0;
// }
// int getuniqueelement(int arr[],int size ){
//     int ans = 0;
//     for (int i = 0;i<size ;i++){
//     ans = ans ^arr[i];
//     }
//     return ans ;
// }
// int main (){
//     int arr[]={10,20,3,10,20,40,50,40,60,50,60};
//     int size = 11;
//     int Ans = getuniqueelement(arr,size);
//     cout<<"final answer is :"<<Ans<<endl;
//     return 0;
// }
// int printpairs(int arr[],int size){
//     int sum ;
//     for (int i = 0; i<size;i++){
//         for (int j = 0; j<size;j++){
//             cout<<arr[i]<<" "<<arr[j]<<endl;
//              sum = arr[i]+arr[j];
//             cout<<"final sum :"<<sum<<endl;

//         }
 
//     }
//     return sum ;
// }
// int main (){
//     int arr[]={10,20,30};
//     int size = 3;
//     printpairs(arr,size);
//     return 0;
// }
// void printalltriplets(int arr[],int size ){
//     for (int i = 0; i<size;i++){
//         for (int j =0; j<size ; j++){
//             for (int k = 0; k<size ; k++){
//             cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
//             }
//         }
//     }
//     return ;
// }
// int main (){
//     int arr[]={1,2,3,4};
//     int size = 4;
//     printalltriplets(arr,size);
//     return 0;
// }
// void sort0and1(int arr[],int size ){
//     int zerocount=0;
//     int onescount=0;
//     for (int i = 0; i<size;i++){
//         if (arr[i]==0)
//         zerocount++;
//         if (arr[i]==1)
//         onescount++;
//     }
//     int index = 0;
//     while (zerocount--){
//         arr[index]=0;
//         cout<<arr[index]<<" ";
//     }
//     while (onescount--){
//         arr[index]=1;
//         cout<<arr[index]<<" ";
//     }
    
//     return ;
// }
// int main (){
//     int arr[]={0,1,0,0,1,1,0,1,1,0,1,0,1,1};
//     int size = 14;
//     sort0and1(arr,size);
//     return 0;
// }
void   shiftarray(int  arr[],int size ){
    int temp = arr[size-1];
    for (int i = size -1; i>=0;i--){
        arr[i]= arr[i-1];
       
    }
    arr[0]=temp;
  
 
    for (int i = 0;i<size ;i++){
        cout<<arr[i]<<" ";
    }
}
void reversearray(int arr[], int size){
    int i =0;
    int j = size-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main (){
    int arr []= {10,20,30,40,50,60,70};
    int size = 7;
    //   shiftarray(arr,size);
    reversearray(arr,size);
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}