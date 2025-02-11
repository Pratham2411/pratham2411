#include<iostream>
using namespace std ;
int main (){
   float a,b;
   cout<<"enter the value of a and b :"<<endl;
   cin>>a>>b;
   int op ;
   
   int result ;
   cout <<" what operation we want to your ? "<<endl;
   cin>>op;
   switch (op){
    case 0 :
        cout  << "add case " << endl;
         result = a+b;
         
   case 1: 
   cout<<"sub case "<<endl;
   result = a-b;
   
   case 2:
   cout<<"mul case"<<endl;
   result = a*b;
   break ;
   case 3:
   cout<<"div case "<<endl;
   result = a/b;
   break ;
   default : 
   cout<<"invalid opration "<<endl;
   return 0;

   }
   cout<<result<<endl;
   
return 0;
}