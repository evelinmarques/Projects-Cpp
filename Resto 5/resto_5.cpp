#include <iostream> 

#include <stdio.h> 

 

using namespace std; 

 

int main() 

{ 

    setlocale(LC_ALL, "Portuguese"); 

 

 

    int i = 1000; 

    int contador = 0; 

    while (contador < 5) 

    { 

        if (i % 11 == 5) 

        { 

            contador++; 

            if (contador == 5) 

            { 

                break; 

            } 

        } 

        i++; 

    } 

     

    cout << " O quinto número maior que 1000, cuja divisão por 11 tem o resto 5 é: " << i; 

    return 0; 

}