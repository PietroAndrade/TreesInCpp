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
