#include <iostream> 

 

using namespace std; 

 

int main(){ 

 

setlocale(LC_ALL, "Portuguese"); 

 

int salario, conta1, conta2, conta3, conta4, multa1, multa2, multa3, multa4; 

float resto_salario; 

 

cout << "Digite seu salário: "; 

cin >> salario; 

cout << "Digite o valor da conta atrasada :\n"; 

cin >> conta1; 

cout << "Digite o valor da segunda conta atrasada:\n"; 

cin >> conta2; 

cout << "Digite o valor da terceira conta atrasada:\n"; 

cin >> conta3; 

cout << "Digite o valor da quarta conta atrasada:\n"; 

cin >> conta4; 

 

 

multa1= conta1 * 2 / 100; 

conta1 += multa1; 

multa2 = conta2 * 2 / 100; 

conta2 += multa2; 

multa3 = conta3 * 2 / 100; 

conta3 += multa3; 

multa4 = conta4 * 2 / 100; 

conta4 += multa4; 

 

 

 

 

resto_salario = salario - conta1 - conta2 - conta3 - conta4; 

 

cout << "O que restou do salário foi R$: " << resto_salario << endl; 

 

return 0; 

} 