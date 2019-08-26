	///*
	//	Gabarito Lista 01
	//	Universidade Federal de Ouro Preto – UFOP
	//	Disciplina: Algoritmos e Estruturas de Dados I – CIC102
	//	Professor: David Menotti (menottid@gmail.com)
	//
	//*/
	//
	//#include <math.h>
	//#include <iostream>
	//	using namespace std;
	//	
	//	struct realtype{
	//		int left;
	//		int right;
	//	};
	//	
	//	realtype criaReal(double num){
	//		realtype tempReal;
	//		tempReal.left = (int) num;
	//		tempReal.right = abs((int)((num-tempReal.left)*10000));
	//		return tempReal;
	//	}
	//	
	//	double retornaDoub(realtype* real)	{
	//		double temp = 0;
	//		temp += real->left + (real->right/10000.0);
	//		return temp;
	//	}
	///*	
	//	realtype add(realtype* real1, realtype* real2){
	//		realtype tempReal;
	//		tempReal.left = (real1->left+real2->left)+((real1->right+real2->right)/10000);
	//		tempReal.right = ((real1->right+real2->right)%10000);
	//		return tempReal;
	//	}
	//	
	//	realtype multiply(realtype* real1, realtype* real2)	{
	//		realtype tempReal;
	//		long tempSoma=0;
	//		tempSoma += real1->right*(real2->left*10000);
	//		tempSoma += real1->right*(real2->right);
	//		tempSoma += (real1->left*10000)*(real2->left*10000);
	//		tempSoma += (real1->left*10000)*(real2->right);
	//		tempReal.left = tempSoma/100000000;
	//		tempReal.right = tempSoma%100000000;
	//		return tempReal;
	//	}
	//*/	
	///*	void escreve(realtype* real){
	//		printf("%d.%d\n", real->left, real->right);
	//	}
	//*/		
	//	int main(){
	//		double num;
	//		realtype real1;
	//		realtype real2;
	//		printf("Digite um número Real 1: ");
	//		cin >> num;
	//		real1 = criaReal(num);
	//		printf("Digite um número Real 2: ");
	//		cin >> num;
	//		real2 = criaReal(num);
	//		escreve(&real1);			
	//		escreve(&real2);
	///*		printf("Soma: ");
	//		escreve(&add(&real1, &real2));
	//		printf("Multiplicação: ");
	//		escreve(&multiply(&real1, &real2));
	//		system("PAUSE");
	//		
	//*/
	//		
	//	}
	//	
	//	
