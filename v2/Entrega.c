/**
 * C program to create a file and write data into file.
 */

#include <stdio.h>
#include <stdlib.h>
// #include <conio.c>


int clientePagou(int modoDePagamento) {
  printf("PEDIDO PAGO COM ");
  switch (modoDePagamento) {
    case 1:
  //    textcolor(13);
      printf("cartão decrédito ou débito");
    break;
    case 2:
// textcolor(3);
      printf("dinheiro");
    break;
    case 3:
    //      textcolor(1);
      printf("cheque");
    break;
  }
}

int entrega()
{
  int pagou = 0;
  int modoDePagamento = 0;


  printf("\nPagamento Efetuado?\n");
  printf("\n1 - Sim\n");
  printf("\n2 - Não\n");
  printf("\nDigite um número correspondente: ");
  scanf("%i", &pagou);

  if (pagou == 1)  {
      printf("\nQual o modo de pagamento?\n");
      printf("\n1 - Crédito/Débito\n");
      printf("\n2 - Dinheiro\n");
      printf("\n3 - Azul\n");
      printf("\nDigite um número correspondente: ");
      scanf("%i", &modoDePagamento);
    clientePagou(modoDePagamento);
    return;
  } else if (pagou == 2) {
  printf("Pagamento não efetuado");
  exit(0);
  }
}
