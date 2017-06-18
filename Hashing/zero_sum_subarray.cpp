#include <bits/stdc++.h>
using namespace std;
int count(int *ar, int n){
    unordered_map<int, int>hash;
    int cur_sum=0;
    int ans=0;
    for(int i=0;i<n;i++){
        cur_sum+=ar[i];
        if(cur_sum==0)
            ans++;
        if(hash.find(cur_sum)!=hash.end()) ans+=hash[cur_sum];
        hash[cur_sum]++;
    }
    return ans;
}
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++) cin>>ar[i];
        cout<<count(ar,n)<<endl;
    }
}