#include <iostream>
#include <string>
#include <vector>

using namespace std;

int procurarDiamantes(vector<string> teste){
    int diamantes_encontrados=0, pos_inicio_diam=0, pos_final_diam=0;
    bool inicio_diamante=false, fim_diamante=false;
    //Checa a primeira string do vetor.
    for(int i = 0; i < teste.size(); i++){
        //Está com erro de sintaxe que não arrumei a tempo, mas queria comparar cada char da primeira string do vetor teste.
        for(char j: teste[i]){
            //Verifica se achou o início de algum diamante.
            if(teste[i]){
                inicio_diamante=true;
                pos_inicio_diam=i;
            }
             //Verifica se achou o final do diamante, após ter achado o início
            else if(inicio_diamante&&fim_diamante){
                //Irá apagar toda a seção do vetor, desde o início do vetor, até a posição do final do diamante.
                teste.erase(pos_inicio_diam, pos_final_diam);
                inicio_diamante=false;
                fim_diamante=false;
            }
            //Verifica se achou o final do diamante
            if(inicio_diamante&&teste[i]=='>'){
                fim_diamante=true;
                //Soma +1 com a posição final do diamante, pois a função erase(), não inclui o segundo parâmetro a ser removido.
                pos_final_diam=i+1;
            }
        }
    }
    return diamantes_encontrados;
}

int main(){
    int n;
    string mina;
    vector<string> testes;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>mina;
        testes.push_back(mina);
    }

    procurarDiamantes(testes);

/*
    for (int i = 0; i < testes.size(); i++)
        cout << testes[i] << "\n";
*/
    return 0;
}
