#include "binary_tree.h"

using namespace std;

void BinaryTree::InsertNode(Node *p, int data)
{
    if(root == nullptr)
    {
        cerr << "inserting new node:"<< data <<endl;
        root = new Node;
        root->left = nullptr;
        root->right = nullptr;
        root->data = data;
    }
    
    if(data < root->data)
    {
        cerr << "insert left=" << root->data << endl;
        p = root;
        InsertNode(p->left, data);
    }
    else
    {
        cerr << "insert right=" << root->data << endl;
        p = root;
        InsertNode(p->right, data);
    }
}

bool BinaryTree::Search(Node* p, int data) 
{
    if(root == nullptr)
    {
        return false;
    }

    if(root->data == data)
    {
        return true;
    }
    else
    {
        if(data < root->data)
        {
            cout << "Left" << endl;
            p = root;
            return Search(p->left, data);
        }
        else 
        {
            cout << "Right" << endl;
            p = root;
            return Search(p->right, data);
        }
    }
}

void BinaryTree::Inorder(Node* root)
{
  if (root != nullptr) 
  {
    Inorder(root->left);
    cerr << root->data << " -> ";
    Inorder(root->right);
  }
}

