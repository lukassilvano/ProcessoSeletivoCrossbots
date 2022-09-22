#include <iostream>
#include <math.h>

using namespace std;

float converte_temperatura(float f) {
	float celsius = 0, temp;
	temp = (f - 32) * (5 / 9.0f);
	return temp;
}

int main() {
    //Fixando o limite de 2 casas decimais
    cout << fixed;
    cout.precision(2);
	cout << converte_temperatura(77.2);
	return 0;
}
