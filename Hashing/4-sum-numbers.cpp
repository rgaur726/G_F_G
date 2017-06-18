#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n, k;
        cin>>n>>k;
        int ar[n];
        int ar_sum[n][n];
        unordered_map<int, pair<int, int>> map;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ar_sum[i][j]=ar[i]+ar[j];
                map[ar_sum] = make_pair(i,j);
            }
        }
        vector<pair<pair<int, int>>, pair<int, int>>ans;
        pair<int, int> first, second;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(map[k-ar_sum[i][j]]!0){
                    first = make_pair(i,j);
                    second  = map[ar_sum];
                    if(first.first!=second.first&&first.second!=second.second) {
                        if(first.first<second.first) ans.push_back(make_pair(first,second));
                        else ans.push_back(make_pair(second, first));
                    }
                }
            }
        }cout<<ans.size()<<endl;
    }   
}
