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
	
	double retornaReal(struct realtype a){
		double x, y, real;
		x = a.esquerda;
		y = a.direita;
		y = y/100;
		if (a.esquerda>=0){
			real = x + y;			
		}else{
			x = abs(x);
			real = x + y;
			double temp = real + real;
			real = real - temp;
		}
		return real;
	}	
				
	void imprime(struct realtype a){
		printf("O numero real eh: %f \n", retornaReal(a));
	}
	
	double somar(struct realtype a,struct realtype b, struct realtype c){
//	double somar(struct realtype a,struct realtype b){
				
		double x, y, total;
		x = retornaReal(a);
		y = retornaReal(b);
				total = x + y; 
		c = criaReal(total);
	//	imprime(c);	
	printf("Soma: %f \n", total);
		return total;
	}

int main(){
	
	double num = 15.17;  
	struct realtype r1 = criaReal(num);
	struct realtype r2;
	r2.esquerda = -3;
	r2.direita = 27;	
	struct realtype r3 = {-6, 39};
	struct realtype r4;	
		imprime(r4);
//	imprimeDireita(r3);
//	imprimeEsquerda(r3); 
//  imprime(&r4);
//	printf("Retorna numero real: %f \n",retornaReal(r1));	

//	printf("Soma: %f \n", somar(r1, r2, r4));
	somar(r1, r2, r4);
	
//	r4 = criaReal(somar(r1, r2));	
	imprime(r4);
	    
	return 0;    
}
	
