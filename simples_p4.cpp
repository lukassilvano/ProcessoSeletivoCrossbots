#include <iostream>
#include <string>

using namespace std;

int encontra_letra(char letra, string frase){
    int contador=0;
    //Para cada char da string, ele ir� rodar o c�digo interno do for.
    for (char i : frase){
        if(i==letra)
            contador++;
    }
    return contador;
}

int main(){
    string frase_analisar = "testando uma frase aleat�ria";
    char letra_analisar = 'a';
    cout<<encontra_letra(letra_analisar, frase_analisar);
    return 0;
}
