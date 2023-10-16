#pragma once

#include <string>
#include <iostream>
#include <memory>

class BinaryTree
{
    public:
        BinaryTree();
        ~BinaryTree();

        void Insert(int data);
        bool Search(int key);
        void InorderPrint();
        void PostOrderPrint();        
        void PreOrderPrint();

    private:
        class BinaryTreeImpl;
        std::unique_ptr<BinaryTreeImpl> m_impl;
};

// // BinaryTree::BinaryTree()
// // {
// // }

// // BinaryTree::~BinaryTree()
// // {
// // }

// void BinaryTree::Insert(int data)
// {
//     m_impl->Insert(data);
// }

// bool BinaryTree::Search(int key)
// {
//     return m_impl->Search(key);
// }

// void BinaryTree::InorderPrint()
// {
//     m_impl->InorderPrint();
// }
// void BinaryTree::PostOrderPrint()
// {
//     m_impl->PostOrderPrint();
// }        
// void BinaryTree::PreOrderPrint()
// {
//     m_impl->PreOrderPrint();
// }