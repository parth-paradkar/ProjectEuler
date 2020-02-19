#include <iostream>
#include <cmath>

using namespace std;

int numOfDigits(int num){
	int temp = num;
	int dig = 0;
	while(temp > 1){
		temp /= 10;
		dig += 1;
	}
	return dig;
}

bool isPalindrome(int n){
	int temp = n;
	int numDigits = numOfDigits(n);
	int digits[numDigits];
	for(int i = 0; i < numDigits; i++){
		int digit = temp % 10;
		digits[numDigits - 1 - i] = digit;
		temp = temp / 10;
	}
	bool result = true;
	for(int k = 0; k < 1 + numDigits / 2; k++){
		if(digits[k] != digits[numDigits - 1- k]){
			result = false;
			break;
		}
	}
	return result;
}

int main(){
	int maxPalindrome = 0;
	int a = 999;
	while(a > 100){
		// cout << a;
		// cout << " ";
		int b = 999;
		while(b > 1){
			int prod = a * b;
			if(isPalindrome(prod) & a*b > maxPalindrome){
				maxPalindrome = prod;
			}
			b -= 1;
		}
		a -= 1;
	}
	cout << maxPalindrome;
	return 0;
}
