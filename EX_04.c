//=================================
#include "lista.h"
//=================================
void code_search(Lista*l,int codigo){
  Celula *busca = new_celula();
  int achou = 0;
  printf("CODIGO PROCURADO:%d\n",codigo);
  if(l->inicio->prox == NULL){
    printf("NAO EXISTE ITEM NO ESTQOUE!!!\n");
    printf("==============================\n");
  }
  else{
      busca = l->inicio->prox;
      while(busca->prox != NULL){
        if(busca->dado.codigo == codigo){
          printf("<<<PRODUTO ENCONTRADO>>>\n");
          printf("==============================\n");
          printf("Codigo:%d\nDescricao:%s\nValor:R$ %.2f\nQuantidade:%d\n",busca->dado.codigo,busca->dado.descricao,busca->dado.valor,busca->dado.quantidade);
          printf("==============================\n");
          achou++;
          break;
        }
        else
          busca = busca->prox;
      }
      if(achou == 0)
        printf("PRODUTO NAO ENCONTRADO!!!\n");
         printf("==============================\n");
  }
}
//=================================