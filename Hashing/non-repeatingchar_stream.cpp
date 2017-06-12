#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    int count =1;
    for(int i=0;i<test;i++){
        int n;
        queue<char>q;
        unordered_map<char, int> c;
        cin>>n;
        char a;
        cin>>a;
        cout<<a<<" ";   
        q.push(a);
        c[a]=1;
        for(int j=1;j<n;j++){
            cin>>a;
            //cout<<count<<" ";count++;
            if(c[a]==0){
                q.push(a);
                c[a]=1;
                cout<<q.front();
            }
            else {
                if(q.empty()) cout<<"-1";
                else {
                    if(q.front()!=a){
                        c[a]=2;
                        cout<<q.front();
                    }
                   else {
                        q.pop();
                        c[a]=2;
                        while(c[q.front()]==2) q.pop();
                        if(q.empty()) cout<<"-1";
                        else cout<<q.front();
                   }
                }
            } cout<<" ";
        }cout<<endl;
    } 
}