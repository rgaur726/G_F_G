#include <bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n, m, k;
        cin>>n>>m>>k;
        int ar[m];
        unordered_map<int, int> gate;
        for(int j=0;j<m;j++){
            cin>>ar[m];
            gate[ar[m]]++;
        }
        vector<int> v;
        for(int q=0;q<2*k;q++){
            int are;
            cin>>are;
            v.push_back(are);
        }
        //vector<int> v2 = v;
        int count = 0;
        vector<int>::iterator position;
        int ele = 1;
        int pos=0;
        
       while(!v.empty()){
           position = find(v.begin(), v.end(), ele);
           pos = distance(v.begin(),position);
           if(pos%2==0) {
               ele = *(position+1); 
               v.erase(v.begin()+pos, v.begin()+pos+2);
               if (gate[ele]!=0) break;
           }
           else {
               ele = *(position -1); //cout<<ele<<" "<<pos<<endl;
               v.erase(v.begin()+pos-1, v.begin()+pos+1);
               if (gate[ele]!=0) break;
           }
       }
       cout<<ele<<endl;
    }
}