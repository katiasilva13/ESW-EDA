/*
	Name: Marina
	Author: @ktia-
	Date: 26/08/19 02:04
	Description: Slide 1. Exercicio 3, letra A, B, C e D completas.
*/

	#include <stdio.h>
	#include <math.h>
	
	struct realtype{
		int esquerda;
		int direita;  
	};
	
	//Exercicio 3, letra C
	void imprimeDireita(struct realtype a){
		printf("O numero a direita do ponto eh: %d \n", a.direita);
	}
	
	void imprimeEsquerda (struct realtype a){
	  printf("O numero a esquerda do ponto eh: %d \n", a.esquerda);
	}	
	
	//Exercicio 3, letra A, insere um n�mero real em uma estrutura; atribuir o resultado da fun��o � estrutura.
	struct realtype criaReal(double num){
		struct  realtype temp;
		temp.esquerda = (int) num;
		double x = (num-temp.esquerda)*100;
		temp.direita = abs((int)x);
		temp.direita++;
		return temp;
	}
	
	//Exercicio 3, letra B, aceita uma estrutura e retorna o n�mero real.
	double retornaReal(struct realtype a){
		double num1, num2, real;
		num1 = a.esquerda;
		num2 = a.direita;
		num2 = num2/100;
		if (a.esquerda>=0){
			real = num1 + num2;			
		}else{
			num1 = abs(num1);
			real = num1 + num2;
			double temp = real + real;
			real = real - temp;
		}
		return real;
	}	
				
	void imprime(struct realtype a){
		printf("O numero real eh: %.3f \n", retornaReal(a));
	}
	
	//Exercicio 3, letra D
	struct realtype somar(struct realtype a,struct realtype b){
		struct realtype c;
		double num1, num2, total;
		num1 = retornaReal(a);
		num2 = retornaReal(b);
		total = num1 + num2; 
		c = criaReal(total);	
		return c;
	}
	
	//Exercicio 3, letra D
	struct realtype subtrair(struct realtype a,struct realtype b){
		struct realtype c;
		double num1, num2, total;
		num1 = retornaReal(a);
		num2 = retornaReal(b);
		total = num1 - num2; 	
		c = criaReal(total);	
		return c;
	}
	
	//Exercicio 3, letra D
	struct realtype multiplicar(struct realtype a,struct realtype b){
		struct realtype c;
		double num1, num2, total;
		num1 = retornaReal(a);
		num2 = retornaReal(b);
		total = num1 * num2; 		
		c = criaReal(total);	
		return c;
	}
	
int main(){
	
	double num = 15.17;  
	struct realtype r1 = criaReal(num);
	struct realtype r2;
	r2.esquerda = -3;
	r2.direita = 27;	
	struct realtype r3 = {-6, 39};
	struct realtype r4 = somar(r1, r2);	
	struct realtype r5 = multiplicar(r3, r4);
	struct realtype r6 = subtrair(r2,r3);
	
	imprimeDireita(r3);
	imprimeEsquerda(r3);
//	printf("Retorna numero real: %f \n",retornaReal(r1));	
	imprime(r6);
	    
	return 0;    
}
