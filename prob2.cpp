#include <iostream>

using namespace std;

int fibonacci(int n){
	if(n == 0 | n == 1){
		return 1;
	}
	return (fibonacci(n-1) + fibonacci(n-2));
}

int main(){
	long int sum = 0;
	for(int i=0; ;i++){
		int fib = fibonacci(i);
		if(fib > 4000000){
			break;
		}
		if(fib % 2 == 0){
			sum += fib;			
		}
	}
	cout << sum;
	return 0;
}
