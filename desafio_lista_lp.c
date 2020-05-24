#include <stdio.h>

void main() {


  int num_categ = 1, itens_cat[99], total_itens = 0, num_parcelas = 0;
  double valor_unit[99], percent = 0, valor_desc = 0, 
  valor_min_parc = 0, qtd[99], valor_item[99],
  total_categ[99], total_compra = 0, valor_parc = 0, total_a_vista = 0;
  // USO DE MATRIZES PARA ARMAZENAMENTO DE PALAVRAS NAS POSIÇÕES 
  char nome_cat[99][25], desc_item[99][15],
  tipo_pag[1], unid_mon[99][3], unid_med[99][4];

  

  printf("NUMERO DE CATEGORIAS NO ARQUIVO \n");
  scanf("%d", &num_categ);

  int i = 0, cont = 1;
  printf("NUM. DE CATEGORIAS: %d \n", num_categ);
  for(i ; i < num_categ; i++)
  {
    scanf("%s", nome_cat[i]);

    scanf("%d", &itens_cat[i]);
    total_itens = total_itens + itens_cat[i];
  
  
  for(int b = 0; b < itens_cat[i]; b++) 
    {
      printf("ITENS CATEGORIAS \n");
      scanf("%s", desc_item[cont]);
      printf("QTD \n");
      scanf("%lf", &qtd[cont]);
      printf("UNIDADE DE MEDIDA \n");
      scanf("%s", unid_med[cont]);
      printf("MONETARIO \n");
      scanf("%s", unid_mon[cont]);
      printf("VALOR UNITARIO \n");
      scanf("%lf", &valor_unit[cont]);
      valor_item[cont] = qtd[cont] * valor_unit[cont];
      total_categ[i] = total_categ[i] + valor_item[cont];
      
      cont = cont + 1;
    }
      total_compra = total_compra + total_categ[i];
  }

    printf("PERCENTUAL DESCONTO \n");
      scanf("%lf", &percent);
    // CALCULO DO VALOR DE DESCONTO
    // E VALOR A SER PAGO COM O DESCONTO
    valor_desc = total_compra * (percent/100);
    total_a_vista = total_compra - valor_desc;
    

      printf("TIPO DE PAGAMENTO \n");
      scanf("%s", tipo_pag);


      if (tipo_pag[0] == 'P')
      {
        printf("VALOR MINIMO DA PARCELA \n");
        // DIGITAR NUM. DE PARCELAS
        scanf("%s %lf", unid_mon[cont], &valor_min_parc);
        num_parcelas = (total_compra / valor_min_parc);
        valor_parc = (total_a_vista / num_parcelas);
      }

      else if(tipo_pag[0] == 'A')
      {
        printf("PAGAMENTO A - À VISTA\n");
      }

      while(tipo_pag[0] != 'A' && tipo_pag[0] != 'P')
      //printf("APENAS A OU P \n");
      scanf("%s", tipo_pag);

  i = 0, cont = 1;
  
  for (i ; i < num_categ; i++)
  {
    printf("Renato Lopes da Silva \nrenato.lsilva@outlook.com\n");
    printf("\n%s \n", nome_cat[i]);

    for (int b = 0; b < itens_cat[i]; b++)
    {
        printf("* %s: %s %0.2f (%0.1f %s) \n", desc_item[cont], unid_mon[cont], 
        valor_item[cont], qtd[cont], unid_med[cont]);
        
        cont = cont + 1;
    }

    printf("** TOTAL %s: R$ %0.2f \n", nome_cat[i], total_categ[i]);

  }
    
    if(tipo_pag[0] == 'A')
    {
      printf("\nTOTAL DE ITENS: %d \n", total_itens);
      printf("\nVALOR TOTAL: R$ %0.2f \n", total_compra);
      printf("\nDESCONTO: %0.2f%%\n", percent);
      printf("\nVALOR DO DESCONTO: R$ %0.2f\n", valor_desc);
      printf("\nVALOR A PAGAR: R$ %0.2f\n", total_a_vista);
    }
    
    else if (tipo_pag[0] == 'P')
      {
        printf("\nTOTAL DE ITENS: %d \n", total_itens);
        printf("\nVALOR TOTAL: R$ %0.2f \n", total_compra);
        printf("\nDESCONTO: %0.2f%%\n", percent);
        printf("\nVALOR DO DESCONTO: R$ %0.2f\n", valor_desc);
       printf("\nVALOR A PAGAR: R$ %0.2f\n", total_a_vista);
        printf("\nPARCELAS: %d\n", num_parcelas);
        printf("\nVALOR DA PARCELA: R$ %0.2f\n", valor_parc);
      }


}