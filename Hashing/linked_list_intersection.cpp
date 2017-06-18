#include <bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node* next;
};

struct node* findIntersection(struct node* head1, struct node* head2)
{
    unordered_map<int, int> hash;
    while(head1!=NULL){
        if(hash.find(head1->data)==hash.end())
            hash[head1->data]++;
        head1=head1->next;
    }
    node *head = new node;
    vector<int>v;
    while(head2!=NULL){
        if(hash.find(head2->data)!=hash.end()){
            v.push_back(head2->data);
        }
        head2 = head2->next;
    }
    sort(v.begin(), v.end());
    int i=1;
    head->data = v[0];
    node *ans = head->next;
    while(v.size()!=0){
        ans->data = v[i];
        v.erase(v.begin()+i);
        i++;
        ans=ans->next;
    }
    return head;
}


int main() {
    int test;
    cin>>test;
    while(test--){
        node *head1 = new node;
        node *head2 = new node;
        int k;
        cin>>k;
        while(k--)
        {
            int data;
            cin>>data;
            head1->data = data;
            head1=head1->next;
        }
        int j;
        cin>>j;
        while(j--){
            int data;
            cin>>data;
            head2->data = data;
            head2=head2->next;
        }
        node *head3 = new node;
        head3 = findIntersection(head1, head2);
        while(head3!=NULL){
            cout<<head3->data<<" ";
            head3=head3->next;
        }
    cout<<endl;
    }
}
