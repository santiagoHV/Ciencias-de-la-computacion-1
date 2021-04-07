#include <iostream>
#include <cstdlib>

using namespace std;

struct Nodo{
    int x,y;
    Nodo *sig;
};

int main() {
    for(int e = 5; e <= 100; e += 5){

        int n, i, j, usedMemory = 0;
        Nodo *cab = NULL, *aux;

        n = e;
        usedMemory += sizeof(n) + sizeof(i) + sizeof(j) + sizeof(cab) + sizeof(aux);

        for (i = 0; i < n; i++) {
            aux = new Nodo;
            aux->x = i;
            aux->y = n - i;
            aux->sig = cab;
            cab = aux;

            usedMemory += sizeof(aux->x) + sizeof(aux->y) + sizeof(aux->sig);
        }
        aux = cab;

        cout << usedMemory <<endl;

//    while (aux != NULL){
//        cout<< aux->x << aux->y << endl;
//        aux = aux->sig;
//    }
        int count = 0;
        for (aux = cab->sig; aux != NULL; aux = aux->sig) {
            delete cab;
            cab = aux;

            count++;

        }

  //      cout<<"final iteracion";
    }


    return 0;
}
