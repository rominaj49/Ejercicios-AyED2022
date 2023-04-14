#include<iostream>
using namespace std;

int main() {
	int contador, n, num, b;
	
	cout << "Ingresa un numero" << endl;
	cin >> n;
	num = 0;

	//cout << "1 "<< endl; arreglar
	while (n>0) { // 
		num = num+1;
		b = 1;
		contador = 0;

		while (b<=num) {
			if (num%b==0) {
				contador = contador+1; 
			}
			
			b = b+1;
		}

		if (contador==2) {
			cout << num << endl;
			n=n-1;
		}
	}
	return 0;
}

