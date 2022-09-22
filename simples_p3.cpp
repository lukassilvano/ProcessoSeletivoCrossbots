#include <iostream>
#include <list>

using namespace std;

int encontra_Primo(list<int> num){
    for(list<int>::iterator i=num.begin();i != num.end();i++){
        //Checa se o valor do endere�o do iterator � 1. Se for, ir� remover, pois 1 n�o � primo.
        if(*i == 1){
            i=num.erase(i);
            if(i!=num.begin()) //Se o n�mero 1 n�o estiver no in�cio da lista, retorne o iterator uma posi��o anterior, para ler o pr�ximo n�mero corretamente.
                i--;
        }
        for(int j=2; j<*i; j++){
            //Checa a partir do divisor 2, pois 1 � divisor de todos os n�meros.
            //Se possuir resto 0 a partir de qualquer n�mero, excluindo ele mesmo, j� significa que o n�mero n�o � primo, ent�o, ser� removido da lista.
            if(*i%j==0){
                i=num.erase(i);
                //Mesma l�gica utilizado anteriormente: se o n�mero removido n�o for o primeiro, retorna o iterator uma posi��o anterior para n�o pular a verifica��o de nenhum n�mero da lista.
                if(i!=num.begin())
                    i--;
            }
        }
    }
    //Novo for somente para imprimir os valores da lista. Podia ter retornado a lista numa vari�vel fora da fun��o, mas achei melhor deixar a sa�da dos dados na tela dentro da fun��o mesmo.
     for(list<int>::iterator i=num.begin();i != num.end();i++){
        cout << *i << " ";
     }
}

int main(){
    list<int> lista={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29};
    encontra_Primo(lista);
    return 0;
}
