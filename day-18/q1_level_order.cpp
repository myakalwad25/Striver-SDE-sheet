#include <bits/stdc++.h> 
using namespace std;

// code by vijay myakalwad

/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    vector<int> ans;
    if(root==NULL) return ans;
    queue<BinaryTreeNode<int>*> que;
    que.push(root);
    while(!que.empty()) {
        BinaryTreeNode<int> *node = que.front();
        que.pop();
        ans.push_back(node->val);
        if(node->left) que.push(node->left);
        if(node->right) que.push(node->right);
    }
    return ans;
}