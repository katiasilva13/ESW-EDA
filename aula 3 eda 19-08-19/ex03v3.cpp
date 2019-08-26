	/*
	Name: Marina
	Author: @ktia-
	Date: 26/08/19 02:04
	Description: Exercicio 3, letra A e B completas.
*/

	#include <stdio.h>
	#include <math.h>
	
	struct realtype{
		int esquerda;
		int direita;  

	};
	
	void imprimeDireita(struct realtype a){
		printf("O numero a direita do ponto eh: %d \n", a.direita);
	}
	
	void imprimeEsquerda (struct realtype a){
	  printf("O numero a esquerda do ponto eh: %d \n", a.esquerda);
	}	
	
	struct realtype criaReal(double num){
		struct  realtype temp;
		temp.esquerda = (int) num;
		double x = (num-temp.esquerda)*100;
		temp.direita = abs((int)x);
		temp.direita++;
		return temp;
	}
				
	void imprime(realtype* real){
		printf("O numero real eh: %d.%d \n", real->esquerda, real->direita);
	}

int main(){
	
	double num = 15.17;  
	struct realtype r1 = criaReal(num);
	struct realtype r2;
	
	r2.direita = 27;
	r2.esquerda = -3;
	
//	imprimeDireita(r1);
//	imprimeEsquerda(r1); 

//	imprimeDireita(r2);
//	imprimeEsquerda(r2); 
  	
	imprime(&r1);	
	imprime(&r2);
    
	return 0;    
}
	
