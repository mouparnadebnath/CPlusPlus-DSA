#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
this->data=d;
this->left=NULL;
this->right=NULL;
    }
};
int height(node* root){
    if(root==NULL)
        return 0;
    int lheight=height(root->left);
    int rheight=height(root->right);
    return max(lheight,rheight)+1;
};

int main(){
node* root=new node(2);
  root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
     int treeHeight = height(root);
    cout << "Height of the binary tree: " << treeHeight << endl;

    return 0;
}