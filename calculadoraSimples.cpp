#include <iostream>
#include <string>

int MySum(int x, int y) {
    int escolha;
    std::cout << "Escolha a operacao:\n1 - SOMA\n2 - SUBTRACAO\n3 - MULTIPLICACAO\n4 - DIVISAO\n";
    std::cin >> escolha;
    if (escolha == 1) {
        return x + y;
    }
    else if (escolha == 2) {
        return x - y;
    }
    else if (escolha == 3) {
        return x * y;
    }
    else {
        return x / y;
    }
    
}

int main(int argc, char** argv) {
    int x;
    std::cout << "Digite o primeiro valor: \n";
    std::cin >> x;
    int y;
    std::cout << "Digite o segundo valor: \n";
    std::cin >> y;
    //operação
    int z = MySum(x, y);

    std::cout << "Total: " << z << "\n";
    
    
    system("pause");
    return 0;
}