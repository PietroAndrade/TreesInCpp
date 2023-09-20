#include <iostream>

#include "binary_tree.h"

int main()
{
    std::cout << "menu de ze bostao" << std::endl;
    std::cout << "1 - inserir" << std::endl;
    std::cout << "2 - imprimir" << std::endl;
    std::cout << "3 - sair" << std::endl;
    int opcao = 0;
    int valor = 0;
    BinaryTree lilTree;
    Node* aux = nullptr;

    while(true)
    {
        std::cout << "inserir opcao" << std::endl;
        std::cin >> opcao; std::cin.ignore();

        switch (opcao)
        {
        case 1:
            std::cout <<"valor da arvore em int" << std::endl;
            std::cin >> valor;
            lilTree.InsertNode(aux, valor);
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