#include <iostream>

using namespace std;

void intercala (int x[], int inicio, int fim, int meio){
	int poslivre, inicio_vetor1, inicio_vetor2, i;
	int aux[10];
	inicio_vetor1 = inicio;
	inicio_vetor2 = meio + 1;
	poslivre = inicio;
	
	while (inicio_vetor1 <= meio && inicio_vetor2 <= fim){
		if (x[inicio_vetor1] <= x[inicio_vetor2]){
			aux[poslivre] = x[inicio_vetor1];
			inicio_vetor1 = inicio_vetor1 + 1;
		} else {
			aux[poslivre] = x[inicio_vetor2];
			inicio_vetor2 = inicio_vetor2 + 1;
		}
		poslivre = poslivre + 1;
	}
	for (i = inicio_vetor1; i<=meio; i++){
		aux[poslivre] = x[i];
		poslivre = poslivre + 1;
	}
	
	for (i = inicio_vetor2; i<=fim; i++){
		aux[poslivre] = x[i];
		poslivre = poslivre + 1;
	}
	
	for (i=inicio; i<=fim; i++){
		x[i] = aux[i];
	}	
}

void merge (int x[], int inicio, int fim){
	int meio;
	if (inicio < fim){
		meio = (inicio + fim)/ 2;
		merge(x, inicio, meio);
		merge(x,meio+1,fim);
		intercala(x, inicio, fim, meio);
	}
}

int main(){
	int x [10];
	int i;
	
	for (i=0; i<=9; i++){
		cout<<"Digite o "<<i+1<<" numero: ";
		cin>>x[i];
	}	
	merge(x,0,9);
	
	for(i=0;i<=9;i++){
		cout<<"\n"<<i+1<<" numero: "<<x[i];
	} 
return 0;
}
