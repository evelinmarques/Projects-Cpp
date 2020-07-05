#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float valorDaCompra, valorPagar;
	int opcPagamento;
	
	cout << "Digite o total da compra: ";
	cin >> valorDaCompra;
	
	cout << "1 - À vista em dinheiro ou cheque, recebe 15% de desconto " << endl;
	cout << "2 - À vista no cartão de crédito, recebe 10% de desconto " << endl;
	cout << "3 - Em duas vezes, preço normal de etiqueta sem juros " << endl;
	cout << "4 - Em mais de duas vezes, preço normal de etiqueta mais juros de 10% " << endl;
	cin >> opcPagamento;	
	
	if (opcPagamento == 1){
		valorPagar = valorDaCompra - (valorDaCompra * 0.15);
	}else if (opcPagamento == 2){
		valorPagar = valorDaCompra - (valorDaCompra * 0.1);
	}else if (opcPagamento == 3){
		valorPagar = valorDaCompra;
	}else if (opcPagamento == 4){ 
		valorPagar = valorDaCompra * 1.1;
	}else{
	  cout << "Oção de pagamento inválida. ";
	  valorPagar = valorDaCompra;
	}		  	
	
	cout << "O valor a pagar pela compra é: " << valorPagar;
	
	return 0;
}
