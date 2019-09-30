#include <stdio.h>

struct Tree{
	int info;
	struct Tree *left;
	struct Tree *right;
};

// verifica se a ocorrencia de um caracter na arvore
int belongTree(Tree* t, int c){
	if(isEmpty(t)){
		return 0;
	}else{
		return t->info == c || belongTree(t->left,c) || belongTree(t->right,c);
	}
}

// número de nós da arvore.
int numero_nos(Tree* t){
	if(isEmpty(t->left) && isEmpty(t->right)){
		return 1;
	}else{
		return 1 + numero_nos(t->left) + numero_nos(t->right);
	}
}

//altura da arvore = maior caminho percorrido para chegar na folha
int altura(Tree* t){
	if(isEmpty(t)){
		return 0;
	}
	if(isEmpty(t->left) && isEmpty(t->right)){
		return 0;
	}else{
		int tamR = altura(t->right);
		int tamL = altura(t->left);
		if(tamR > tamL){
			return tamR + 1;
		}else{
			return tamL + 1;
		}
	}
}

//grau da arvore = número de filhos de um nó
int grau(Tree* t){
	if(isEmpty(t->left) && isEmpty(t->right)){
		return 0;
	}else if( (isEmpty(t->left) && !isEmpty(t->right)) || !isEmpty(t->left) && isEmpty(t->right)){
		return 1;
	}else if(!isEmpty(t->left) && !isEmpty(t->right)){
		eturn 2;
	}
}

int main(){
	struct Tree t;
	
}



