// **Binary Tree and its Types  d
// Create a Binary Tree(Linked representation) d
// Traversal In a Binary Tree d

// **Binary Search Tree d
// Binary tree is a binary search tree or not(Program to check) d
// Searching in a BST  d
// Insertion and deletion in BST d

// AVL Trees , (Rotation+Insertion) in AVL Trees (CODE), 
// B/B+ Trees , Red Black Trees (Theory only)

// Types:
// 1. full or strict binary tree
// 2. perfect binary tree
// 3. complete binary tree
// 4. degenerate binary tree
// 5. skewed binary tree

// Binary tree search : O(logn) SEARCH
// Insertion and deletion in binary tree is as fast as in a linked list.

#include <iostream>
using namespace std;

// ********************************** Creating a Binary Tree  + Traversal ******************************************
//          |10|
//        /     \
//      |8|     |12|
//     /  \     /  \
//   |6|  |9| |11| |13|

// Preorder -> 10,8,6,9,12,11,13   ----> done
// Postorder -> 6,9,8,11,13,12,10
// Inorder -> 6,8,9,10,11,12,13   (sorted)

// struct node
// {
//     int data;
//     struct node * left;
//     struct node * right;
// };

// struct node * createNode(int data){
//     struct node* n = new node;
//     n->data = data;
//     n->left = NULL;
//     n->right= NULL;
//     return n;
// }

// void preOrder(struct node * root){
//     if (root!=NULL)
//     {
//         cout<< root->data<<" ";
//         preOrder(root->left);
//         preOrder(root->right);
//     }

// }

// void postOrder(struct node * root){
//     if (root!=NULL)
//     {
//         postOrder(root->left);
//         postOrder(root->right);
//         cout<< root->data<<" ";
//     }
// }

// void inOrder(struct node * root){

//     if (root!=NULL)
//     {
//         inOrder(root->left);
//         cout<< root->data<<" ";
//         inOrder(root->right);
//     }
// }

// int main()
// {
//     struct node * p = createNode(10);
//     struct node * p1 = createNode(8);
//     struct node * p2 = createNode(12);
//     struct node * p3 = createNode(6);
//     struct node * p4 = createNode(9);
//     struct node * p5 = createNode(11);
//     struct node * p6 = createNode(13);

//     p->left = p1;
//     p->right = p2;
//     p1->left = p3;
//     p1->right = p4;
//     p2->left = p5;
//     p2->right = p6;

//     cout<<"\nPreOrder Traversal: ";
//     preOrder(p);
//     cout<<"\nPostOrder Traversal: ";
//     postOrder(p);
//     cout<<"\nInorder Traversal: ";
//     inOrder(p);
//     return 0;
// }

// *************************************************** Binary Search Tree *********************************************************

// BINARY SEARCH TREE

// It is a type of binary tree.
// All nodes of left subtree are lesser.
// All nodes of right subtree are greater.
// left and right subtrees are also BST.
// No duplicate nodes.
// Inorder traversal of a BST gives an ascending sorted array.



//         |15|                                    
//        /     \                    
//      |8|     |20|                  
//     /  \     /  \                                 
//   |5|  |10| |16| |24|                 

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void inOrder(struct node * root){

    if (root!=NULL)
    {
        inOrder(root->left);
        cout<< root->data<<" ";
        inOrder(root->right);
    }
}

struct node *createANode(int data)
{
    struct node *n = new node;
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

// *********************************** Binary tree is a binary search tree or not(Program to check) ***********************************

// int isBST(struct node *root){
//     static struct node *prev = NULL;

//     if (root != NULL)  
//     {
//         if (!isBST(root->left))  
//             { return 0; } 

//         if (prev != NULL && root->data <= prev->data)   
//             { return 0;} 

//         prev = root;  
//         return isBST(root->right); 
//     }

//     else
//         return 1;
// }

// **************************************************** Searching in a BST *********************************************


// int searchInBST(struct node* root , int key){
//     if(root == NULL){
//         return 0;
//     }

//     if(key == root->data){
//         return 1;
//     }

//     else if (key < root->data){
//         return searchInBST(root->left, key);
//     }
    
//     else if(key> root->data){
//         return searchInBST(root->right, key);
//     }
//     else return 0;
// }

// ******************************************* Insertion in a BST ************************************************

// void insert(struct node * root, int key){
//     struct node * prev = NULL; 

//     while (root!=NULL)     
//     {
//         prev=root;
//         if (key==root->data)
//         {
//             cout<<"CANNOT INSERT , ALREADY IN BST!!";
//             return;
//         } 
//         else if (key<root->data) 
//             root = root->left;

//         else
//             root = root->right;

//     }

//     struct node * new1 = createANode(key); 
//     if (key<prev->data) 
//     {
//         prev->left=new1;     
//         cout<<"Inserted Successfully";
//     }
//     else{ 
//         prev->right=new1;
//         cout<<"Inserted Successfully";
//     }
// }

// ******************************************* Deletion in a BST ************************************************

// struct node* inOrderPredecessor(struct node* root){   //  inorderpredecessor ...right most child of left subtree!
//     root = root->left;
//     while(root->right != NULL){
//         root = root->right;
//     }
//     return root;
// }


// struct node* deleteNode(struct node * root, int value){
    
// struct node* iPre;

//     if (root == NULL )
//     {
//         return NULL;
//     }
    
//     if (root->left == NULL && root->right == NULL ){
//         free(root);
//         return NULL;
//     }

//     if (value< root->data)
//     {
//        root->left=deleteNode(root->left,value);
//     }

//     else if(value>root->data){
//         root->right = deleteNode(root->right, value);
//     }
    
//     else{
//         iPre = inOrderPredecessor(root);
//         root->data = iPre->data;
//         root->left = deleteNode(root->left,iPre->data);
//     }    

//     return root;
// }




int main() 
{

    struct node *p = createANode(15);
    struct node *p1 = createANode(8);
    struct node *p2 = createANode(20);
    struct node *p3 = createANode(5);
    struct node *p4 = createANode(10);
    struct node *p5 = createANode(16);
    struct node *p6 = createANode(24);
    

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;


    // inOrder(p);
    // deleteNode(p,15);
    // cout<<"\n";
    // inOrder(p);


    // insert(p,12);


    // if (searchInBST(p,10))
    // {
    //     cout<<"Key is present in BST!!";
    // }
    // else cout<<"Key is not present in BST!!";


    
    // int x = isBST(p);
    // if (x == 1)
    //     cout << "Binary Tree is a BST!!";

    // else
    //     cout << "Binary Tree is not a BST!!";
    return 0;
}

