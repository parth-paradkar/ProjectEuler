#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n){
	for(int i=2; i < sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int leastCommonMultiple(int a, int b){
	int gtemp, ltemp;
	if(a > b){
		gtemp = a;
		ltemp = b;
	}
	else{
		gtemp = b;
		ltemp = a;
	}
	int mult;
	for(int i=1; ;i++){
		mult = gtemp * i;
		if(mult % ltemp == 0){
			return mult;
		}	
	}
}

int main(){
	int a, b;
	cout << "Enter start number: ";
	cin >> a;
	cout << "Enter end number: ";
	cin >> b;
	int prod = 1;
	for(int i=1; i <= b; i++){
		prod = leastCommonMultiple(prod, i);
	}
	cout << prod;
	return 0;
}
