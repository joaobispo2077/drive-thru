/* Bibliotecas */
#include "libDriveThru.h"

/* Prot�tipos de fun��es */
int   main (void);

/* Corpo do programa */
int   main (void)
{	char  esc;
    registro_pagamento Rpgto, Rpgto_temp;
    registro_cartao    Rcart;
    Rpgto.Codpgto = CalculaRegistrosArq(ARQUIVO_DE_PAGAMENTOS)+1;
    setlocale (LC_ALL, "");
    /* Captura forma de pagamento do pedido */
	do
    {	system ("color d7");
		system ("cls");
    	printf ("\n--- %s ---", NOME_ESTABELECIMENTO);
    	printf ("\n+-------------------------------------+");
    	printf ("\n|   Formas de Pagamento - Pedido %3i  |", Rpgto.Codpgto);
    	printf ("\n+-------------------------------------+");
    	printf ("\n|         1. Dinheiro                 |");
    	printf ("\n|         2. Cart�o de Cr�dito        |");
    	printf ("\n|         3. Cart�o de D�bito         |");
    	printf ("\n|         4. Cheque                   |");
    	printf ("\n+-------------------------------------+");
    	printf ("\n   Sua op��o: "); fflush(stdin); esc = getche();
    	if ( esc < '1' || esc > '4')
    	{
    	   printf ("\nForma de pagamento INV�LIDA!");
    	   getch();
        }
    } while ( esc < '1' || esc > '4');
    /* Registra pagamento */
    switch ( esc )
    {
    	case '1': strcpy (Rpgto.Formapgto, "Dinheiro");	break;
    	case '2': strcpy (Rpgto.Formapgto, "Cart�o"); 	break;
		case '3': strcpy (Rpgto.Formapgto, "Cart�o"); 	break;
		case '4': strcpy (Rpgto.Formapgto, "Cheque");	break;
	}
	/* Atualiza o valor do �ltimo pedido */
    resgataTemp (&Rpgto_temp);	
    if ( Rpgto.Codpgto == Rpgto_temp.Codpgto )
    {
        Rpgto.Valorpgto = Rpgto_temp.Valorpgto;
        registraPgto (Rpgto, 'a'); 
        
        /* Caso o pagamento seja feito com cart�o...*/
        if ( esc == '2' || esc == '3')
        {  Rcart.Codpgto = Rpgto.Codpgto; /*... atualiza o nro do pedido no registro de cart�o */
           solicitaCartao(&Rcart); /* captura o nro do cart�o */
           mascaraCartao (&Rcart); /* mascara o nro do cart�o */
		   /* Grava o n�mero do cart�o */
           gravaCartao(Rcart);
        }
    }
    else
    {
    	printf ("\nErro! �ltimo pedido n�o localizado!");
    	getch();
	}
    return (0);
}
