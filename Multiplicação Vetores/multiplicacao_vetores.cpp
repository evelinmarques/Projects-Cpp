#include <iostream> 

 

using namespace std; 

 

 

int main() 

{ 

setlocale(LC_ALL, "Portuguese");   

 

int i; 

    int primeirovetor[10];  

int segundovetor[10];  

int terceirovetor[10];  

     

    cout << "Digite os 10 números do primeiro vetor:\n"; 

    for (i = 1; i <= 10; i++) 

    { 

        cout << "Entre com o " << i << "º numero:"; 

        cin >> primeirovetor[i]; 

    } 

         

    cout << "\n\n"; 

    cout << "Digite os 10 números do segundo vetor:\n"; 

    for (i = 1; i <= 10; i++) 

    { 

        cout << "Entre com o " <<i<< "º numero:"; 

        cin >> segundovetor[i]; 

    } 

    for (i = 1; i <= 10; i++) 

    { 

    terceirovetor[i] = primeirovetor[i] * segundovetor[i]; 

    } 

    cout << "\n\n"; 

    cout << "O resultado do terceiro vetor é: \n"; 

    for (i = 1; i <= 10; i++) 

    { 

        cout << terceirovetor[i] << "\n"; 

    } 

     

     

    return 0; 

} 