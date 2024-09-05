#include<iostream>
using namespace std;
void fun(int x, int y){
    //   ^ Formal parameters
cout<< " adress of fun x :"<<&x<< endl;
cout<< " adress of fun y :"<<&y<<endl;
}


int main(){
int x =3;
int y ;
cout<< " adress of main x :"<<&x<< endl;  
cout<< " adress of main y :"<<&y<<endl;
fun(x,y);
 //^ Actual parameters 
 
}