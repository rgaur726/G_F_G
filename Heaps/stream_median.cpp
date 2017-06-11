#include <bits/stdc++.h>
using namespace std;
/*struct node {
    int value;
    priority_queue<int> *left;
    priority_queue<int, vector<int>, greater<int>> q1 *right;
};*/
int main(){
    priority_queue<int> left;
    priority_queue<int, vector<int>, greater<int>> right;
    int n;
    cin>>n;
    int root;
    cin>>root;
    cout<<root<<endl;
    //left.push(root);
    int first;
    cin>>first;
    if(first>root){
        left.push(root);
        right.push(first);
    }
    else {
        left.push(first);
        right.push(root);
    }
    root = (first+root)/2;
    cout<<root<<endl;
    for(int i=2;i<n;i++)
    {   int k;
        cin>>k;
        if(k<root)  

            left.push(k);
        else
        	right.push(k);
    	if(left.size()-right.size()==2 ){
    		int to = left.top();
    		left.pop();
    		right.push(to);
    	}
    	else if(right.size()-left.size() == 2){
    		int to = right.top();
    		right.pop();
    		left.push(to);
    	}
   	if(left.size()==right.size()) root = (left.top()+right.top())/2;
    	else root = left.size()>right.size()?left.top():right.top();
        cout<<root<<endl;
    }
}
