#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float custoCarroFabrica, percentDistribuidor, impostos, valorFinalCinsumidor;
	
	cout << "Informe o valor do carro (custo de fábrica): ";
	cin >> custoCarroFabrica;
	
	percentDistribuidor = custoCarroFabrica * 0.28;
	impostos = custoCarroFabrica * 0.45;
	
	valorFinalCinsumidor = custoCarroFabrica + percentDistribuidor + impostos;
	
	cout << fixed << setprecision(2);
	cout << "Valor do veículo ao consumidor: " << valorFinalCinsumidor;
	
	return 0;	
	
}