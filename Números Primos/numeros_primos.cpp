#include <iostream>
using namespace std;

int main( ){
	setlocale(LC_ALL,"Portuguese");
	
	int x,y;

	cout <<"Digite o número: ";
	cin>>x;
	
	int i=2;
	y=0;

	while (i < x) {
		
		if (x % i == 0){
			y++;
		}
		i++;
	}

	if (y>0) {
		cout <<"O numero digitado nao e primo" << endl;
	}else{
		cout<<"O numero e primo";
	}
	
	return 0;
}
