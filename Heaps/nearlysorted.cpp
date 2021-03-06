#include <iostream>
#include <vector>
using namespace std;
class heap {
    void swap(int a, int b){
        int temp =list[a];
        list[a]=list[b];
        list[b]=temp;
    }
    void bubbleUp(){
        int child = list.size()-1;
        int parent =getparent(child);
        while(child>=0&&parent>=0&&list[child]<list[parent]){
            swap(child, parent);
            child = parent;
            parent = getparent(child);
        }
    }
    void bubbledown(){
        int parent = 0;
        while(1){
            int left = getlchild(parent);
            int right = getrchild(parent);
            int length = list.size();
            int largest = parent;
            if(list[largest]>list[left]&&left<length) largest = left;
            if(list[largest]>list[right]&&right<length)largest = right;
            if(largest!=parent){
                swap(parent, largest);
                parent =largest;
            }
            else break;
        }
    }
    int getlchild (int parent){
        return parent*2 +1;
    }
    int getrchild(int parent){
        return parent*2+2;
    }
    int getparent(int child){
        return child%2==0? (child/2) -1:child/2;
    }
    public:
    vector<int> list;
    void insert(int el){
        list.push_back(el);
        bubbleUp();
    }
    int remov(){
        int child = list.size()-1;
        swap(0, child);
        int value = list.back();
        list.pop_back();
        bubbledown();
        return value;
    }
};
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n, k;
        cin>>n>>k;
        int arr[n], answer[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
      
        heap h;
        int p=0;
        for (int in=0;in<k;in++) h.insert(arr[in]);
       	while(k+p<n){
       		answer[p] = h.remov();
       		
       		h.insert(arr[k+p]);
       		p++;
       	}
       	while(p<n){
       		answer[p] =h.remov();
       		p++;
       	}
       	for(int pl=0;pl<n;pl++) cout<<answer[pl]<<" ";
       	cout<<endl;
    }
}
       	
       	
       	
       	
       	
       	
       	