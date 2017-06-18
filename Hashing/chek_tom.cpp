#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> findsubarray(int *ar, int n, int sum){
    int cur_sum ;
    vector<pair<int,int>> res;
    unordered_map<int, int> hash;
    for(int i=0;i<n;i++){
        cur_sum +=ar[i];
        if(hash.find(cur_sum - sum)!=hash.end()){
            for(auto it = res.begin();it!=res.end();it++){
                res.push_back(make_pair(*it, i));
            }
        }
            
        if(cur_sum==sum) res.push_back(make_pair(0, i));
        hash[cur_sum] = i;
    }
    return res;
}

int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;cin>>n;
        int ar[n];
        for(int i=0;i<n;i++) {
            cin>>ar[i];
        }
        vector<pair<int, int>> v;
        for(auto it = v.begin();it!=v.end();it++){
            cout<<it->first<<" - "<<it->second;
        }
        cout<<endl;
        
}}
