#include <iostream>
#define Tam 8



using namespace std;
int i,cont, num, par, impar;
int main () {
	setlocale (LC_ALL,"Portuguese");
	
	par = 0;
	impar = 0;
	int impares[impar];
	int pares[par];
	int num[6];
	
	
	for(cont=0;cont<5;cont++){
		cout << "Digite um numero: ";
		cin >> num[cont];
	}
	for(cont=0;cont<5;cont++){
		if(num[cont] % 2 == 0){
			pares[par] = num[cont];
            par++;
		}
		else{
			impares[impar] = num[cont];
            impar++;
		}
	}
	
	cout << "A quantidade de pares é: " <<par<<endl;
	for(i = 0; i<par; i++){
	 	cout<<pares[i]<<endl;
	}
	
	cout << "A quantidade de impares é: " <<impar<<endl;
	for(i = 0; i<impar; i++){
		cout<<impares[i]<<endl;
	}
	
	
	
	return 0;
}

