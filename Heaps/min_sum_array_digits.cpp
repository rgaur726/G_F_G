#include <vector>
#include<iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        
        vector<int> v;
        for(int it=0;it<n;it++){
            int input;
            cin>>input;
            v.push_back(input);
        }
        sort(v.begin(), v.end());
     	int k = v.size();
     	int num1=0, num2=0;
     	if(k%2==0){
     		for(int a=0, s=1;a<k; s++, a+=2)
	     		num1 += v[a]*pow( 10,k/2-s);
     		for(int a=1, s=1;a<=k; s++, a+=2)
    	 		num2 += v[a]*pow(10, k/2-s);
     	}
     	else {
     		for(int a=0,s=0;a<=k;a+=2, s++)
     			num1 += v[a]*pow( 10,k/2-s);
 			for(int a=1, s=1;a<k;a+=2, s++)
 				num2 += v[a]*pow(10, k/2-s);
     		
     	}
     	cout<<num1+num2;
    cout<<endl;   //for(int i=0;i<n;i++) cout<<v[i]<<" ";
    }
}