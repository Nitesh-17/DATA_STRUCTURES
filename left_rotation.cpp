#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; int d;
    cin>>n>>d;
    int p;
    vector<int> arr;
    
    for(int i=0;i<n;i++){
        cin>>p;
        arr.push_back(p);
    }
   while(d--){
   int x = arr[0];
   for(int i=0;i<arr.size();i++){
       
       arr[i] = arr[i+1];
       if(i==arr.size()-1){
           arr[i] = x;
       }
   }
   }
   for(int i=0;i<arr.size();i++){
       cout<<arr[i]<<" ";
   }
   
    
}
