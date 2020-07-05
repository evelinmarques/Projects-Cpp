#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero; 
	
	cout << "Digite o número qualquer: ";
	cin >> numero;
	
	if (numero % 2 == 0){
		cout << "O número " << numero << " é par.";
	}else{
		cout << "O número " << numero << " é ímpar.";
	}	
	return 0;
}