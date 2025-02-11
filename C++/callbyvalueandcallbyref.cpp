#include<iostream>
#include<limits.h>
using namespace std;
int incrementby1(int &n ){
    n = n +1;
    return n ;
}
int main (){
    int n = 5;
    incrementby1(n);
    cout<<"n:"<<n<<endl;
    return 0;
}
