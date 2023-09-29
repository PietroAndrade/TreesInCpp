#include "binary_tree.h"

#include <array>
#include <memory>

int main()
{
    std::unique_ptr<BinaryTree> lilTree = std::make_unique<BinaryTree>();
    std::array<int, 10> tree = {10, 25, 2, 6, 21, 11, 3, 1, 5, 15};
    std::cout << "size "<< tree.size()<< std::endl;
    for (const int leaf : tree)
    {
        lilTree->Insert(leaf);
    }
    std::cout << "There is a 15 in the tree?";
    bool Test = lilTree->Search(15);

    if(Test) 
    {
        std::cout << "Answer: Yes" << std::endl;
    }else{
        std::cout << "Answer: No" << std::endl;
    }

    Test = lilTree->Search(30);
    std::cout << "There is a 30 in the tree?";

    if(Test) 
    {
        std::cout << "Yes" << std::endl;
    }else{
        std::cout << "No" << std::endl;
    }
    
    std::cout << "destroy" << std::endl;
}

