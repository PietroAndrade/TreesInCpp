#include "binary_tree.h"

#include <iostream>
#include <memory>

int main()
{
    std::cout << "menu de ze bostao" << std::endl;
    std::cout << "1 - inserir" << std::endl;
    std::cout << "2 - imprimir" << std::endl;
    std::cout << "3 - sair" << std::endl;
    int opcao = 0;
    int valor = 0;
    std::unique_ptr<BinaryTree> lilTree = std::make_unique<BinaryTree>();

    while(true)
    {
        std::cout << "inserir opcao" << std::endl;
        std::cin >> opcao; std::cin.ignore();

        switch (opcao)
        {
        case 1:
            std::cout <<"valor da arvore em int" << std::endl;
            std::cin >> valor;
            lilTree->Insert(valor);
            break;
        case 2:
            // lilTree.Inorder(lilTree.root);
            break;
        case 3:
            std::cout << "deu certo " <<std::endl;
            return 0;
        default:
            std::cout << "digite um numero valido";
            break;
        }

    }
}