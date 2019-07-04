#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

	void levelOrder(Node * root){
      //Write your code here
  	queue<Node*> que;
        Node* new_node = root;

        while(new_node!=NULL){
            cout<<new_node->data<<" ";

            if(new_node->left!=NULL)
                que.push(new_node->left);
            if(new_node->right!=NULL)
                que.push(new_node->right);
            

        

        if(!que.empty()){
            new_node = que.front();
            que.pop();
        } else {
            new_node=NULL;
        }
    }
}

};//End of Solution
int main() {
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;

}