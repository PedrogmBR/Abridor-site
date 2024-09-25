#include <iostream>
#include <cstdlib> // Para a função system()

int main() {
    // Substitua o link abaixo pelo website que você deseja abrir
    std::string url = "https://www.exemplo.com";
    
    // Comando para abrir o link no navegador padrão (Windows)
    std::string command = "start " + url;

    // Executa o comando
    system(command.c_str());

    return 0;
}

