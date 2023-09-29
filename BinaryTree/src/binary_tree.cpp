#include "binary_tree.h"

using namespace std;

BinaryTree::BinaryTree()
{
    BinaryTree::root == nullptr;
}

BinaryTree::~BinaryTree()
{
    DestroyTreeInternaly(&root);
}

void BinaryTree::Insert(int data)
{
    InsertInternaly(&root, data);
}

// void BinaryTree::DestroyTree()
// {
//     DestroyTreeInternaly(&root);
// }

// bool BinaryTree::Search(int key)
// {
//     cout << "Let's search" << endl;
    //     return SearchInternaly(this->root, key);
// }

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

void BinaryTree::DestroyTreeInternaly(Node** node)
{
    if((*node) != nullptr)
    {
        DestroyTreeInternaly(&(*node)->left);
        DestroyTreeInternaly(&(*node)->right);
        delete (*node);
    }
}

void BinaryTree::InsertInternaly(Node* &node, int data)
{
    if(node == nullptr)
    {
        cout << "inserting new node:"<< data <<endl;
        node = new Node;
        node->left = nullptr;
        node->right = nullptr;
        node->data = data;
        return;
    }

    if(data < node->data)
    {
        cout << "insert left " << endl;
        return InsertInternaly(node->left, data);
    }
    else
    {
        cout << "insert right "<< endl;
        return InsertInternaly(node->right, data);
    }

}

// bool BinaryTree::SearchInternaly(Node* node, int data) 
// {
//     if(node == nullptr)
    //     {
//         return false;
    //     }
//     else
    //     {    
//         if(node->data == data)
        //         {
//             cout << "#### Find it ####" << endl;
            //             return true;
        //         }
//         else if(data < node->data)
        //         {
//             cout << "Left ";
            //             return SearchInternaly(node->left, data);
        //         }
//         else 
        //         {
//             cout << "Right ";
            //             return SearchInternaly(node->right, data);
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

