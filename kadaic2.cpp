#include <stdio.h>
#include <math.h>
#include <iostream>
#include <vector>
using namespace std;

int sannotsuku(int x){
	std::vector<int> vec(4);
	vec.at(3) = x/1000;
	vec.at(2) = (x%1000)/100;
	vec.at(1) = (x%100)/10;
	vec.at(0) = x%10;
	if(vec.at(3)==3 || vec.at(2)==3 || vec.at(1)==3 || vec.at(0)==3) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	int A, B;
	cout<<"Enter A & B.\n";
	cin >> A >> B;
	if(A<1 || A>5000 || B<A || B>5000 || ceil(A)!=floor(A) || ceil(B)!=floor(B)){
		cout<<"error\n";
		return 0;
	}
	for(int i=A; i<=B; i++){
		if(sannotsuku(i) || i%3==0){
			cout<<"Omorrow!\n";
		} else {
			printf("%d\n", i);
		}
	}
	return 0;
}

