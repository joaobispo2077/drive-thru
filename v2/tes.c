#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define DATA_SIZE 1000

// MÓDULO DE VENDAS
int vendas() {
    setlocale(LC_ALL, "Portuguese");  
    int codProd;
    int quantidade;
    float custoTotal_1, custoTotal_2, custoTotal_3, custoTotal_4, custoTotal_5;

    printf("\nSelecione o codigo do produto escolhido pelo cliente -- checar PRODUTOS.DAT se necessário: \n\n");
    printf("\n\nDigite o codigo do produto escolhido pelo cliente\n\n: ");
    scanf("%i", &codProd);

    printf("Digite a quantidade escolhida pelo cliente: "); 
    scanf("%i", &quantidade);

    custoTotal_1 = 6 * quantidade;
    custoTotal_2 = 9.5 * quantidade;
    custoTotal_3 = 3 * quantidade;
    custoTotal_4 = 6 * quantidade;
    custoTotal_5 = 6 * quantidade;

   
    switch (codProd)
    {
      case 1: 
        printf("O produto escolhido foi o Pão de Batata, com valor de R$6.00, e a quantidade escolhida é igual a %i. O custo total dessa compra é igual a %f", quantidade, custoTotal_1);
      break;

      case 2: 
        printf("O produto escolhido foi o Hot Dog Vegetariano, com valor de R$9.50, e a quantidade escolhida é igual a %i. O custo total dessa compra é igual a %f", quantidade, custoTotal_2);
      break;

      case 3: 
        printf("O produto escolhido foi a Coxinha de Jaca, com valor de R$3.00, e a quantidade escolhida é igual a %i.  O custo total dessa compra é igual a %f", quantidade, custoTotal_3);
      break;

      case 4: 
        printf("O produto escolhido foi a Pastel de Brócolis com queijo, com valor de R$6.00 e a quantidade escolhida é igual a %i.  O custo total dessa compra é igual a %f", quantidade, custoTotal_4);
      break;

      case 5:
        printf("O produto escolhido foi a Pizza de quatro queijos, com valor de R$12.50 e a quantidade escolhida é igual a %i.  O custo total dessa compra é igual a %f", quantidade, custoTotal_5);
      break;

      default:
      break;
    }


      // DATABASE VENDAS

      /* Variable to store user content */
      // char data[DATA_SIZE];

      // /* File pointer to hold reference to our file */
      // FILE * fPtr_vendas;

      // /* 
      // * Open file in w (read) mode. 
      // * "data/file1.txt" is complete path to create file
      // */
      // fPtr_vendas = fopen("produtos.txt", "r");
    

      // /* fopen() return NULL if last operation was unsuccessful */
      // if(fPtr_vendas == NULL)
      // {
      //     /* File not created hence exit */
      //     printf("Erro ao acessar base de dados.\n");
      //     exit(EXIT_FAILURE);
      // }


      // struct produtos {
      //     int codigoProduto;
      //     char nomeProduto[200];
      //     float custoProduto;
      // };

      // struct produtos baseDeDados[5] = 
      // {{1, "Pão de batata", 6.0}, {2, "Hot dog vegetariano", 9.5},
      // {3, "Coxinha de jaca", 3.0}, {4, "Pastel de brócolis com queijo", 6.0},
      // {5, "Pizza de quatro queijos", 12.5}};

      // printf("codigo do produto: %i -- Nome: %s -- custo do produto: R$ %f \n", baseDeDados[0].codigoProduto,
      //                                                                            baseDeDados[0].nomeProduto,
      //                                                                            baseDeDados[0].custoProduto);
                                                                                            
      /* Close file to save file data */
      // fclose(fPtr_vendas);
      
      // FIM DATABASE VENDAS

      // FIM MÓDULO VENDAS

}

      

  
  // ///////////////////////////////////////////////////////////////////////////////////////////////




  // MÓDULO PAGUE - Parte 1
  int pague(){ 
      setlocale(LC_ALL, "Portuguese");
      
      int pagamento;
      int dinheiro, cartaoCredito_Debito, cheque;
      int lerCartao; 
      float valorPedido;

      printf("Informe o método de pagamento \n -- \n digite: 1 para dinheiro, \n 2 para chequeo e \n 3 para cartão de crédito/cartão de débito -- : \n");

      printf("\nDigite o número da opção escolhida: ");
      scanf("%i", &pagamento);

      dinheiro = 1;
      cartaoCredito_Debito = 2; 
      cheque = 3; 

      printf("Informe aqui o valor total calculado anteriormente: \n");
      scanf("%f", &valorPedido);

      switch (pagamento) {
      case 1: 
        printf("O valor total a ser pago em dinheiro é %f \n", valorPedido);
        break;

      case 2: 
        printf("O valor total a ser pago em cheque é %f \n", valorPedido);
        break;
      case 3:
        printf("Para cartões de crédito ou débito, prossiga no preenchimento dos dados.");
        break;
      default:
        break;
      }

  }
  // FIM MÓDULO PAGUE - PARTE 1 

  // MÓDULO PAGUE - PARTE 2


      // int tamanhoString(char string[]) {

      //   int numCaracteres = 0; 

      //   while (string[ numCaracteres] != '0')
      //         ++numCaracteres;
        
      //   ++numCaracteres;

      //   return numCaracteres; 

      // }

      int capturarCartao() {
        setlocale(LC_ALL, "Portuguese");

        // int tamanhoString(char string[]);
        char stringCartao[16];

        printf("Digite aqui o número do cartão sem caracteres especiais e sem espaços: \n");
        scanf("%s, stringCartao"); 

        // int num = tamanhoString(stringCartao);
        // system("pause"); 

        return 0;
      }
        

  // MÓDULO PAGUE - PARTE 2
  

  // /* Variable to store user content */
  //   char data[DATA_SIZE];

  //   /* File pointer to hold reference to our file */
  //   FILE * fPtr_pague;


  //   /* 
  //    * Open file in w (write) mode. 
  //    * "data/file1.txt" is complete path to create file
  //    */
  //   fPtr_pague = fopen("pagamento.txt", "w");
  //   // Alternativa:
  //   // fPtr_pague = fopen("exemplo.txt", "w");

  //   /* fopen() return NULL if last operation was unsuccessful */
  //   if(fPtr_pague == NULL)
  //   {
  //       /* File not created hence exit */
  //       printf("Erro ao criar arquivo.\n");
  //       exit(EXIT_FAILURE);
  //   }


  //   /* Input contents from user to store in file */
  //   printf("Enter contents to store in file : \n");
  //   fgets(data, DATA_SIZE, stdin);
  //   // Alternativa:
  //   // fprintf(fPtr_pague, "Exemplo 1");


  //   /* Write data to file */
  //   fputs(data, fPtr_pague);


  //   /* Close file to save file data */
  //   fclose(fPtr_pague);


  //   /* Success message */
  //   printf("File created and saved successfully. :) \n");

  

  // FIM MÓDULO PAGUE

