/* 
 * File:   listadelista.c
 * Author: jeff
 *
 * Created on 25 de Julho de 2013, 22:54
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//felipe passou por aqui
typedef struct dia{
    char data[11];
    struct hora *h;
    struct dia *prox;
}*ptdia;

typedef struct hora{
    char horario[6];
    char nome[100];
    struct hora* prox;
}*pthora;

void inicia (ptdia *p){
    *p=NULL;
}

//e preciso criar a funçao paraver qual string e maior 
int compara(char *data, char *dta){
    while(*dta){
        if(*dta>*data){
            return 1;}
           else           
               return 0;
        }
}

//funçao para verficar se a data informada e valida
int verificadata(ptdia *p){
    
}

void escrevedata(ptdia *p){
    
}

/*
 * void inserdia(ptdia *p) {
    ptdia q = (ptdia) malloc(sizeof (struct dia));
    pthora h = (pthora) malloc(sizeof (struct hora));
    q->h = h;
    *p = q;
}*/


void inseredia(ptdia *p, char dta, char hro, char atv){
    ptdia aux, ant, ndia;
    pthora nhora;
    ndia=(ptdia)malloc(sizeof(struct dia));
    nhora=(pthora)malloc(sizeof(struct hora));
    if(!ndia){
        puts("memoria cheia");
        return;
    }
    ant=NULL;
    aux=*p;
    while(aux&&compara(dta[11],aux->data)){
        ant=aux;
        aux=aux->prox;
    }
    ndia->data=dta[11];
    nhora->horario=hro[6];
    nhora->nome=atv[100];
    ndia->h=nhora;
    if(!ant){
        ndia->prox=*p;
        *p=ndia;
    }else{
        ndia->prox=ant->prox;
        ant->prox=ndia;
    }
}
    //mostralista
void mostralista(pdia com){
    while(com){
         printf("%c",com->info);
         com=com->prox;
    }
}

/*
 * 
 */
int main(int argc, char** argv) {
    ptdia p;
    inicia(&p);
    inseredia(&p);
    return (EXIT_SUCCESS);
}

