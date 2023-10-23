#include "binary_tree_impl.h"

void BinaryTree::BinaryTreeImpl::Insert(int data)
{
    InsertInternaly(root, data);
}

// bool BinaryTree::BinaryTreeImpl::Search(int key)
// {
//     cout << "Let's search" << endl;
//     return SearchInternaly(root, key);
// }

// void BinaryTree::BinaryTreeImpl::InorderPrint()
// {
//     cout << "Printing Inorder" <<endl;
//     InorderInternaly(root);
// }

// void BinaryTree::BinaryTreeImpl::PostOrderPrint()
// {
//     cout << "Printing PostOrder" <<endl;
//     PostInternaly(root);
// }

// void BinaryTree::BinaryTreeImpl::PreOrderPrint()
// {
//     cout << "Printing PreOrder" <<endl;
//     PreInternaly(root);
// }

void BinaryTree::BinaryTreeImpl::DestroyTreeInternaly(Node* &node)
{
    if(node != nullptr)
    {
        DestroyTreeInternaly(node->left);
        DestroyTreeInternaly(node->right);
        delete node;
    }
}

void BinaryTree::BinaryTreeImpl::InsertInternaly(Node* &node, int data)
{
    if(node == nullptr)
    {    
        std::cout << "Inserting new node:"<< data << std::endl;
        node = new Node;
        node->left = nullptr;
        node->right = nullptr;
        node->data = data;
        return;
    }

    if(data < node->data)
    {
        std::cout << "New leaf on the Left" << std::endl;
        return InsertInternaly(node->left, data);
    }
    else
    {
        std::cout << "New leaf on the Right"<< std::endl;
        return InsertInternaly(node->right, data);
    }

}

// bool BinaryTree::BinaryTreeImpl::SearchInternaly(Node* &node, int data) 
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
//             cout << "Searching in left leaf " << endl;
//             return SearchInternaly(node->left, data);
//         }
//         else 
//         {
//             cout << "Searching in right leaf" << endl;
//             return SearchInternaly(node->right, data);
//         }
//     }
// }

// void BinaryTree::BinaryTreeImpl::InorderInternaly(Node* &node)
// {
//     if (node != nullptr) 
//     {
//         InorderInternaly(node->left);
//         cout << node->data << " -> ";
//         InorderInternaly(node->right);
//     }
// }

// void BinaryTree::BinaryTreeImpl::PostInternaly(Node* &node)
// {
//     if (node != nullptr) 
//     {
//         PostInternaly(node->left);
//         PostInternaly(node->right);
//         cout << node->data << " -> ";
//     }
// }

// void BinaryTree::BinaryTreeImpl::PreInternaly(Node* &node)
// {
//     if (node != nullptr) 
//     {
//         cout << node->data << " -> ";
//         PreInternaly(node->left);
//         PreInternaly(node->right);
//     }
// }