#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
      vector<int>v;
      int n;
      cin>>n;
      for(int j=0;j<n;j++){
          int ele;
          cin>>ele;
          v.push_back(ele);
      }
      sort(v.begin(), v.end());
      int k1, k2;
      cin>>k1>>k2;
      int sum = 0;
      while(k1!=k2-1) {
          sum+=v[k1];
          k1++;
      }
      cout<<sum<<endl;
    }
	//vector<int>v;
	return 0;
}