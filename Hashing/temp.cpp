FOOTBALL



#include <bits/stdc++.h>

#define for0(i,n) for(i=0;i<n;i++)

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    if(s.find("0000000")!=string::npos ||s.find("1111111")!=string::npos) cout<<"YES";
    else cout<<"NO";
}






158B
taxi

#include <bits/stdc++.h>
using namespace std;
#define for0(i,n) for(i=0;i<n;i++)

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int sum=0;
    for0(i,n){
        int a;
        while(cin>>a) sum+=a;
    }
    if(sum%4==0) cout<< sum/4;
    else cout<< sum/4+1;
}