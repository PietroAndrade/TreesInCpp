#include "binary_tree_impl.h"

void BinaryTreeImpl::Insert(int data)
{
    InsertInternaly(root, data);
}

bool BinaryTreeImpl::Search(int key)
{
    std::cout << "Let's search" << std::endl;
    return SearchInternaly(root, key);
}

void BinaryTreeImpl::InorderPrint()
{
    std::cout << "Printing Inorder" << std::endl;
    InorderInternaly(root);
}

void BinaryTreeImpl::PostOrderPrint()
{
    std::cout << "Printing PostOrder" << std::endl;
    PostInternaly(root);
}

void BinaryTreeImpl::PreOrderPrint()
{
    std::cout << "Printing PreOrder" << std::endl;
    PreInternaly(root);
}

void BinaryTreeImpl::DestroyTreeInternaly(Node* &node)
{
    if(node != nullptr)
    {
        DestroyTreeInternaly(node->left);
        DestroyTreeInternaly(node->right);
        delete node;
    }
}

void BinaryTreeImpl::InsertInternaly(Node* &node, int data)
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

bool BinaryTreeImpl::SearchInternaly(Node* &node, int data) 
{
    if(node == nullptr)
    {
        return false;
    }
    else
    {    
        if(node->data == data)
        {
            std::cout << "#### Find it ####" << std::endl;
            return true;
        }
        else if(data < node->data)
        {
            std::cout << "Searching in left leaf " << std::endl;
            return SearchInternaly(node->left, data);
        }
        else 
        {
            std::cout << "Searching in right leaf" << std::endl;
            return SearchInternaly(node->right, data);
        }
    }
}

void BinaryTreeImpl::InorderInternaly(Node* &node)
{
    if (node != nullptr) 
    {
        InorderInternaly(node->left);
        std::cout << node->data << " -> ";
        InorderInternaly(node->right);
    }
}

void BinaryTreeImpl::PostInternaly(Node* &node)
{
    if (node != nullptr) 
    {
        PostInternaly(node->left);
        PostInternaly(node->right);
        std::cout << node->data << " -> ";
    }
}

void BinaryTreeImpl::PreInternaly(Node* &node)
{
    if (node != nullptr) 
    {
        std::cout << node->data << " -> ";
        PreInternaly(node->left);
        PreInternaly(node->right);
    }
}