#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

std::string iniciales(std::string texto)
{
    std::istringstream iss{texto};
    std::string resultado {};
    std::string palabra;
    while (iss >> palabra) {
        resultado += palabra[0];
    }
    return resultado;
}

std::string ordenado_por_palabras(std::string texto)
{
    std::istringstream iss{texto};
    std::vector<std::string> palabras {};
    std::string palabra;
    while (iss >> palabra) {
        palabras.push_back(palabra);
    }
    std::sort(palabras.begin(), palabras.end());
    std::string resultado {};
    for (const auto& p : palabras) {
        resultado += p + " ";
    }
    resultado.pop_back();
    return resultado;
}

int cuenta_palabras(std::string texto)
{
    std::istringstream iss{texto};
    std::string palabra;
    int resultado {0};
    while (iss >> palabra) {
        resultado++;
    }
    return resultado;
}

int main()
{
    std::string texto;
    std::getline(std::cin, texto);
    std::cout << iniciales(texto) << "\n";
    std::cout << ordenado_por_palabras(texto) << "\n";
    std::cout << cuenta_palabras(texto) << "\n";
}
