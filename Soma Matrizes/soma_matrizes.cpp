#include <iostream> 

using namespace std; 

 

int main(){ 

setlocale(LC_ALL, "Portuguese"); 

 

int matrizA[4][4]; 

int matrizB[4][4]; 

int diagonalmatriza = 0; 

int diagonalmatrizb = 0; 

int multiplicacao; 

 

cout << "Digite os valores da Matriz A""\n"; 

 

for (int lin = 0; lin < 4; lin ++){ 

for (int col = 0; col <4; col ++){ 

cout << "Digite o valor da linha " << lin + 1 << " e coluna " << col + 1 << ": "; 

cin >> matrizA[lin][col]; 

 

} 

} 

 

cout << "\n\n"; 

cout << "Digite os valores da Matriz B""\n"; 

 

for (int lin = 0; lin < 4; lin ++){ 

for (int col = 0; col <4; col ++){ 

cout << "Digite o valor da linha " << lin + 1 << " e coluna " << col + 1 << ": "; 

cin >> matrizB[lin][col]; 

 

} 

} 

cout << "\n\n"; 

cout << "Matriz A""\n"; 

for (int lin = 0; lin < 4; lin ++){ 

for (int col = 0; col <4; col ++){ 

cout << matrizA[lin][col] << " "; 

} 

cout << "\n";  

} 

cout << "\n\n"; 

cout << "Matriz B""\n"; 

for (int lin = 0; lin < 4; lin ++){ 

for (int col = 0; col <4; col ++){ 

cout << matrizB[lin][col] << " "; 

} 

cout << "\n";  

} 

for (int lin = 0; lin < 4; lin ++){ 

for (int col = 0; col < 4 ; col ++){ 

if(lin == col){ 

diagonalmatriza += matrizA [lin][col]; 

} 

if(lin == col){ 

diagonalmatrizb += matrizB [lin][col]; 

} 

} 

} 

multiplicacao = diagonalmatriza * diagonalmatrizb; 

 

cout << "\n\n"; 

cout << "A soma da diagonal principal da matriz A é: " << diagonalmatriza << " \n"; 

cout << "A soma da diagonal principal da matriz B é: " << diagonalmatrizb << " \n"; 

cout << "A multiplicação dos resultados da soma das matrizes é: " << multiplicacao << " \n"; 

 

return 0; 

} 