#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int it=0;it<test;it++){
        string s;
        int k=0;
        cin>>s>>k;
        int a = 0;
        unordered_map<char, int> hash;
        for(int i=0;i<s.length();i++){
            if(hash.size()<=k)
                hash[s[i]]++;
            else {
                while(hash.size()=k){
                    hash[s[a]]--;
                    if(hash[s[a]]==0)
                        hash.erase(s[a]);
                    a++;
                }
                hash[s[i]]++;
            }    
        }if(hash.size()==k) {
            int ans=0;
            auto it = hash.begin();
            while (it!=hash.end()){
                ans+=it->second;
                ++it;
            }
            cout<<ans<<endl;
        }
        else cout<<"-1\n";
    }
}