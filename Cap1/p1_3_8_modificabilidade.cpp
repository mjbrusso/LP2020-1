#include <iostream>

using namespace std;

int main()
{
	const int N=5;
	float vet[N], soma=0;
	
	for(int i=0; i<N; i++){
		cin >> vet[i];
		soma+=vet[i];
	}		
    cout << "Media: " <<  soma/N << endl;

    return 0;
}
