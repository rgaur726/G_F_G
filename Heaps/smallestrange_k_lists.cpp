#include <bits/stdc++.h>
using namespace std;
int m=0;
struct node {
    int value, listnum, col;
};
//comparison function to decide node's order in heap
struct comp{
    bool operator()(node l, node r){
        return l.value>r.value;
    }
};
pair<int, int> findminrange(vector<int>list[]){
    int high = INT_MIN;
    pair<int, int> p = {0, INT_MAX};
    
    priority_queue<node, vector<node>, comp> pq;
    cout<<endl<<m<<endl;
    for(int i=0;i<m;i++){
        pq.push({list[i][0], i, 0});
        high = max(high, list[i][0]);
    }
    
    for(;;){
        int low = pq.top().value;
        int i=pq.top().listnum;
        int j=pq.top().col;
        pq.pop();
        if(high-low < p.second-p.first) p = {low, high};
        if(j==list[i].size()-1) return p;
        pq.push({list[i][j+1], i, j+1});
        high = max(high, list[i][j+1]);
    }
}
int main(){
    vector<int>list[] = {
        {0,3,5,7}, 
        {-9,4,16,8}, 
        {1,6,7,9}
    };
    m = sizeof(list)/sizeof(vector<int>);
    //cout<<i;
    pair<int, int> p= findminrange(list);
    cout<< p.first<<" - "<<p.second;
}