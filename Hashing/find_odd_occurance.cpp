#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin>>test;
	for(int j=0;j<test;j++){
	    int n;
	    cin>>n;
	    int ar[n];
	    unordered_map<int ,int>h;
	    for(int i=0;i<n;i++){
	        cin>>ar[i];
	        if(h.find(ar[i])==h.end()) h[ar[i]]++;
	        else h.erase(ar[i]);
	    }
	    auto it = h.begin();
	    cout<<it->first<<endl;
	}
	return 0;
}