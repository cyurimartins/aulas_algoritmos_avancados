#include <iostream>
using namespace std;
//BUBBLE SORT VERSAO_02

int main(int argc, char** argv) {
	int x[5], n, i, aux, troca;
	
	//CARREGANDO OS NUMEROS NO VETOR	
	for (i=0; i<=4; i++){
		cout << "Digite o " << i+1 << " numero: ";
		cin >> x[i];
	}
	
	//ORDENANDO DE FORMA DECRESCENTE LAÇO COM A QUANTIDADE DE ELEMENTOS DO VETOR E ENQUANTO HOUVER TROCA	
	n=1;
	troca = 1;
	
	while (n<=5 && troca ==1){
		troca = 0;
		for (i=0; i<=3; i++){
			if (x[i] < x[i+1]){
				troca = 1;
				aux = x[i];
				x[i] = x[i+1];
				x[i+1] = aux;
			}
		}		
		n = n+1;
	}
	//MOSTRANDO O VETOR ORDENADO	
	for (i=0; i<=4; i++){
		cout <<i+1<<" numero: " << x[i]<<"\n";
	}
	return 0;
}
