#include <iostream>
#include <list>

using namespace std;

list<int> remova_repetidos(list<int> lista){
    for(list<int>::iterator i=lista.begin();i != lista.end();i++){
        lista.sort();
        lista.unique();
    }
    for(list<int>::iterator i=lista.begin();i != lista.end();i++){
        cout << *i << " ";
    }
    return lista;
}

int main(){
    list<int> lista = {1, 2, 5, 9, 2};
    remova_repetidos(lista);
    return 0;
}
