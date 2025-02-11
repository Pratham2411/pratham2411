#include<bits/stdc++.h>
using namespace std;
int findlength(char ch[], int size){
//    int index=0;
//    while(ch[index]!='\0'){
//     index++;
//    }
//    return index;
int length =0;
for(int i =0;i<size;i++){
    if(ch[i]=='\0') break;
    else length++;
}
return length;
}
void reversestring(char ch [],int len){
    int i =0;
    int j =len -1;
    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}
void lowertoupper(char ch[],int size){
    int index =0;
    while(ch[index]!='\0'){
       
        if(ch[index]>='a'&&ch[index]<='z'){
            ch[index]=ch[index]-'a'+'A';
        }
        index++;
    }

}
void replacecharacter(char ch [],int size){
    int index = 0;
    while(ch[index]!='\0'){
        if(ch[index]=='@'){
            ch [index]=' ';
        }
        index++;
    }
}
bool findpalindrome(char ch[],int size){
    int i =0;
    int j = size-1;
    while(i>=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else return false;

    }
    return true ;
}


bool primenumber(int n ){
    if(n<=1) return false ;
    for(int i =2; i<n;i++){
        if(n%i==0){
            return false ;
        }
    }
    return true ;
}
  string delduplicate(string str ){
    int i =0 ; 
    int j =1;
    
    string s="";
   while(j<str.size()){
     if(str[i]!=str[j]){
  s+=str[i];
  i++;
     }
    
     
     j++;
   }
    return s;
  }
int stringtoint(string s ){
int i =0; int sign = 1 ;int num =0;


while(s[i]==' '){
    i++;
}
if(i<s.size()&&s[i]=='-'||s[i]=='+'){
    sign = s[i]=='+'? 1 : -1;
    ++i;
    }
    while(i<s.size()&&isdigit(s[i])){
        if(num>INT_MAX/10||(num==INT_MAX/10&&s[i]>'7')){
            return sign ==-1 ?INT_MIN : INT_MAX;
        }
    num = num*10+(s[i]-'0');
    ++i;
    }
return num*sign  ;

}
int   stringcompression(vector<char>&chars){
    string s ="";
    
}

int main (){
 
  vector<char>chars;
  stringcompression(chars);
  cout<<


// string s = "    -2147483649";
// cout<<stringtoint(s)<<endl;





// string str = "GeEksFoRGeEks";
// string  temp = delduplicate(str);


// cout<<temp<<endl;







   
// int n ;
// cin>>n;
// if(primenumber(n)){
//     cout<<"prime";
// }
// else {
//     cout<<"not prime ";
// }




   
    //    string s ="gautam";
    //    sort(s.begin(),s.end());
    //    cout<<s<<endl;





    // string name = "gautam";
    // for(auto ch: name ){
    //     cout<<ch<<" ";
    // }
    // vector<int>v;
    // v.emplace_back(4);
    // v.emplace_back(10);
    // for(auto num:v){
    //     cout<<num<<" ";
    // }
    // string desc="this is my car ";
    // desc.erase(4,3);
    // cout<<desc<<endl;
// string name = "gautam  choudhary";
// string middle ="raj";
// name.insert(7,middle );
// cout<<name<<endl;
// string name = "gautam";
// name.push_back('A');
// cout<<name<<endl;
// name.pop_back();
// cout<<name<<endl;
// string str1= "yarr tera super star desi kalakar ";
// string str2 = "star ";
// if(str1.find(str2)==string::npos){
//     cout<<"not found ";
// }
// else {
//     cout<<"found";
// }
// string str1="gautam";
// string str2="gautam";
// if(str1.compare(str2)==0){
//     cout<<"matching";
// }
// else {
//     cout<<"not matching ";
//     }
// string desc="my name is gautam raj choudhary ";

// cout<<desc.substr(3,4);
// string str1="gautam";
// string str2="raj";
// cout<<str1<<endl<<str2 <<endl;;

// str1 .append(str2);
// cout<<str1<<endl<<str2;











// string name ;
// cin>>name;
// string temp;

// cout<<name.length()<<endl;
// cout<<temp.empty()<<endl;
// cout<<name.at(5)<<endl;
// cout<<name.front()<<endl;
// cout<<name.back()<<endl;
// getline(cin,name) ;
// cout<<name;

// int index=0;
// while(name[index]!='\0'){
//     cout<<name[index]<<" ";
//     index++;
// }




//     char ch [100];
//     cin.getline(ch,100);
 //    int len = findlength(ch,100);
 // //    cout<<len<<endl;
// // // reversestring(ch,len);
// // // cout<<ch<<endl;
// // cout<<len<<endl;
// // cout<<strlen(ch)<<endl;
// // lowertoupper(ch,100);
// // replacecharacter(ch,100);


// bool ispalindrome= findpalindrome(ch,100);
// if(ispalindrome){
//     cout<<"valid palindrome"<<endl;
// }
// else {
//     cout<<"invalid palindrome"<<endl;
// }
    return 0;
}
