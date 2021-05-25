#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int sala = 1, caminho, x, i, pressioneUm, regrasJogo, sn;

int main (void){

printf("\n--BEM VINDO AO JOGO DE RPG--");
printf("\n--PRESSIONE 1 E ENTER PARA INICIAR--\n");
scanf("%d", &pressioneUm);

printf("\n--DIGITE 1 E ENTER PARA VER O TUTORIAL OU 2 PARA PULAR--\n");
scanf("%d", &regrasJogo);

if (regrasJogo == 1){
    printf("\n--As regras para a travessia do labirinto sao bastante simples. Toda a guilda comecara na sala um e"); 
    printf("\na partir dela pode se escolher duas opcoes diferentes. 1 = Caminho vermelho 2 = Caminho preto.");
    printf("\nVoce ganhara se chegar na casa 9 e perdera se andar 7 ou mais vezes para chegar na sala 9.--\n");
    printf("\n--PRESSIONE 1 E ENTER PARA CONTINUAR--\n");
    scanf("%d", &pressioneUm);
}
else{
    printf("--VOCE PULOU O TUTORIAL--\n");
}

printf("\n--O JOGO COMECOU--\n");

for(i = 1; i <= 7; i++){

printf("\nVoce esta na sala: %d", sala);
printf("\nEscolha seu caminho: ");
printf("\n[1] - Caminho vermelho");
printf("\n[2] - Caminho preto\n");

scanf("%d", &caminho);

if(caminho == 1){

    sala = caminhoVermelho(sala);  
}
else{
    sala = caminhoPreto(sala);
    }
}

printf("\nVoce quer reiniciar o jogo ? :");
printf("\nDigite 1 para reiniciar: ");
printf("\nDigite 2 caso nao queira: ");
scanf("%d", &sn);
if(sn == 1){
    sala = 1;
    main();
}
else{
printf("\n--VOCE ENCERROU O JOGO--\n");
}
    return 0;
}

int caminhoVermelho(int sala)
{
    switch (sala)
    {
        case 1:
            sala = 2;
        break;
        case 2:
            sala = 3;
        break;
        case 3:
            sala = 4;
        break;
        case 4:
            sala = 5;
        break;    
        case 5:
            sala = 6;
            printf("\n--VOCE SO TEM O CAMINHO PRETO A SEGUIR A PARTIR DESSA SALA--\n");
            sala = unicoCaminho(sala);
        break;
        case 6:
            sala = 8;
        break;
        case 7:
            sala = 8;
        break;
        case 8:
            sala = 9;
            printf("\n--SALA 9 = PARABENS VOCE GANHOU--\n");
        break;
    default:
        break;
    }
    if(i >= 7 && sala != 9){
          printf("\n--VOCE PERDEU--\n");
        }
    if(i < 7 && sala == 9){
        i = i + 3;
    }    
    return (sala);
}

int caminhoPreto(int sala)
{
    switch (sala)
    {
        case 1:
            sala = 3;
        break;
        case 2:
            sala = 4;
        break;
        case 3:
            sala = 5;
        break;
        case 4:
            sala = 6;
            printf("\n--VOCE SO TEM O CAMINHO PRETO A SEGUIR A PARTIR DESSA SALA--\n");
            sala = unicoCaminho(sala);
        break;    
        case 5:
            sala = 7;
        break;
        case 6:
            sala = 8;
        break;
        case 7:
            sala = 9;
            printf("\n--SALA 9 = PARABENS VOCE GANHOU--\n");
        break;
        case 8:
            //portal
            sala = caminhoPortal();    
        break;
    default:
        break;
    }
    if(i >= 7 && sala != 9){
          printf("\n--VOCE PERDEU--");
        }
    if(i < 7 && sala == 9){
        i = i + 3;
    }    
     return (sala);
}

int caminhoPortal(){ 
    int numeroAleatorio;
    srand(time(NULL));
    for (int y = 0; y < 1; y++){
    numeroAleatorio = x = 1 + ("%d ", rand() % 5);
}
     return (numeroAleatorio);
}

int unicoCaminho(int sala){
printf("\nVoce esta na sala: %d", sala);
printf("\nEscolha seu caminho: ");
printf("\n[2] - Caminho preto\n");

scanf("%d", &caminho);

sala = 8;
i = i + 1;
return (sala);
}