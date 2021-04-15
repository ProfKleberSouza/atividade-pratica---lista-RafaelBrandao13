//=================================
#include "lista.h"
//=================================
void enqueue_inicio(Lista *l,Produto produto){
  Celula *nova = new_celula();
  nova->dado = produto;

  l->inicio->prox = nova;
  nova->prox = NULL;
  l->tam++;
}
//=================================