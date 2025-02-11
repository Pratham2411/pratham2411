#include<bits/stdc++.h>
using namespace std;
int main (){
   
    // pair<int ,int > p= {1,3};
    // cout<<p.first;
    // pair<int, int > arr[]= {{1,2},{3,4},{5,6}};
    // cout<<arr[2].first;

//    vector<int>arr;
//    cout<<arr.size();
// vector <vector<int> > arr(5,vector<int >(10,0));
// for(int i =0 ; i<arr.size();i++){
//     for(int j = 0; j<arr[i].size();j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }
    vector<vector<int> > brr;
    vector<int> vec1(10,1);
    vector<int>vec2(5,2);
    vector<int>vec3(10,3);
    vector<int>vec4(5,9);
   brr.emplace_back(vec1);
   brr.emplace_back(vec2);
   brr.emplace_back(vec3);
   brr.emplace_back(vec4);
   for(int i =0 ; i<brr.size();i++){
    for(int j = 0; j<brr[i].size();j++){
        cout<<brr[i][j]<<" ";
    }
    cout<<endl;
}
    


    return 0;
}