
class INode
{
public:
    INode(){}

    virtual ~INode() = default;

private:
    virtual void makeNode(int& data) = 0;

};