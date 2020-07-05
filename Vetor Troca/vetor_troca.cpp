#include <iostream> 

 

using namespace std; 

 

int main() 

{ 

    setlocale(LC_ALL, "Portuguese"); 

 

    int vetores[20]; 

    int vt; 

    int i; 

 

    for (i = 0; i < 20; i++) 

    { 

        cout << "Digite a " << i << "º posição do elemento : ";  

        cin >> vetores[i]; 

    } 

     

 

    for (i = 0; i < 20; i++) 

    { 

        for (i = 0; i < 20; i++) 

            cout << "\t" << vetores[i] << "\n"; 

    } 

 

    for (i = 0; i < 10; i++) 

    { 

        vt = vetores[i]; 

        vetores[i] = vetores[20 - i - 1]; 

        vetores[20 - i - 1] = vt; 

    } 

     

    cout << "\n\n"; 

    cout << "Foi gerado um terceiro vetor"; 

    cout << "\n\n"; 

     

for (i = 0; i < 20; i++) /* reverter vetor*/ 

    { 

        cout << vetores[i] << "\n"; 

    } 

 

 

    return 0; 

} 