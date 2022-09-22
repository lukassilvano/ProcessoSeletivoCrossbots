#include <iostream>
#include <math.h>

using namespace std;

//Esse foi complicado, mas ap�s longos debugs, resolvi o problema.
double angulo_entre_pontos(int a[], int b[], int c[]){
    double angulo, vetor1[2], vetor2[2], modulo_vetor1, modulo_vetor2, produto_interno, cos_angulo;
    //Calculei os novos vetores, tomando como partida o ponto B, pois � o ponto em comum entre o ponto A e C, formando o �ngulo que desejamos procurar.
    vetor1[0] = a[0] - b[0];
    vetor1[1] = a[1] - b[1];
    vetor2[0] = c[0] - b[0];
    vetor2[1] = c[1] - b[1];
    //Aplicando regras de GA, resolvi separar os c�lculos dos m�dulos dos vetores, e do produto interno a partir das coordenadas, para facilitar a busca dos erros.
    //Nas 2 linhas abaixo, apenas calculando o m�dulo de cada vetor novo gerado,
    modulo_vetor1 = sqrt(pow(vetor1[0], 2) + pow(vetor1[1], 2));
    modulo_vetor2 = sqrt(pow(vetor2[0], 2) + pow(vetor2[1], 2));
    //Produto Interno utilizando as coordenadas de cada vetor.
    produto_interno = (vetor1[0] * vetor2[0]) + (vetor1[1] * vetor2[1]);
    //Para achar o �ngulo entre 2 vetores, podemos utilizar a divis�o entre o produto interno dos 2 vetores pela multiplica��o dos m�dulos de cada vetor, resultando no valor do cosseno do �ngulo desejado.
    cos_angulo = produto_interno / (modulo_vetor1 * modulo_vetor2);
    //Ap�s achar o cosseno, utilizei a fun��o acos, que � o arcocosseno, que acha o �ngulo a partir do valor do cosseno achado anteriormente. Como a fun��o retorna o �ngulo em radianos, converti o �ngulo achado para graus.
    angulo = acos(cos_angulo) * 180.0 / M_PI;
    //Sucesso, �ngulo achado e retornado para imprimir na tela.
    return angulo;
}

int main(){
    int p1[2] ={5,2}, p2[2]={1,2}, p3[2]={5,7};
    cout<<angulo_entre_pontos(p1, p2, p3) <<" angulo";
    return 0;
}
