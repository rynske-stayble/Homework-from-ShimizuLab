#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, K, X;
	vector<int> vec(N);
 
	cin >> N >> K >> X ;
	for (int i=0; i < N; i++) {
		cin >> vec.at(i);
	}
	
	if(X==vec.at(N/K)) {
		cout<<"Yes";
	}else{
		cout<<"No";
	}
}