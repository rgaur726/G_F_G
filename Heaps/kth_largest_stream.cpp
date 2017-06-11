#include <iostream>
#include <vector>
using namespace std;

int getparent(int child){
    return child%2==0 ? child/2 -1: child/2;
}
int getrchild(int parent){
    return 2*parent +2;
}
int getlchild(int parent){
    return 2*parent+1;
}
void swap(vector<int> &list, int a, int b){
    int temp = list[a];
    list[a] = list[b];
    list[b]=temp;
}
void bubbleUp(vector<int> &list){
    int child = list.size()-1;
    if(child>0){
    int parent = getparent(child);
    while(child>=0&&parent>=0&&list[child]<list[parent]) {
        swap(list, parent, child);
        child = parent;
        parent = getparent(child);
    }}
}
void bubbledown(vector<int> &list){
    int parent = 0;
    while(1){
        int left = getlchild(parent);
        int right = getrchild(parent);
        int largest = parent;
        if(left<list.size()&& list[left]<list[largest]) largest = left;
        if(right<list.size()&&list[right]<list[largest]) largest = right;
        if(largest!=parent){
            swap(list, largest, parent);
            parent = largest;
        }
        else break;
    }
}
void insert(vector<int> &list, int el){
    list.push_back(el);
    bubbleUp(list);
}
int remov(vector<int> &list){
    if(list.size()!=0){
    int child =list.size()-1;
    swap(list, 0, child);
    int value = list.back();
    list.pop_back();
    bubbledown(list);
    return value;
}}


int main(){
   
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
    	 vector<int> v;
        int n ,k  ;
        cin>>k>>n;
        for(int j=1;j<=n;j++){
        	
			int val;
			cin>>val;
			if(j<k){
				insert(v, val);
				cout<<"-1"<<" ";
			}
			else if(j==k){
				insert(v, val);
				cout<<v[0]<<" ";
			}
			else {
				//if(val<v[0]) cou;
			    if(val<=v[0]) cout<<v[0]<<" ";
				else {
					remov(v);
					insert(v, val);
					cout<<v[0]<<" ";
				}
			}
        }cout<<endl;
    }
}
