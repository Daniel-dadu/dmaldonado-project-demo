#include <iostream>
using namespace std;

// Suma números
int main(){
	int n, tmp, res = 0;
	cout << "Cuantos números vas a sumar: ";
	cin >> n;
	cout << "RECUERDA, SOLO NÚMEROS PEQUEÑOS xd" << endl;
	for(int i = 0; i < n; i++){
		cout << "Dame el número " << i+1 << ": ";
	       	cin >> tmp;
		res += tmp;
	}
	cout << "El resultado de la suma es " << res << endl;
}
