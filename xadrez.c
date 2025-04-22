#include <stdio.h>
//estrutura void da torre
void torrem(int torre2){
    if (torre2>0) 
    {
        printf("esquerda\n");
        torrem(torre2-1);
    }
    }
//estrutura void do bispo
void bispom(int bispo2){
    if (bispo2>0)
    {
        printf("Cima\n");
        for (int i = 0; i < 1; i++)
        {
            printf("direita\n");
        }
        bispom(bispo2-1);
    }
}  
//estrutura void da rainha
void rainham(int rainha2){
if (rainha2>0)
{
    printf("esquerda\n");
    rainham(rainha2-1);
}
}
//estrutura void do cavalo
void cavalom(int cavalo2){
    if (cavalo2>0){
    
    for (int i = 0; i < 2; i++)
        {
            printf("Cima\n");
        }
            printf("direita\n");
        cavalom(cavalo2-1);
    }
    }
    
int main(){
    //variáveis para armazenar a quantidade de casas que ira andar
     int bispo=5;
     int torre =5;
     int rainha=8;  
     int cavalo=1;
     printf("torre ira 5 vezes para a esquerda\n");
    torrem(torre);
    printf ("bispo ira 5 vezes na diagonal\n");
    bispom(bispo);
    printf("rainha ira 8 vezes para esquerda\n");
    rainham(rainha);
    printf("o cavalo ira se movimentar em L\n");
    cavalom(cavalo);

return 0;
}

