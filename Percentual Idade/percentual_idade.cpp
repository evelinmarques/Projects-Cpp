#include <iostream>
using namespace std;

 

int main(){
    
    setlocale(LC_ALL, "Portuguese");               
        
    int idade[10];
    
    int j = 0;
    
    //Perc = Parcial * 100 / Total
    
    float contarMaiorIdade = 0, totalPessoas = 0;
    
    for (int i = 0; i < 10; i++){
        cout << "Digite a idade da " << i+1 << "ª pessoa: ";
        cin >> idade[i];                    
        
        totalPessoas ++;
    }        
    
    while (j < 10){
        
        if (idade[j] > 17){ 
            contarMaiorIdade++;            
        }        
        
        j++;
    }
    
    /*
    for (int i = 0; i < 10; i++){
    
        if (idade[i] > 17){ 
            contarMaiorIdade++;            
        }        
    }
    */
    
    cout << "O o percentual de pessoas maiores de idade é: " << contarMaiorIdade * 100 / totalPessoas << "%";
    
    return 0;
}