//modulo 4 entrega
int clientePagou(int modoDePagamento) {
    setlocale(LC_ALL, "Portuguese");
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

  printf("\n+-----------------------------------------------------------+\n|                DRIVE THRU DO MICKEY & DONALDS             |\n+-----------------------------------------------------------+\n| Nro do pedido: 005                                        |\n+-----------------------------------------------------------+\n|Cód | Produto              | Custo Unit | Qtd | Valor item |\n+-----------------------------------------------------------+\n|  2 | PRODUTO DOIS         |       2,00 |  10 |      20,00 |");


// "+-----------------------------------------------------------+
// |                DRIVE THRU DO MICKEY & DONALDS             |
// +-----------------------------------------------------------+
// | Nro do pedido: 005                                        |
// +-----------------------------------------------------------+
// |Cód | Produto              | Custo Unit | Qtd | Valor item |
// +-----------------------------------------------------------+
// |  2 | PRODUTO DOIS         |       2,00 |  10 |      20,00 |"
}
int entrega()
{
  setlocale(LC_ALL, "Portuguese");
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

    int main(void) {
      setlocale(LC_ALL, "Portuguese");

      printf("Seja bem-vindo ao Drive-Thru Mickey & Donald. \n Insira as informações solicitadas para prosseguir com o pedido ;D");
      vendas(); 
      pague();
      capturarCartao();
      entrega();
    }