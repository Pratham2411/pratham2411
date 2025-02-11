#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void bubblesort(vector<int>&v){
    int n = v.size();
    for(int i =0;i<n-1;i++){
        for(int j =0;j<n-i-1;j++){
            if(v[j]< v[j+1]){
                swap(v[j],v[j+1]);
            }
            
        }
    }

}
void selectionsort(vector<int>&v){
    int n = v.size();
    for(int i =0;i<n-1;i++){
        int minindex =i;
        for(int j =i+1;j<n;j++){
            if(v[j]>v[minindex]){
                minindex = j;
            }

        }
        swap(v[i],v[minindex]);
    }
}
int main (){
   vector<int>v={44,33,55,22,11};
//  bubblesort(v);
selectionsort(v);
 print(v);
 return 0;
}