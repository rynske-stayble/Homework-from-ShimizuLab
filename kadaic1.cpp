#include <stdio.h>
#include <math.h>
#include <iostream>
#include <vector>
using namespace std;

int I(int y){
	if(ceil(y)==floor(y)){
		return 0;
	} else {
		return 1;
	}
}

int main() {
	int N, K, X;
	cin >> N >> K >> X;
	if(I(N) || I(K) || I(X) || N<1 || N>100000 || X<0 || X>1000000000 || K<2) {
	cout<<"error\n";
	return 0;
	}
	std::vector<int> vec(N);
	for (int i=0; i < N; i++) {
		cin >> vec.at(i);
		if(I(vec.at(i)) || vec.at(i)<0) {
			cout<<"error\n";
		}
	}
	
	
	if(X==vec.at(N/K)) {
		cout<<"Yes\n";
	}else{
		cout<<"No\n";
	}
	return 0;
}
