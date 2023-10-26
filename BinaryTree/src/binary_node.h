#include "interface_node.h"

class BinaryNode final : public INode
{
    public:
        int data;
        BinaryNode *left;
        BinaryNode *right;
};