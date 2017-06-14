#include <bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main() {
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
	    int n,m,x;
	    cin>>n>>m>>x;
	    int ar[n],ar2[m];
	    unordered_map<int, int>ch;
	    for(int i=0;i<n;i++){
	        cin>>ar[i];
	        ch[ar[i]]=i;
	    }
	    vector<pair<int, int>>v;
	    for(int j=0;j<m;j++){
	        cin>>ar2[j];
	        if(ch.find(x-ar2[j])!=ch.end()){
	            v.push_back(make_pair(ar2[j],ar[ch[x-ar2[j]]]));
	        }
	    }
	    if(v.size()==0) cout<<"-1";
		else {
		    sort(v.begin(), v.end(),sortbysec);
		    for(auto it=v.begin();it!=v.end();it++){
		        cout<<it->second<<" "<<it->first;
		        if(it!=v.end()-1) cout<<", ";
			}
		
		}cout<<endl;
	}
	return 0;
}