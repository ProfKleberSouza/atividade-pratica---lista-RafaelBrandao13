//=================================
#include "lista.h"
//=================================
Celula *new_celula(){
  Celula *tmp = (Celula*)malloc(sizeof(Celula));
  tmp->prox = NULL;
  return tmp;
}
//=================================
void new_lista(Lista*l){
  Celula *sentinela = new_celula();
  
  l->inicio = sentinela;
  l->fim = sentinela;
  l-> tam = 0;
}
//=================================