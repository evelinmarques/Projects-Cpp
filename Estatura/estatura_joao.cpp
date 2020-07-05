#include <iostream>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float carlosEstatura, joaoEstatura;
	int quantAnosUltrapassar = 0;
	
	carlosEstatura = 1.5;
	joaoEstatura = 1.1;
	
	while (joaoEstatura < carlosEstatura){
		quantAnosUltrapassar += 1;
		     						
	    carlosEstatura += 0.02;	
		joaoEstatura += 0.03;
	}
	
	cout << "João será maior do que Carlos em: " << quantAnosUltrapassar << " anos.";					
}