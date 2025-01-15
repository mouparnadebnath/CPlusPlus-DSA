#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data) {
        this->data = data;
       this-> left = NULL;
       this-> right = NULL;
    }
};
void printPostOrder(TreeNode* root){
    if(root==NULL){return ;}

    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<<root->data<<" ";
 
}
class Solution {
public:
int findPosition(vector<int>& inorder,int element,int n){
    for(int i=0;i<n;i++){
        if(inorder[i]==element){
            return i;
        }
    }
    return -1;
}
TreeNode* solve(vector<int>& preorder,vector<int>& inorder,int &preorderIndex,int inorderStartIndex,int inorderEndingIndex,int n){
if(preorderIndex>=n||inorderStartIndex>inorderEndingIndex){
    return NULL;
}
int element=preorder[preorderIndex++];
TreeNode* root=new TreeNode(element);
int position=findPosition(inorder,element,n);
// recursive call
root->left=solve(preorder,inorder,preorderIndex,inorderStartIndex,position-1,n);
root->right=solve(preorder,inorder,preorderIndex,position+1,inorderEndingIndex,n);
return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
      int preorderindex=0;
       TreeNode* ans=solve( preorder,inorder,preorderindex,0,inorder.size()-1,inorder.size());
       return ans; 
    }
};

int main() {
    vector<int> preorder = {1, 6, 8, 7};
    vector<int> inorder = {1, 6, 7, 8};
      Solution s;
TreeNode* root=s.buildTree(preorder, inorder);
printPostOrder(root);


    return 0;
}