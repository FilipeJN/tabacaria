#ifndef VISUALIZA_H
#define VISUALIZA_H

#include "cadastro.h"
#include "vendas.h"

/* recebe o estoque e calcula o relatorio */
void relatoriodeVendas (produto * vendidos);

/* exibe o nome dos produtos e o preço */
void exibepreco(produto * estoque);

/* exibe um relatorio sobre o estoque */
void relatorioEstoque(produto * estoque);

/* exibe um menu com a opções de relatorio */
void menuRelatorios(produto * estoque, produto * vendidos);

#endif //VISUALIZA_H
