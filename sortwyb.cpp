#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

const int N = 5;
int findmin(int i, int t[]){
	int min;
	for(i=0;i<N;i++)
		if(t[i]<min)min=t[i];
	
	//cout << min << endl;
	return min;
		
	}

int main(){
	
int t[N]={9,1,7,4,0};

int i=0;
int k = findmin(i, t[N]);
for(i=0;i<N;i++)
	swap(t[i],k);
}
