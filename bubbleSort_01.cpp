#include <iostream>
using namespace std;
//BUBBLE SORT

int main(int argc, char** argv) {
	int x[5], n, i, aux;
	
	//CARREGANDO OS NUMEROS NO VETOR
	
	for (i=0; i<=4; i++){
		cout << "Digite o " << i+1 << " numero: ";
		cin >> x[i];
	}
	
	//ORDENANDO DE FORMA CRESCENTE
	
	//LAÇO COM A QUANTIDADE DE ELEMENTOS DO VETOR
	
	for(n=1; n<=5; n++){
		
		//LAÇO PERCORRE DA PRIMEIRA A PENULTIMA POSICAO DO VETOR
		for (i=0; i<=3;i++){
			if (x[i] > x[i+1]){
				aux = x[i];
				x[i] = x[i+1];
				x[i+1] = aux;
			}	
		}
	}
	
	//MOSTRANDO O VETOR ORDENADO
	
	for (i=0; i<=4; i++){
		cout <<i+1<<" numero: " << x[i]<<"\n";
	}
	return 0;
}
