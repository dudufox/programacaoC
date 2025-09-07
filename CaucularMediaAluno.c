#include <stdio.h>
    
    int main() {

        // Programa para calcular a média do aluno, São 3 notas e média 7

        // Variáveis a serem usadas, inicializadas com valores
        float nota1=1.0;
        float nota2=2.0;
        float nota3=3.0;
        float media=1.0;

        //Primeira nota a ser inserida
    
        
        printf("Insira a primeira nota: ");
        scanf("%f", &nota1);

        //Segunda nota a ser inserida
    
        
        printf("Insira a segunda nota: ");
        scanf("%f", &nota2);

        //Primeira nota a ser inserida
    
        
        printf("Insira a terceira nota: ");
        scanf("%f", &nota3);
            
        media = (nota1+nota2+nota3)/3;
        
        printf("\nA média é: %.1f\n", media);
    }