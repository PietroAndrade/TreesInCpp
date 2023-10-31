#include "interface_node.h"

class BinaryNode final : public INode
{
    public:
        explicit BinaryNode(int data)
        {
            makeNode(data);
        }
        BinaryNode *left;
        BinaryNode *right;
        int data;

    private:
        void makeNode(int& data) override
        {
            this->data = data;
            this->left = nullptr;
            this->right = nullptr;
        }
};