#include <stdio.h>
void torremove(int casas){
if (casas > 0){
    printf("Direita!\n");
    torremove(casas - 1);
}}
void bispomove(int casas){
    if (casas > 0){ //5 Casas
        printf("Direita, Cima!\n");
        bispomove(casas - 1);
}}
void rainhamove(int casas){
    if (casas > 0){
        printf("Esquerda!\n");
        rainhamove(casas - 1);
}}
void cavalomove(int casas){
    if (casas > 0){
        printf("Cima!\n");
        cavalomove(casas - 1);
    }else{
    printf("Direita\n");
    }}

int main(){
int escolha;

printf("====Escolha====\n");
do{
printf("1.Torre\n2.Bispo\n3.Rainha\n4.Cavalo\n");
scanf("%d", &escolha);
switch (escolha)
{
case 1:
printf("Torre:\n");
torremove(5);
break;

case 2:
printf("Bispo:\n");
bispomove(5);
break;

case 3:
printf("Rainha:\n");
rainhamove(8);
break;

case 4:
printf("Cavalo:\n");
cavalomove(2);
break;

default:

printf("Número errado!\n");
break;
}
}while (escolha >= 5);
return 0;
}