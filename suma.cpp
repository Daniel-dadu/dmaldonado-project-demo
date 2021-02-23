#include <iostream>
using namespace std;

int main(){
	int n, tmp, res = 0;
	cout << "Cuantos números vas a sumar: ";
	cin >> n;
	for(int i = 0; i < n; i++){
		cout << "Dame el número " << i+1 << ": ";
	       	cin >> tmp;
		res += tmp;
	}
	cout << "El resultado de la suma es " << res << endl;
}
