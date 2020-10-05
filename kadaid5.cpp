#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#define M 4295
#define N 100
using namespace std;

int main() {
	const char *filename="kadai2_2.txt";
	std::ifstream ifs(filename);
	if (!ifs){
        std::cout << "File could not be opened." << std::endl;
        std::cin.get();
        return 0;
	}
	std::string array[M];
	int i,j,k,l,m;
	float temph,tempp;
	vector<int> a(N,0), c(N,0), g(N,0), t(N,0);
	vector<float> pa(N,0), pc(N,0), pg(N,0), pt(N,0);
	vector<float> h(N,0);
	vector<int> place(N);
	for(i=0; i<M; i++){
		ifs>>array[i];
	}
	for(j=0; j<N; j++){
		for(i=0; i<M; i++){
			if(array[i][j]=='a'){
				a.at(j)++;
			} else if (array[i][j]=='c') {
				c.at(j)++;
			} else if (array[i][j]=='g') {
				g.at(j)++;
			} else if (array[i][j]=='t') {
				t.at(j)++;
			}
		}
	}
	for(j=0; j<N; j++){
		pa.at(j)=(float)a.at(j)/M;
		pc.at(j)=(float)c.at(j)/M;
		pg.at(j)=(float)g.at(j)/M;
		pt.at(j)=(float)t.at(j)/M;
		h.at(j)=-pa.at(j)*std::log2(pa.at(j))-pc.at(j)*std::log2(pc.at(j))-pg.at(j)*std::log2(pg.at(j))-pt.at(j)*std::log2(pt.at(j));
		place.at(j)=j;
        cout<<pa.at(j)<<pc.at(j)<<pg.at(j)<<pt.at(j)<<endl;
        cout<<h.at(j)<<endl;
        cout<<place.at(j)<<endl;
    }
	for(k=0;k<N;++k){
		for(l=k+1;l<N;++l){
			if(h.at(k)>h.at(l)){
				temph=h.at(k);
				h.at(k)=h.at(l);
				h.at(l)=temph;
				tempp=place.at(k);
				place.at(k)=place.at(l);
				place.at(l)=tempp;
			}
		}
	}
	for(m=0;m<5;m++){
		printf("Place:%d, Entropy:%f\n",place.at(m),h.at(m));
	}
	return 0;
}
