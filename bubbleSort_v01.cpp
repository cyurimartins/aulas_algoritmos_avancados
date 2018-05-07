#include <iostream>
using namespace std;
//BUBBLE SORT VERSAO 01 (MELHORADO)
//Yuri Martins

int main(int argc, char** argv) {
	int x[5], j, i, aux;
	
	//CARREGANDO OS NUMEROS NO VETOR	
	for (i=0; i<=4; i++){
		cout << "Digite o " << i+1 << " numero: ";
		cin >> x[i];
	}	
	//ORDENANDO DE FORMA CRESCENTE LAÇO COM A QUANTIDADE DE ELEMENTOS DO VETOR - 1	
	for(j=1; j<=4; j++){		
		//LAÇO PERCORRE DA ULTIMA POSICAO A POSIÇÃO J DO VETOR
		for (i=4; i>=j;i--){
			if (x[i] < x[i-1]){
				aux = x[i];
				x[i] = x[i-1];
				x[i-1] = aux;
			}	
		}
	}	
	//MOSTRANDO O VETOR ORDENADO	
	for (i=0; i<=4; i++){
		cout <<i+1<<" numero: " << x[i]<<"\n";
	}
	return 0;
}
