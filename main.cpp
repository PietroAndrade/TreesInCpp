#include "binary_tree.h"

#include <array>
#include <memory>

int main()
{
    std::unique_ptr<BinaryTree> lilTree = std::make_unique<BinaryTree>();
    std::array<int, 10> tree = {10, 25, 2, 6, 21, 11, 3, 1, 5, 15};
    for (const int leaf : tree)
    {
        lilTree->Insert(leaf);
    }

    auto Test = [&](int number){
        printf("Is there a %d in the tree?", number);

        bool result = lilTree->Search(number);

        if(result){
            std::cout << "Yes" << std::endl;
        }
        else
        {
            std::cout << "No" << std::endl;
        }
    };

    Test(15);
    Test(30);
   
    lilTree->InorderPrint();
    lilTree->PostOrderPrint();
    lilTree->PreOrderPrint();

    std::cout << "destroy" << std::endl;
}

