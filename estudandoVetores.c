//Faça um programa que leia 10 números inteiros, armazene-os em um vetor, solicite um valor de referência inteiro e:
//a) imprima os números do vetor que são maiores que o valor referência
//b) retorne quantos números armazenados no vetor são menores que o valor de referência
//c) retorne quantas vezes o valor de referência aparece no vetor

#include <stdio.h>

int main(){
    //ENTRADA DE DADOS
    int num[10];
    printf("INSIRA 10 NÚMEROS INTEIROS: ");
    for(int i = 0; i < 10; i++) scanf("%d", &num[i]);
    int chave;
    printf("INSIRA UM VALOR DE REFERÊNCIA: ");
    scanf("%d", &chave);

    //PROCESSAMENTO DE DADOS
    int qtdM = 0; //qtd de maiores
    int maiores[10]; //vetor para os maiores
    int qtdm = 0; //qtd de menores
    int chaveApareceu = 0; //vezes que a chave (valor de referência) apareceu
    for(int i = 0; i < 10; i++){
        if(num[i] > chave) maiores[qtdM++] = num[i]; //se for maior que a chave, incrementa a qtd de maiores, armazena em maiores e incrementa sua posição
        else if(num[i] < chave) qtdm++; //se for menor, incrementa os menores
        else chaveApareceu++; //se for igual, incrementa a qtd de vezes que a chave apareceu
    }

    //SAÍDA DE DADOS

    if(qtdM - 1 > 0){ //se houver mais de um número maior
        printf("VALORES MAIORES QUE A REFERÊNCIA: ");
        for(int i = 0; i < qtdM - 1; i++) printf("%d, ", maiores[i]);
        printf("%d.\n", maiores[qtdM - 1]);
    } else if(qtdM - 1 == 0) printf("VALORES MAIORES QUE A REFERÊNCIA: %d.\n", maiores[0]); //se houver só um valor maior
    else printf("NÃO EXISTEM VALORES MAIORES QUE A REFERÊNCIA.\n"); //se não houverem valores maiores
    printf("EXISTEM %d VALORES MENORES QUE A REFERÊNCIA.\n", qtdm);
    printf("O VALOR DE REFERÊNCIA APARECEU %d VEZES.\n", chaveApareceu);

    return 0;
}
