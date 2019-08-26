#include <iostream>
using namespace std;
struct realtype{
	int esquerda;
	int direita;
}r;

struct realtype imprime(struct realtype a){
	printf("linha 10\n");
	printf("%d\n", a);
	struct realtype b = a; printf("%d\n", b);
	printf("linha 13\n");
	return b;
}

int imprimeRight (struct realtype a){
	printf("linha 16\n");
//	printf("%d\n", a.direita);
	int b = a.direita;   // printf("%d\n", b);
	printf("linha 21\n");
	return b;
}
int main(){

	printf("linha 27\n");
	r.direita = 27;
	printf("%d \n", r.direita);
	printf("linha 30\n");
	r.esquerda = 3;
	printf("%d \n", r.esquerda);
	printf("linha 33\n");
	imprime(r);
	imprimeRight(r);

	return 0;

}

