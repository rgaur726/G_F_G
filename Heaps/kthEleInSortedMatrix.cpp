#include <iostream>
#include <vector>
using namespace std;
struct heap{
    int value;
    int row, col;
    heap (int el,int r, int c){
        value = el;row = r;col = c;
    }
};
int getparent(int child){
    return child%2==0?child/2-1:child/2;
}
int getlchild(int parent){
    return 2*parent+1;
}
int getrchild(int parent){
    return 2*parent+2;
}
template <class T>
void swap(vector<T>list, int child, int parent){
    vector<T> temp = list[child];
    list[child] = list[parent];
    list[parent] = temp;
}
template <class T>
void bubbleUp(vector<T>list){
    int child = list.size()-1;
    int parent = getparent(child);
    while(child>=0&&parent>=0&&list[child]<list[parent]){
        swap(child, parent);
        child = parent;
        parent = getparent(child);
    }
}
template <class T>
void bubbledown(vector<T>list){
    int parent = 0;
    while(1){
        int left = getlchild(parent);
        int right = getrchild(parent);
        int length = list.size();
        int largest = parent;
        if(left<length&&list[left]<list[largest]){
            largest = left;
        }
        if(right<length&&list[right]<list[largest]){
            largest = right;
        }
        if(largest!=parent) {
            swap(largest, parent);
            parent = largest;
        }
        else break;
    }
}

template <class T>
void insert(vector<T>list, T el){
   
    list.push_back(el);
    bubbleUp(list);
}/*
template <class T>
T remov(vector<T>list){
    int child = list.size()-1;
    swap(child, 0);
}*/

int main(){
    vector<heap*>v;
    heap *h = new heap(10,0,0);
     heap *h3 = new heap(13,0,0);
      heap *h2 = new heap(9,0,0);
    v.push_back(h);v.push_back(h3);v.push_back(h2);
    heap *k = v.front();
    cout<<k->value;
}