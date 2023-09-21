#include "binary_tree.h"

using namespace std;

BinaryTree::BinaryTree()
{
    root == nullptr;
}

void BinaryTree::InsertInternaly(Node *node, int data)
{
    if(node == nullptr)
    {
        cerr << "inserting new node:"<< data <<endl;
        node = new Node;
        node->left = nullptr;
        node->right = nullptr;
        node->data = data;
    }
    
    if(data < node->data)
    {
        cerr << "insert left=" << node->data << endl;
        InsertInternaly(node->left, data);
    }
    else
    {
        cerr << "insert right=" << node->data << endl;
        InsertInternaly(node->right, data);
    }
}

void BinaryTree::Insert(int data)
{
    InsertInternaly(root, data);
}

// bool BinaryTree::Search(Node* p, int data) 
// {
//     if(root == nullptr)
//     {
//         return false;
//     }

//     if(root->data == data)
//     {
//         return true;
//     }
//     else
//     {
//         if(data < root->data)
//         {
//             cout << "Left" << endl;
//             p = root;
//             return Search(p->left, data);
//         }
//         else 
//         {
//             cout << "Right" << endl;
//             p = root;
//             return Search(p->right, data);
//         }
//     }
// }

// void BinaryTree::Inorder(Node* root)
// {
//   if (root != nullptr) 
//   {
//     Inorder(root->left);
//     cerr << root->data << " -> ";
//     Inorder(root->right);
//   }
// }

