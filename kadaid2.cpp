#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>
#include <cstdlib>
using namespace std;

int max(int x, int y, int z) {
	if(x>=y && x>=z) {
		return x;
	} else if (y>x && y>z) {
		return y;
	} else {
		return z;
	}
}

int s(char a, char b) {
	if (a==b) {
		return 5;
	} else {
		return -2;
	}
}

int ABS(int c) {
	if(c>=0){
		return c;
	} else {
		return -c;
	}
}


int main() {
	string s1, s2;
	int e=6;
	int i, j;
	
	cin>>s1>>s2;
	/*int d=e*ABS(s1.size()-s2.size());*/
	/*cout<<d<<endl;*/
	int mat[s1.size()+1][s2.size()+1];
	mat[0][0]=0;

	for(i=1; i<s1.size()+1; i++){
		mat[i][0]=mat[i-1][0]-e;
	}
	for(j=1; j<s2.size()+1; j++){
		mat[0][j]=mat[0][j-1]-e;
	}
	for(j=1; j<s2.size()+1; j++){
		for(i=1; i<s1.size()+1; i++){
			mat[i][j]=max(mat[i-1][j-1]+s(s1[i-1],s2[j-1]), mat[i-1][j]-e, mat[i][j-1]-e);
			cout<<mat[i][j]<<endl;
			}
	}
	cout<<mat[s1.size()][s2.size()]<<endl;
	return 0;
}
