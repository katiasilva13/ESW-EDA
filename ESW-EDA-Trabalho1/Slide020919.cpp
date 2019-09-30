/*
	Name: Marina
	Author: @ktia-
	Date: 18/08/19 01:41
	Description: Exercicio 2, 3 e 4.
*/
#include <stdio.h>

struct Arvore{
	int info;
	struct Arvore *esq;
	struct Arvore *dir;
};

//verifica se o nó é vazio
bool vazio(Arvore* t){
	if (!t->info){
		printf("\nlinha18 info %d", t->info);
		return true;
	}else{
		return false;
	}

}

// verifica se a ocorrencia de um caracter/valor na arvore
int pertence(Arvore* t, int c){
	if(vazio(t)){
						printf("\nlinha30");
		return 0;
	}else{
		printf("\nlinha32");
		return t->info == c || pertence(t->esq,c) || pertence(t->dir,c);
	}
}

// número de nós da arvore.
int numero_nos(Arvore* t){
	if(vazio(t->esq) && vazio(t->dir)){  printf("\nlinha39");
		return 1;
	}else{
		return 1 + numero_nos(t->esq) + numero_nos(t->dir); printf("\nlinha42");
	}
}

//altura da arvore = maior caminho percorrido para chegar na folha
int altura(Arvore* t){
	if(vazio(t)){
		return 0;
	}
	if(vazio(t->esq) && vazio(t->dir)){
		return 0;
	}else{
		int tamR = altura(t->dir);
		int tamL = altura(t->esq);
		if(tamR > tamL){
			return tamR + 1;
		}else{
			return tamL + 1;
		}
	}
}

//grau da arvore = número de filhos de um nó
int grau(Arvore* t){
	if(vazio(t->esq) && vazio(t->dir)){
		return 0;
	}else if( (vazio(t->esq) && !vazio(t->dir)) || !vazio(t->esq) && vazio(t->dir)){
		return 1;
	}else if(!vazio(t->esq) && !vazio(t->dir)){
		return 2;
	}
}

int main(){
	struct Arvore t1;
	printf("\nlinha77");
	t1.info = -6;
	struct Arvore t2 = {2};
	struct Arvore t3 = {3};
	
	int a = vazio(&t1);
	printf("\nlinha83res %d", a);
//	printf("res %d", pertence(&t1,2));
int b = pertence(&t1,-6);
printf("\nlinha86 res %d", b);
printf("\nlinha87 numero nos %d", numero_nos(&t1));

	t1.dir = &t2;
	t1.esq = &t3;
	t1.dir = NULL;
	t1.esq = NULL;
						printf("\nlinha92");
		
	return 0;
}

