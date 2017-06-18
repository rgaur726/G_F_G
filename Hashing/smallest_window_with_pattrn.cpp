#include <bits/stdc++.h>
using namespace std;
const int k = 256;
string findwi(string s, string p){
    int len1 = s.length();
    int len2 = p.length();
    unordered_map<int, int> hash_s, hash_p;
    for(int j=0;j<len2;j++) hash_p[p[j]]++;
    int count = 0;
    int start =0;
    int index = -1;
    int min = INT_MAX;
    for(int i=0;i<len1;i++){
        hash_s[s[i]]++;
        if(hash_p[s[i]]!=0 && hash_p[s[i]]>=hash_s[s[i]]) count++;
        if(count==len2){
            while(hash_p[s[start]]==0|| hash_p[s[start]]<hash_s[s[start]]){
                if(hash_p[s[start]]<hash_s[s[start]])
                    hash_s[s[start]]--;
                start++;
            }
            int len = i-start +1;
            if(min>len){
                min= len;
                index = start;
            }
            
        }
    }
    if(index==-1) return "s";
    return s.substr(index, min);
}
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        string s,p;
        cin>>s>>p;
        cout<< findwi(s,p)<<endl;
    }
    
}