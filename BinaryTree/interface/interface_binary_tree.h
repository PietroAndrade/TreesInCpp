#include "binary_tree.h"

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