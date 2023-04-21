#include <iostream>
using namespace std;

struct BstNode{
    int data;
    BstNode* left;
    BstNode* right;
};

int FindMin(BstNode* root){
    if (root == NULL){
        cout << "Error: Tree is empty\n";
        return -1;
    };
    while(root->left != NULL){
        root = root->left;
    }
    return root->data;
    // //Search in left subtree.
    // return FindMin(root->left);
};

int FindMax(BstNode* root){
    if (root == NULL){
        cout << "Error: Tree is empty\n";
        return -1;
    };
    while(root->right != NULL){
        root = root->right;
    }
    return root->data;
};

