#include "binary_tree.h"

#include <array>
#include <memory>

int main()
{
    std::unique_ptr<BinaryTree> lilTree = std::make_unique<BinaryTree>();
    std::array<int, 10> tree = {10, 25, 2, 6, 21, 11, 3, 1, 5, 15};
    std::cerr << "tamanho "<< tree.size()<< std::endl;
    for (const int leaf : tree)
    {
        std::cerr << "interation->" << leaf << std::endl;
        lilTree->Insert(leaf);
    }
    std::cerr << "destroy" << std::endl;
    lilTree->DestroyTree();

}