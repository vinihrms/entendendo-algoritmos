#include <iostream>
#include <vector>
using namespace std;

int pesquisa_binaria(vector<int> lista, int item){
    int baixo = 0;
    int alto = lista.size() - 1;
    

    while (baixo <= alto){
        int meio = (baixo + alto) / 2;
        int chute = lista[meio];

        if (chute == item){
            return meio;
        }
        if (chute < item) {
            baixo = meio + 1;
        } else if (chute > item){
            alto = meio - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> lista = {1, 3, 5, 7, 9, 10, 14};

    cout << pesquisa_binaria(lista, 4) << "\n";
    cout << pesquisa_binaria(lista, 1) << "\n";
    cout << pesquisa_binaria(lista, 14) << "\n";


}