#include<bits/stdc++.h>
using namespace std ;
int x =2;//global variable 

void fun(){
    int x = 60 ;
    cout<<x<<endl;
    ::x=60;
    cout<<::x<<endl;
}



int main(){
    // x=4;
    // cout<<x<<endl;
    // int x= 20 ;//local variable 
    // cout<<x<<endl ; 
    // cout<<::x<<endl;//accessing global variable with ::
    fun();
}