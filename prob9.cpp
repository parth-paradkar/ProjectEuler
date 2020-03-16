#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float c;
	for(int a=1; a <= 1000; a++){
		for(int b=1; b <= a; b++){
			c = sqrt(a*a + b*b);
			if(a + b + c == 1000){
				cout << a;
				cout << "\n";
				cout << b;
				cout << "\n";
				cout << c;
				cout << "\n";
				int prod = a * b * c;
				cout << prod;
				break;
			}
		}
	}
	return 0;
}

