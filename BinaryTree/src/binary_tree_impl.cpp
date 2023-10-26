#include "binary_tree_impl.h"

void BinaryTreeImpl::Insert(int data)
{
    InsertInternaly(root, data);
}

bool BinaryTreeImpl::Search(int key) const
{
    std::cout << "Let's search" << std::endl;
    return SearchInternaly(root, key);
}

void BinaryTreeImpl::InorderPrint() const
{
    std::cout << "Printing Inorder" << std::endl;
    InorderInternaly(root);
}

void BinaryTreeImpl::PostOrderPrint() const
{
    std::cout << "Printing PostOrder" << std::endl;
    PostInternaly(root);
}

void BinaryTreeImpl::PreOrderPrint() const
{
    std::cout << "Printing PreOrder" << std::endl;
    PreInternaly(root);
}

void BinaryTreeImpl::DestroyTreeInternaly(BinaryNode* &node) const
{
    if(node != nullptr)
    {
        DestroyTreeInternaly(node->left);
        DestroyTreeInternaly(node->right);
        delete node;
        std::cout << "node deleted" << std::endl;
    }
}

void BinaryTreeImpl::InsertInternaly(BinaryNode* &node, int data)
{
    if(node == nullptr)
    {    
        std::cout << "Inserting new node:"<< data << std::endl;
        node = new BinaryNode();
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

bool BinaryTreeImpl::SearchInternaly(BinaryNode* const &node, int data) const
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

void BinaryTreeImpl::InorderInternaly(BinaryNode* const &node) const
{
    if (node != nullptr) 
    {
        InorderInternaly(node->left);
        std::cout << node->data << " -> ";
        InorderInternaly(node->right);
    }
}

void BinaryTreeImpl::PostInternaly(BinaryNode* const &node) const
{
    if (node != nullptr) 
    {
        PostInternaly(node->left);
        PostInternaly(node->right);
        std::cout << node->data << " -> ";
    }
}

void BinaryTreeImpl::PreInternaly(BinaryNode* const &node) const
{
    if (node != nullptr) 
    {
        std::cout << node->data << " -> ";
        PreInternaly(node->left);
        PreInternaly(node->right);
    }
}