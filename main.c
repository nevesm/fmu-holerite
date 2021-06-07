#include <stdio.h>
#include <stdlib.h>

int main()
{
double salariobase;
double salarioareceber;
double descontos;
double bonus;
bonus = 50;

    printf("FACULDADE METROPOLITANAS UNIDAS");
    printf(" \n");
    printf(" \n");
    printf("APS - LOGICA DE PROGRAMACAO - 1º SEMESTRE");
    printf(" \n");
    printf(" \n");
    printf("Desenvolvedor: Marcus Neves\n");
    printf("RA: 6932681\n");
    printf("Contato: marcus-neves@outlook.com\n");
    printf(" \n");
    printf("**************\n");
    printf("*fmu-holerite*\n");
    printf("**************\n");
    printf("\nDigite o saláro:");
    scanf("%lf", &salariobase);
    printf("\nSALÁRIO BASE: %f", salariobase);
    descontos = salariobase * 0.1;
    salarioareceber = salariobase - descontos + bonus;
    printf("\nDESCONTOS: %f", descontos);
    printf("\nGRATIFICAÇÕES: %f", bonus);
    printf("\nTOTAL LÍQUIDO À RECEBER: %f\n", salarioareceber);
    printf("\n-------------------------------------\n");
}