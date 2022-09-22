#include <iostream>
#include <locale>
#define MAX 10

using namespace std;


int main(){
    //Somente para não dar erro nos acentos
    setlocale(LC_ALL, "portuguese");
    int lista[MAX] = {13, 5, 7, 6, 4, 8, 16, 31, 9, 21}, x, y, soma;
    //Flag criada somente para evitar que seja digitado um valor x e y maior que o limite da constante MAX e também impedindo que seja digitado valor negativo.
    bool flag = false;
    while(flag != true){
        cout<<"Digite x: ";
        cin>>x;
        if(x >=MAX || x<0){
            cout<<"\nValor inválido. Digite um valor válido.\n";
        } else
        flag=true;
    }
    flag=false;
     while(flag != true){
        cout<<"\nDigite y: ";
        cin>>y;
        if(y >=MAX || y<0){
            cout<<"\nValor inválido. Digite um valor válido.\n";
        } else
        flag=true;
     }
    soma=lista[x]+lista[y];
    cout<<"\n" << soma;

    return 0;
}
