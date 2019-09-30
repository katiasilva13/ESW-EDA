#include <stdio.h>

struct no {
int conteudo; 
no *esq;
no *dir;
};

int contarNos (struct no no1, struct no *pRaiz){
	if(no1.dir == NULL){
		return 0;
	}else{
		int cont = 1 + contarNos (pRaiz->esq) + contarNos (pRaiz->dir);
		return cont;
	}
}

int main(){
//	struct no arvore;
//	arvore
	struct no no1;
	no1.conteudo = -6;
	struct no no2 = {2};
	struct no no3 = {3};
	no1.dir = &no2;
	no1.esq = &no3;
	no1.dir = null;
	no1.esq = null;
		
//	struct no no4 = {2,69};
	
	
	
}




