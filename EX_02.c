//=================================
#include "lista.h"
//=================================
void enqueue_inicio(Lista *l,Produto produto){
  Celula *nova = new_celula();
  //CASO NAO HAJA UM ELEMENTO
  if(l->inicio->prox == NULL){
    l->inicio->prox = nova;
    nova->dado = produto;
    nova->prox = NULL;
    l->tam++;
  }
  //CASO HAJA UM ELEMENTO
  else{
    nova->prox = l->inicio->prox;
    nova->dado = produto;
    l->inicio->prox = nova;
  }
}
//=================================