#pragma once

# include "binary_tree.h"

#include <iostream>

class Node 
{
    public:
        int data;
        Node *left;
        Node *right;
};

class BinaryTree::Impl
{
public:
    //(1) Constructor
    Impl(){}
    //(2) Destructor
    virtual ~Impl() = default;
    //(3) Copy constructor policy
    Impl(const Impl&) = delete;
    
    // Copy assignment operator policy
    Impl& operator=(const Impl&) = delete;
    
    //The other 2
    // Move constructor policy
    Impl(Impl&&) = default;
    //Move assignment operator policy
    Impl& operator=(Impl&&) = default;

    virtual void Insert(int data) = 0;
    virtual bool Search(int key) const = 0;
    virtual void InorderPrint() const = 0;
    virtual void PostOrderPrint() const = 0;
    virtual void PreOrderPrint() const = 0;
    
};

class BinaryTreeImpl : public BinaryTree::Impl
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
        Node *root;

        void DestroyTreeInternaly(Node* &node) const;
        void InsertInternaly(Node* &node, int data);
        void InorderInternaly(Node* const &node) const;
        void PostInternaly(Node* const &node) const;
        void PreInternaly(Node* const &node) const;
        bool SearchInternaly(Node* const &node, int data) const;

};