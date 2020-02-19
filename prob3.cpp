#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long long int n){
	for(long long int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	long long int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << isPrime(n);
	long int largestPrime = n;
	for(long long int i = 2; i < sqrt(n); i++){
		if(isPrime(i) & n % i == 0){
			largestPrime = i;	
		}
	}
	cout << largestPrime;
	return 0;
}
