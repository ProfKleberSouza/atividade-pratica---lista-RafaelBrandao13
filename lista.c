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
void enqueue_inicio(Lista *l,Produto produto){
  Celula *nova = new_celula();
  nova->dado = produto;

  l->inicio->prox = nova;
  nova->prox = NULL;
  l->tam++;
}
//=================================
void print_lista(Lista *l){
  Celula *tmp = l->inicio->prox;
  while(tmp != NULL){
    printf("Codigo:%d\nDescricao:%s\nValor:%.2f\nQuantidade:%d\n",tmp->dado.codigo,tmp->dado.descricao,tmp->dado.valor,tmp->dado.quantidade);
    l->tam--;
    tmp = tmp->prox;
  }
}
//=================================