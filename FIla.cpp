#include <stdio.h>
#define MAX 5
typedef struct {
	char nome[40];
	int idade;
	}; tdado; 
	
	typedef struct {
	tdado fila [MAX];
	int ini,fim;
	}tfila;
//------------------------------
void inicializa (tfila *f) //* = passagem de parametro por referencia
{
	f->ini=0;
	f->fim= -1; // fim > inicio = est� vazio
}
//------------------------------
int enqueue (tfila *f, tdado x)//enqueue = enfilerar
{
	if(f-> fim== MAX-1) // cheio (j� utilizou todas as fichas de fila
	return 0; 
	
	//inserindo pq tem espa�o
	f->fim=++;
	f->fila[f->fim]= x;
	return 1; 
}
//------------------------------
tdado dequeue(tfila *f) {
	tdado aux = f->fila[f->ini];
	f->ini++;
	return aux; 
}
//------------------------------
int isEmpty(tfila f){
 if(f.fim < f.ini)
 return 1; 
 	else
 return 0; 
}
//------------------------------
void mostra(tfila f){
 while	(f.ini <= f.fim){
 		printf ("%s:%d |",f.fila[f.ini].nome, f.fila[f.ini].idade);
}//fim do while 
}
//------------------------------


