#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
		int a, b;
		cin>>a>>b;
		for(int ele = a;ele<b+1;ele++){
			int temp = ele;
			unordered_map<int, int>hash;
			while(temp!=0){
				int k =temp%10;
				if(hash[k]==0)
				{
					hash[k]++;
					temp = temp/10;
				}
				else break;
			}
			if(temp==0) cout<<ele<<" ";
		}cout<<endl;
	}
	return 0;
}