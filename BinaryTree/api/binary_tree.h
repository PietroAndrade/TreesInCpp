#include <string>
#include <iostream>

class Node 
{
    public:
        int data;
        Node *left;
        Node *right;
};

class BinaryTree
{
    public:
        BinaryTree();
        ~BinaryTree();

        void Insert(int data);
        // bool Search(int key);
        // void InorderPrint();
        // void PostOrderPrint();        
        // void PreOrderPrint();

    private:
        Node *root = nullptr;

        void DestroyTreeInternaly(Node** node);
        void InsertInternaly(Node* &node, int data);
        // void InorderInternaly(Node* node);
        // void PostInternaly(Node *node);
        // void PreInternaly(Node *node);
        // bool SearchInternaly(Node* node, int data);

};