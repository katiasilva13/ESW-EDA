# include <stdio.h>
# include <stdlib.h>

struct Arvore {
      int  info;
      struct Arvore *esq;
      struct Arvore *dir;
   };
  
typedef struct Arvore arv;

arv* inseriNo(int info, arv* esq, arv* dir);

void imprimirERD(arv* n);

int pertence(arv* n, int c);
  
  
arv* inserir(int info, arv* esq, arv* dir){
	arv* n = (arv*) malloc(sizeof(arv));
	  if (n==NULL){
	  	exit(1);
	  }else{
	  	n->info = info;
	  	n->esq = esq;
	  	n->dir = dir;
	  }
	
	return n;
}

//fun��o que verifica existencia de um arv na arvore.
int pertence(arv* n, int c){
    if(n==NULL){
       return 0;
    }else{
    return n->info == c || pertence(n->esq,c) || pertence(n->dir,c);
}
}

//Escreva uma fun��o que imprima, em ordem e-r-d, os conte�dos das folhas
//de uma �rvore bin�ria.
void imprimirERD(arv* n){
	if(n!=NULL){
		if (n->esq == NULL && n->dir == NULL ){			
			printf("%i  ", n->info);
			return;
		}
		imprimirERD(n->esq);
		imprimirERD(n->dir);
	}
}

void imprimirNoInterno(arv* n){
	if(n!=NULL){
		if (n->esq != NULL && n->dir != NULL ){			
			printf("%i  ", n->info);
			return;
		}
		imprimirNoInterno(n->esq);
		imprimirNoInterno(n->dir);
	}
}


// n�mero de n�s da arvore.
int numero_nos(arv* n){
	if((NULL == n->esq) && (NULL == n->dir)){
		return 1;
	}else{
		return 1 + numero_nos(n->esq) + numero_nos(n->dir);
	}
}

int main (){
    arv* c = inserir(15, inserir(5,NULL,NULL),inserir(7,NULL,NULL));
    printf("Ordem E-R-D: ");
	imprimirERD(c);
    printf("\nImprime nos internos: ");
	imprimirNoInterno(c);	
	printf("\nNumero de arvs: %d", numero_nos(c));
	int valor = 15; 
	printf("\nO valor %d na arvore? (Sim=1; Nao=0)\n%d", valor, pertence(c,valor));
	
	return 0;
}

