//=================================
#include "lista.h"
//=================================
void enqueue_final(Lista *l,Produto produto){
  Celula *nova = new_celula();
  l->fim->prox = nova;
  nova->dado = produto;
  nova->prox = NULL;
  l->fim = nova;
  l->tam++;
}
//=================================