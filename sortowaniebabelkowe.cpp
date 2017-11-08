#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
srand(time(0));
const int N = 10;
int t[N];
int i;
	
	for(i=0;i<N;i++)
		t[i] = rand() % 100;
	
	for(i=0;i<N-1;i++){
		for(int n=0;n<N-1;n++)
			if(t[n]>t[n+1])swap(t[n],t[n+1]);
		}
	for(i=0;i<N;i++)
		cout << t[i] << " ";
}



