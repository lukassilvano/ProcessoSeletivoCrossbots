#include <iostream>
using namespace std;

bool ehPerfeito(int n){
    int soma=0;
    for(int i=1;i<n;i++){
        //Checando se o resto de n por i for 0, ent�o possui um divis�vel e o mesmo � somado na vari�vel soma
        if(n%i==0){
            soma+=i;
        }
    }
    if(soma==n){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int num;
    //Flag criada para impedir que valores negativos sejam digitados.
    bool flag = false;
    while(flag != true){
        cout<<"Digite um valor: \n";
        cin>>num;
        if(num <0){
            cout<<"Foi digitado um valor inv�lido. Digite novamente. \n";
        }
        else{
            flag=true;
        }
    }
    cout<<ehPerfeito(num);
    return 0;
}
