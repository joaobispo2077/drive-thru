#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define DATA_SIZE 1000



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

      // fprintf("Código do produto: %i -- Nome: %s -- custo do produto: R$ %f \n", baseDeDados[0].codigoProduto,
      //                                                                            baseDeDados[0].nomeProduto,
      //                                                                            baseDeDados[0].custoProduto);
                                                                                            
      // /* Close file to save file data */
      // fclose(fPtr_vendas);
      
      // FIM DATABASE VENDAS



      

  
  // ///////////////////////////////////////////////////////////////////////////////////////////////




  // MÓDULO PAGUE - Parte 1
  int pague(){ 
      setlocale(LC_ALL, "Portuguese");

      char pagamento;
      int dinheiro, cartaoCredito_Debito, cheque;
      int lerCartao; 
      float valorPedido;

      printf("Informe o método de pagamento -- digite: 1 para dinheiro, 2 para chequeo e 3 para cartão de crédito/cartão de débito -- : ");
      scanf("%c", &pagamento);

      dinheiro = 1;
      cartaoCredito_Debito = 2; 
      cheque = 3; 

      printf("Informe aqui o valor total calculado anteriormente: %f \n");
      scanf("%f", &valorPedido);

      switch (pagamento) {
      case 1: 
        printf("O valor total a ser pago em dinheiro é %f \n", valorPedido);
        break;

      case 2: 
        printf("O valor total a ser pago em cheque é %f \n", valorPedido);
      
      case 3:
        printf("Para cartões de crédito ou débito, prossiga no preenchimento dos dados.");
      
      default:
        break;
      }

  }
  // FIM MÓDULO PAGUE - PARTE 1 

  // MÓDULO PAGUE - PARTE 2

      int capturarCartao() {
        setlocale(LC_ALL, "Portuguese");

        int tamanhoString(char *string[]);
        char stringCartao[16];

        printf("Digite aqui o número do cartão sem caracteres especiais e sem espaços: \n");
        scanf("%s, stringCartao"); 

        int num = tamanhoString(stringCartao);
        system("pause"); 

        return 0;
      }

      int tamanhoString(char *string[]) {

        int numCaracteres = 0; 

        while (string[numCaracteres] != '0')
              ++numCaracteres;
        
        ++numCaracteres;

        return numCaracteres; 

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
  
// MÓDULO DE VENDAS
int vendas() {

    setlocale(LC_ALL, "Portuguese");

    int codProd;
    int quantidade;
    float custoTotal_1, custoTotal_2, custoTotal_3, custoTotal_4, custoTotal_5;

    printf("Selecione o código do produto escolhido pelo cliente -- checar PRODUTOS.DAT se necessário: \n\n");
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
      // FIM MÓDULO VENDAS

}
  //Função essencial - Responsável pela principal lógica acerca do pedido.


void efetuarPedido () {


 consultarProdutos();
}

void mostrarMenuPrincipal() {
    int tipoDeDadoInteger;
    int opcoesMenuPrincipal;
  printf("\n+***********************************************************+\n");
    printf("|  SEJA MUITO BEM-VINDO AO  DRIVE THRU DO MICKEY & DONALDS  |\n");
    printf("+***********************************************************+\n");
    printf("| Escolha uma das opcoes do que voce pode fazer no sistema  |\n");
    printf("+***********************************************************+\n");
    printf("| 1 - Efetuar um pedido                                     |\n");
    printf("| 2 - Consultar os produtos existentes                      |\n");
    printf("| 3 - Cadastrar um novo produto                             |\n");
    printf("| 4 - Gerenciar a fila de entregas (Em desenvolvimento)     |\n");
    printf("+***********************************************************+\n\n\n\n\n");
  
  printf("Digite o numero correspondente a umas das opcoes: ");
  scanf("%d", &opcoesMenuPrincipal);

  if ( (sizeof(opcoesMenuPrincipal) != sizeof(tipoDeDadoInteger))){
    printf("Você precisa digitar um número!");
    mostrarMenuPrincipal();
    return;
  } else {

    switch (opcoesMenuPrincipal) {
      case 1:
        efetuarPedido();
        break;
      case 2:
        consultarProdutos();
        break;
      case 3:
        cadastrarProduto();
        break;
      case 4:
        gerenciarfila();
        break;
      default:
        mostrarMenuPrincipal();
        break;
    }
  } 

}

struct modeloProduto {
  int codigoProduto;
  char nomeProduto[50];
  char valorProduto[5];
} produto;

void cadastrarProduto() {
  printf("\n+***********************************************************+\n");
    printf("| CADASTRO DE PRODUTO - CAM  DRIVE THRU DO MICKEY & DONALDS |\n");
    printf("+***********************************************************+\n");
    printf("|  Preencha as informacoes para cadastrar um novo produto   |\n");
    printf("+***********************************************************+\n");

    printf("\nDigite o nome do produto novo: ");
    scanf("%s", produto.nomeProduto);

    printf("\nDigite o preco do produto novo: ");
    scanf("%s", produto.valorProduto);

    produto.codigoProduto = 10;

    printf("+***********************************************************+\n\n\n\n\n");

     FILE *file;
    file = fopen("PRODUTOS.txt", "a");

    if (file == NULL) {
      printf("Nao foi possivel abrir o arquivo.\n");
      getchar();
      exit(0);
    }

    fputs(produto.nomeProduto, file);
    fputs(produto.codigoProduto, file);
    fputs(produto.valorProduto, file);

  fclose(file);  
}

void consultarProdutos() {
     FILE *file;
  file = fopen("PRODUTOS.txt", "r");

  if (file == NULL) {
    printf("Nao foi possivel abrir o arquivo.\n");
    getchar();
    exit(0);
  }

  char frase[100];

  while (fgets(frase, 100, file) != NULL) {
    printf("\n%s\n", frase);
  }

  fclose(file);  
}

void gerenciarfila() {
  return 0;
}
int main(void) {
  setlocale(LC_ALL, "Portuguese");
  
  mostrarMenuPrincipal();
}

    //template 1

            // printf("\n+***********************************************************+\n|                DRIVE THRU DO MICKEY & DONALDS             |\n+***********************************************************+\n| Nro do pedido: 005                                        |\n+***********************************************************+\n|Cód | Produto              | Custo Unit | Qtd | Valor item |\n+***********************************************************+\n|  2 | PRODUTO DOIS         |       2,00 |  10 |      20,00 |");

    // template 2
    
      // printf("\n+***********************************************************+\n");
      //   printf("|                DRIVE THRU DO MICKEY & DONALDS             |\n");
      //   printf("+***********************************************************+\n");
      //   printf("| Nro do pedido: 005                                        |\n");
      //   printf("+***********************************************************+\n");
      //   printf("|Cód | Produto              | Custo Unit | Qtd | Valor item |\n");
      //   printf("+***********************************************************+\n");
      //   printf("| 2 | PRODUTO DOIS          |       2,00 |  10 |      20,00 |\n");
      //   printf("+***********************************************************+\n");