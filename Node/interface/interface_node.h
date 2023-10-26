
class INode
{
public:
    INode(){}
    //(2) Destructor
    virtual ~INode() = default;
    //(3) Copy constructor policy
    INode(const INode&) = delete;
    
    // Copy assignment operator policy
    INode& operator=(const INode&) = delete;
    
    //The other 2
    // Move constructor policy
    INode(INode&&) = default;
    //Move assignment operator policy
    INode& operator=(INode&&) = default;

};