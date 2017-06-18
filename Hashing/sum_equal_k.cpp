#include <bits/stdc++.h>
using namespace std;
void find_sum_k_non_negative(int *ar, int ar_size, int sum){
    int cur_sum = ar[0];
    int j=0;
    if(cur_sum>sum){
            
            while(cur_sum>sum){
                cur_sum-=ar[j];
                j++;
            }
        }
   // cout<<endl<<sum<<endl;
    int count =0;
    //pair<int, int> p = {0, ar_size-1};
    //int j=0;
    if(cur_sum==sum) {
    count++;	//p.second = 0;
    	//cout<<p.first<<" - "<<p.second<<endl;
    }
    for(int i=1;i<ar_size;i++){
        cur_sum+=ar[i];
        if(cur_sum>sum){
            
            while(cur_sum>sum){
                cur_sum-=ar[j];
                j++;
            }
        }
        if(cur_sum==sum) 
        count++;
    }
    cout<<count<<endl;
}
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        int ar[n];
        int min = INT_MAX;
        for(int j=0;j<n;j++){
            cin>>ar[j];
            if(ar[j]<min) min = ar[j];
        }
        if(min<0)
        	min *=-1;
        for(int it=0;it<n;it++) ar[it]+=min;
        find_sum_k_non_negative(ar,n,min);
	    //cout<<p.first <<" - "<<p.second<<endl;
    }
}