#include <bits/stdc++.h>
using namespace std;
#define N    1000
vector<int> generateFibonacci (int n){
    int fib1 = 0;
    int fib2 = 1;
    int fib3;
    vector<int>fib;
    fib.push_back (fib1);
    //cout<<fib[0]<<endl;
    fib.push_back(fib2);
    int i=1;
    while(fib1+fib2<=n){
        fib3 = fib1+fib2;
        fib1 = fib2;
        fib2 = fib3;
        fib.push_back(fib3);
    }
    return fib;
}
int main(){
    
    vector<int> v = generateFibonacci(N);
    unordered_map<int, int> fibon;
    for(int i=0;i<v.size();i++) fibon[v[i]]++;
    //for(int i=0;i<v.size();i++) cout<< fibon[v[i]]<<" ";
    int test;
    cin>>test;
    //cout<<test;
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        int ar[n];
        for(int it=0;it<n;it++) cin>>ar[it]; //for(int it=0;it<n;it++) cout<<ar[it];
        for(int it=0;it<n;it++) if(fibon[ar[it]]!=0) cout<<ar[it]<<" ";
        cout<<endl;
    }
    
}