#include <bits/stdc++.h>
using namespace std;
int finddistinctwindow(string s, string p){
    int l1 = s.length();
    int l2 = p.length();
    unordered_map<int, int> hash_str, hash_pat;
    int index = -1;
    int count = 0;
    int min = INT_MAX;
    int start = 0;
    for(int i=0;i<l2;i++) hash_pat[p[i]]++;
    for(int i=0;i<l1;i++) {
        hash_str[s[i]]++;
        if(hash_pat[s[i]]!=0&&hash_pat[s[i]]>=hash_str[s[i]]) count++;
        if(count==l2){
            while(hash_pat[s[start]]==0||hash_str[s[start]]>hash_pat[s[start]])
            {
                if(hash_pat[s[start]]<hash_str[s[start]])
                    hash_str[s[start]]--;
                start++;
            }
            int len = i-start +1;
            if(min>len){
                min = len;
                index = start;
            }
        }
    }
    return min;
}
int main(){
    int test;
    cin>>test;
    for(int it=0;it<test;it++){
        string s,p;
        cin>>s;
        unordered_map<char, int> map;
        for(int i=0;i<s.length();i++)
            map[s[i]]++;
        vector<char> ch;
        for(int i=0;i<s.length();i++){
            if(map[s[i]]!=0){
                p.push_back(s[i]);
                map[s[i]]=0;
            }
        }
       cout<<finddistinctwindow(s,p)<<endl;
    }
}