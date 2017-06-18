#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    string s1, s2;
	    cin>>s1>>s2;
	    int i=0;
	    unordered_map<char, int>map1, map2, map3;
	    vector<char>v;
	    while(i<s1.length()){
	        map1[s1[i]]++;
	        i++;
	    }
	    i=0;
	    while(i<s2.length()){
	        map2[s2[i]]++;
	        i++;
	    }
	    for(int j=0;j<s2.length();j++){
	        if(map1.find(s2[j])==map1.end()) 
	        {
	        	if(map3.find(s2[j])==map3.end())
	            {
	            	v.push_back(s2[j]);
	                map3[s2[j]]++;
	            }
	        }
	    }
	    for(int k=0;k<s1.length();k++){
	        if(map2.find(s1[k])==map2.end()){
	            if(map3.find(s1[k])==map3.end())
	            {
	            	v.push_back(s1[k]);
	                map3[s1[k]]++;
	            }     
	    	}
	    }
	    sort(v.begin(),v.end());
	    auto it = v.begin();
	    while(it!=v.end()){
	        cout<<*it;
	        it++;
	    }
	    cout<<endl;
	}
	return 0;
}