#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int N = 10;

void findminmax(){

srand(time(0));
	const int N = 10;
	int t[N];
	int i;
	
	for(i=0;i<N;i++){
		t[i] = rand() % 100;
		int max, min;
		if(t[i]>max)max=t[i];
		if(t[i]<min)min=t[i];

	
	cout << "max=" << max << endl;
	cout << "min=" << min << endl;
}
}
	
int main(){
	
	
	findminmax();
	return 0;
	
}
