#include <bits/stdc++.h>
using namespace std;
-7
struct node
{
	int data;
	node *next;
};

class list 
{
	private:
		node *head, *tail;
	public:
	list() {
		head = NULL;
		tail= NULL;
	}

	void create(int data) {
		node *temp = new node;
		temp->data=data;
		temp->next=NULL;
		if(head==NULL){
			head=temp;
			tail=temp;
			temp=NULL;
		} else {
			tail->next=temp;
			tail=temp;
		}
	}

	void display() {
		node *temp=new node;
		temp=head;
		while(temp!=NULL) {
			cout<<temp->data;
			temp=temp->next;
		}
	}
};
	

int main() {
	list mylist;
	int n;
	cin>>n;
	while(n-->0){
		mylist.create();
	}

	mylist.display();

	return 0;

}