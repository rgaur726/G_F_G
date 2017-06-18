#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++) cin>>ar[i];
        int k;
        cin>>k;
        int count =0;
        unordered_map<int, int>hash;
        vector<int> distinct;
        for(int i=0;i<n;i++){
            if(hash.find(ar[i])==hash.end()){
                hash[ar[i]]++;
                distinct.push_back(ar[i]);
            }
        }
        for(int i=0;i<v.size();i++){
            if(hash.find(v[i]-k)!=hash.end()) count++;
        }
        cout<<count<<endl;
    }
}