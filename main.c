//=================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"
//=================================
int main(){
  Lista lista;
  new_lista(&lista);
  Produto brinquedo;
  //PRODUTO ALEATORIO PARA TESTE
  brinquedo.codigo = rand()%10+1;
  sprintf(brinquedo.descricao,"Iron Man");
  brinquedo.valor = rand()%1000%1;
  brinquedo.quantidade = 5;
  //FUNCOES DE TESTE
  enqueue_inicio(&lista,brinquedo);
  print_lista(&lista);
}
