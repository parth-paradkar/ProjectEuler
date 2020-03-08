#include <iostream>
#include <cmath>

using namespace std;

int sumOfNat(int n){
	return n * (n + 1) / 2;
}

int sumOfSquares(int n){
	return n * (n + 1) * (2*n + 1) / 6;
}

int main(){
	int a;
	cout << "Enter n: ";
	cin >> a;
	int sumSqr = sumOfSquares(a);
	int sum = sumOfNat(a);
	cout << sum * sum - sumSqr;
	return 0;
}
