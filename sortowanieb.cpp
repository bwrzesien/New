#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

const int N = 10;

void sortowanie(){

srand(time(0));
	const int N = 10;
	int t[N];
	int i;
	
	for(i=0;i<N;i++){
		t[i] = rand() % 100;
		
	for(i=0;i<N;i++)
	if(t[i]>t[i+1]){
		int k=t[i];;
		t[i]=t[i+1];
		t[i+1]=k;
		
	cout << t[i] << " ";
}
}
}

	
int main(){
	
	
	sortowanie();
	return 0;
	
}
