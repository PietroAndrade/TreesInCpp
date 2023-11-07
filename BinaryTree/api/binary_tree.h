#pragma once


#include <string>
#include <iostream>
#include <memory>

class BinaryTree
{
    public:
        BinaryTree();
        ~BinaryTree();
        
        BinaryTree(BinaryTree const&) = delete;
        BinaryTree operator=(const BinaryTree&) = delete;
        BinaryTree(BinaryTree&&) = default;
        BinaryTree& operator=(BinaryTree&&) = default;

        class Impl;

        void Insert(int data);
        bool Search(int key);
        void InorderPrint();
        void PostOrderPrint();        
        void PreOrderPrint();

    private:
        std::unique_ptr<Impl> m_impl;
};
