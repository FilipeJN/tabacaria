/*  */
#include "vendas.h"
#include <stdio.h>
#include "cadastro.h"

void relatoriodeVendas (produto * vendidos)
{
    float margem, total = 0;
    
    for (int i = 0; i < tamanho_vendidos(); i++)
    {
        margem = vendidos[i].preco_venda - vendidos[i].preco_compra;
        printf("\n item: %s \n margem do item: %.2lf R$\n", vendidos[i].nome, margem);
        total += margem;
    }
    printf("\n\nTotal de lucro registrado: %.2lf R$.\n", total);
}

void exibepreco(produto * estoque){
	int i, n;
	n=tamanho_estoque();
  if (tamanho_estoque()	== 0){
    printf("Sem produtos no estoque.\n");
  }else{
    for(i = 0; i<n;i++){
      printf("Codigo produto: %ld \n", estoque[i].codigo);
      printf("Nome do produto: %s", estoque[i].nome);
      printf("Preço do produto: %.2f\n\n", estoque[i].preco_venda);
    } 
  }
}

void relatorioEstoque(produto * estoque){
	if (tamanho_estoque()	== 0){
    printf("Sem produtos no estoque.\n");
  }else{
    printf("\n *** Produtos atualmente em estoque:\n");
    imprime_estoque(estoque);
        
    printf("Preço dos produtos:\n");
    int i;
    for(i=0; i<tamanho_estoque(); i++);{
      printf("R$ %.2f\n", estoque[i].preco_venda);	
    }
  }
}

void menuRelatorios(produto * estoque, produto * vendidos){
	int opc;
	do{
		printf("\nEscolha uma das Opções:\n");
		printf("1 - Relatorio de vendas.\n");
		printf("2 - Relatorio de estoque.\n");
		printf("3 - Exibir preço.\n");		
		printf("4 - Sair.\n");
		scanf("%d", &opc);

		switch(opc){
			case 1:
				relatoriodeVendas(vendidos);
			break;

			case 2:
				relatorioEstoque(estoque);				
			break;

			case 3:
			  	exibepreco(estoque)	;				
			break;


			default:
				if (opc != 4)
					printf("\nOpcao invalida.");
			break;
		}
	}while (opc !=4);	
}

