#pragma once

#include "interface_binary_tree.h"
#include "binary_node.h"

#include <iostream>

class BinaryTreeImpl final: public BinaryTree::Impl
{
    public:
        BinaryTreeImpl()
        {
            root = nullptr;
        }
        BinaryTreeImpl(BinaryTreeImpl const&) = delete;
        BinaryTreeImpl operator=(const BinaryTreeImpl&) = delete;
        BinaryTreeImpl(BinaryTreeImpl&&) = default;
        BinaryTreeImpl& operator=(BinaryTreeImpl&&) = default;

        ~BinaryTreeImpl() override
        {
            DestroyTreeInternaly(root);
        }

        void Insert(int data) override;
        bool Search(int key) const override;
        void InorderPrint() const override;
        void PostOrderPrint() const override;        
        void PreOrderPrint() const override;

    private:
        BinaryNode *root;

        void DestroyTreeInternaly(BinaryNode* &node) const;
        void InsertInternaly(BinaryNode* &node, int data);
        void InorderInternaly(BinaryNode* const &node) const;
        void PostInternaly(BinaryNode* const &node) const;
        void PreInternaly(BinaryNode* const &node) const;
        bool SearchInternaly(BinaryNode* const &node, int data) const;

};