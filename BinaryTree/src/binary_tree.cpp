#include "binary_tree.h"

using namespace std;

BinaryTree::BinaryTree()
{
    BinaryTree::root == nullptr;
}

BinaryTree::~BinaryTree()
{
    DestroyTree();
}

void BinaryTree::Insert(int data)
{
    InsertInternaly(BinaryTree::root, data);
}

void BinaryTree::DestroyTree()
{
    DestroyTreeInternaly(BinaryTree::root);
}

// void BinaryTree::Search(int key)
// {
//     SearchInternaly(root, data);
// }

// void BinaryTree::InorderPrint()
// {
//     InorderInternaly(root);
// }

// void BinaryTree::PostOrderPrint()
// {
//     PostInternaly(root);
// }

// void BinaryTree::PreOrderPrint()
// {
//     PreInternaly(root);
// }

void BinaryTree::DestroyTreeInternaly(Node* node)
{
    if(!BinaryTree::root)
    {
        DestroyTreeInternaly(BinaryTree::root->left);
        DestroyTreeInternaly(BinaryTree::root->right);
        delete BinaryTree::root;
    }
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

