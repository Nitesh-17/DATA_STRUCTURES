#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> a;
    int n , x;
    cin>>n;
    for(int i=0;i<n;i++){
        int query;
        cin>>query;
        switch(query){
            case 1:
                    cin>>x;
                    if(a.empty()){
                        a.push(x);
                    }
                    else{
                        if(!a.empty()){
                            a.push(max(x,a.top()));
                        }
                    }
                    break;
            case 2: 
                    if (!a.empty()){
                        a.pop();
                    }
                    break;
            case 3: 
             cout<<a.top()<<endl;
             break;
             
             default:
                    break;
        }
    }
    return 0;
}