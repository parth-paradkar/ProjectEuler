#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n){
	if(n != 0 && n != 1){
		for(int i=2; i <= sqrt(n); i++){
			if(n % i == 0){
				return false;
			}
		}
		return true;
	}
	else {
		return false;
	}
}

int main(){
	int index;
	cout << "Enter index: ";
	cin >> index;
	int currentPrime;
	int primeCount = 0;
	int i = 0;
	while(primeCount < index){
		if(isPrime(i)){
			primeCount++;
			currentPrime = i;
		}
		if(i > 2){
			i += 2;
		}
		else {
			i++;
		}
	}
	cout << currentPrime;
	return 0;
}
