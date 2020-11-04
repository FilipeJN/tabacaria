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
	for(i = 0; i<n;i++){
		printf("Codigo produto: %d ", estoque[i].codigo);
		printf("Nome do produto: %s ", estoque[i].nome);
		printf("Preço do produto: %.2f\n", estoque[i].preco_venda);
	} 
}

void relatorioEstoque(produto * estoque){
		
	printf("\n *** Produtos atualmente em estoque:\n");
    imprime_estoque(estoque);
    	
    printf("Preço dos produtos:\n");
	int i;
	for(i=0; i<tamanho_estoque(); i++);{
		printf("R$ %.2f\n", estoque[i].preco_venda);	
	}
}

void menuRelatorios(produto * estoque, produto * vendidos){
	int opc;
	do{
		printf("Escolha uma das Opções:\n");
		printf("1 - Relatorio de vendas.");
		printf("2 - Relatorio de estoque.");
		printf("3 - Relatorio de lucro.");
		printf("4 - Sair.");
		
		switch(opc){
			case 1:
				relatorioVendas(vendidos);
			break;
			
			case 2:
				relatorioEstoque(estoque);				
			break;
			
			case 3:
				relatorioLucro();
			break;
			
			default:
				if (opc != 4)
					printf("\nOpcao invalida.");
			break;
		}
	}while (opc !=4);	
	//menu();
}

