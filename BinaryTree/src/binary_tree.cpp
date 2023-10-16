#include "binary_tree_impl.h"

BinaryTree::BinaryTree()
{
}

BinaryTree::~BinaryTree()
{
}

void BinaryTree::Insert(int data)
{
    m_impl->Insert(data);
}

bool BinaryTree::Search(int key)
{
    return m_impl->Search(key);
}

void BinaryTree::InorderPrint()
{
    m_impl->InorderPrint();
}
void BinaryTree::PostOrderPrint()
{
    m_impl->PostOrderPrint();
}        
void BinaryTree::PreOrderPrint()
{
    m_impl->PreOrderPrint();
}