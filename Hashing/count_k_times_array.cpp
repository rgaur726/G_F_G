#include <bits/stdc++.h>
using namespace std;
int findktimes(int *ar, int n, int k){
	//cout<<n<<" "<<k<<endl;
    unordered_map<int, int> count;
        for(int i=0;i<n;i++)    
            count[ar[i]]++;
            //cout<<count[926];
        for(int i=0;i<n;i++)
            if(count[ar[i]]==k) return ar[i];
		return -1;    
}        
int main()
{
    int test;
    cin>>test;
    for(int g =0;g<test;g++){
        int n, k;
        cin>>n>>k;
       
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
           //  cout<<endl<<endl;
        cout<<findktimes(ar,n,k);
        cout<<endl;
    }
    
}