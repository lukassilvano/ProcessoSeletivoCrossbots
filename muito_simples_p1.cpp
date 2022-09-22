#include <iostream>
#include<math.h>

using namespace std;

float distancia(int ponto1[], int ponto2[]) {
	//Utilizei o cálculo do módulo do vetor, subtraindo x e y dos pontos iniciais informados, e então, elevando x e y novos gerados ao quadrado e tirando a raiz da soma.
	float d;
	d = sqrt(pow((ponto2[0] - ponto1[0]), 2) + pow((ponto2[1] - ponto1[1]),2));
	return d;
}

int main() {
    //Declarando 2 pontos para testar
	int p1[2] ={1,2}, p2[2]={5,6};
	cout << distancia(p1, p2);
	return 0;
}
