#include <iostream>
#include <list>

using namespace std;

int encontra_Primo(list<int> num){
    for(list<int>::iterator i=num.begin();i != num.end();i++){
        //Checa se o valor do endereço do iterator é 1. Se for, irá remover, pois 1 não é primo.
        if(*i == 1){
            i=num.erase(i);
            if(i!=num.begin()) //Se o número 1 não estiver no início da lista, retorne o iterator uma posição anterior, para ler o próximo número corretamente.
                i--;
        }
        for(int j=2; j<*i; j++){
            //Checa a partir do divisor 2, pois 1 é divisor de todos os números.
            //Se possuir resto 0 a partir de qualquer número, excluindo ele mesmo, já significa que o número não é primo, então, será removido da lista.
            if(*i%j==0){
                i=num.erase(i);
                //Mesma lógica utilizado anteriormente: se o número removido não for o primeiro, retorna o iterator uma posição anterior para não pular a verificação de nenhum número da lista.
                if(i!=num.begin())
                    i--;
            }
        }
    }
    //Novo for somente para imprimir os valores da lista. Podia ter retornado a lista numa variável fora da função, mas achei melhor deixar a saída dos dados na tela dentro da função mesmo.
     for(list<int>::iterator i=num.begin();i != num.end();i++){
        cout << *i << " ";
     }
}

int main(){
    list<int> lista={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
    encontra_Primo(lista);
    return 0;
}
