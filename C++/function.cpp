#include<iostream>
using namespace std ;
// int multiplynumbers (int a , int b , int c ){
//     int sum = a*b*c;

//     return sum ;
// }
// void printmaximum(int num1, int num2, int num3){
//     if (num1>=num2&&num1>=num3)
//     cout<<"maximum is :"<<num1;
//     else if (num2>=num1 && num2>=num3)
//     cout<<"maximum is: "<< num2;
//     else 
//     cout<<"maximum is :"<< num3;
//     return ;
// }
// int main (){
// //    int answer =multiplynumbers (5,4,3);
// //    cout<<"solution is :"<<answer ;
//   printmaximum (5,5,4);
//     return 0;
// }
// int  printmaximum(int n1, int n2, int n3){
//     int ans1= max(n1,n2);
//     int finalans = max ( ans1, n3);
    
//     return finalans;
// }
// int main (){
//    int  max = printmaximum (5,6,9);
//    cout<<max;
//     return 0;
// }
// void printcounting(int n ){
//     for (int i = 1; i<=n; i++){
//         cout<<i<<endl;
//     }
// }
// int main (){
//     printcounting(10);
//     return 0;
// }
// void checkevenorodd (int n ){
//     if (n%2==0){
//         cout<<"number is even :"<<n;

//     }
//     else 
//     cout<<"number is odd : "<<n;
// }
// int main (){
//     checkevenorodd(5);
//     return 0 ;
// }
// int sumofnumbers(int n ){
//     int sum = n*(n+1)/2;
//     return sum ;

// }
// int main (){
// int answer = sumofnumbers(5);
// cout<< "answer is :"<<answer ;
// return 0;
// }
// int findevensumuptoN(int n ){
//     int sum = 0;
//     for (int i = 2;i<=n;i=i+2){
//         sum = sum +i;
        
//     }
//     return sum ;
// }
// int main (){
//    int ans= findevensumuptoN(10);
//    cout<<"answer is :"<<ans;
//    return 0;
    
// }
void reverseofanarray(int arr[],int size ){
   
    for (int left = 0, right = size -1 ; left<= right ; left ++, right --){
        
    }
}
int main (){
    int arr[]= { 10 , 20, 30, 40, 50 , 60, 70,80, 90};
int size = 9;
reverseofanarray(arr, size);
for ( int i= 0; i<size ; i++){
    cout<<arr[i]<<" ";
}
return 0;
    }
