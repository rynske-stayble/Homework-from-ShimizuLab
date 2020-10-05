#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int i=0;
	string S, T;
	cin>>S>>T;
	for(int j=0; j<S.size(); j++){
		if(S[j]<'A' || S[j]>'Z'){
			cout<<"error"<<endl;
			return 0;
		}		
	}
	for(int k=0; k<T.size(); k++){
		if(T[k]<'A' || T[k]>'Z'){
			cout<<"error"<<endl;
			return 0;
		}		
	}
	while(S[S.size()-1-i]==T[T.size()-1-i]){
		i++;
		if(i==S.size() && S.size()<=T.size()){
			cout<<i<<endl;
			cout<<S<<endl;
			return 0;
		} else if(i==T.size() && S.size()<T.size()) {
			cout<<i<<endl;
			cout<<T<<endl;
			return 0;
			
		}
	}
	if(i==0){
		cout<<i<<endl;
		return 0;
	} else {
		cout<<i<<endl;
		cout<<S.substr(S.size()-i)<<endl;
	}
	return 0;
}
