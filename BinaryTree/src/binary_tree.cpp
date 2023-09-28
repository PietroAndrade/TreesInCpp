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

bool BinaryTree::Search(int key)
{
    cout << "Let's search" << endl;
    return SearchInternaly(BinaryTree::root, key);
}

// void BinaryTree::InorderPrint()
// {
//     InorderInternaly(BinaryTree::root);
// }

// void BinaryTree::PostOrderPrint()
// {
//     PostInternaly(BinaryTree::root);
// }

// void BinaryTree::PreOrderPrint()
// {
//     PreInternaly(BinaryTree::root);
// }

void BinaryTree::DestroyTreeInternaly(Node* node)
{
    if(BinaryTree::root != nullptr)
    {
        DestroyTreeInternaly(node->left);
        DestroyTreeInternaly(node->right);
        delete node;
    }
}

void BinaryTree::InsertInternaly(Node* &node, int data)
{
    if(node == nullptr)
    {
        cerr << "inserting new node:"<< data <<endl;
        node = new Node;
        node->left = nullptr;
        node->right = nullptr;
        node->data = data;
    }
    else
    {
        if(data < node->data)
        {
            cerr << "insert left " << endl;
            return InsertInternaly(node->left, data);
        }
        else
        {
            cerr << "insert right "<< endl;
            return InsertInternaly(node->right, data);
        }
    }

}

bool BinaryTree::SearchInternaly(Node* node, int data) 
{
    if(node == nullptr)
    {
        return false;
    }
    else
    {    
        if(node->data == data)
        {
            cout << "#### Find it ####" << endl;
            return true;
        }
        else if(data < node->data)
        {
            cout << "Left ";
            return SearchInternaly(node->left, data);
        }
        else 
        {
            cout << "Right ";
            return SearchInternaly(node->right, data);
        }
    }
}

// void BinaryTree::Inorder(Node* root)
// {
//   if (root != nullptr) 
//   {
//     Inorder(root->left);
//     cerr << root->data << " -> ";
//     Inorder(root->right);
//   }
// }

