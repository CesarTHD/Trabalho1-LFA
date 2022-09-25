#include <string.h>
#include <stdio.h>

/*
 *  Autores: Emerson Souza e César Tallys
 *  Envio do Trabalho1
 */

int main() {

    //declarando variaveis necessarias
    char palavra[10];
    char primeira[5] = {};
    char segunda[5] = {};
    int num = 0, cont = 0, x = 0, erro=0;
    
    printf("Digite sua palavra: ");
    //armazenando na string 'palavra'
    scanf("%s", palavra);

    //Verifica se algum dos caracteres da palavra é diferente de A e B
    for (int i = 0; i < strlen(palavra); i++) {
        if (palavra[i] != 97 && palavra[i] != 98){
            erro = 1;
        }
    }
    if(erro == 0){
        //a função strlen vai contar a quantidade de caracteres na string e armazenar no variavel cont
        cont = strlen(palavra);

        printf("\nQuantidade de caracteres: %d", cont);

        //vai pegar o tamanho da string e dividir ao meio
        cont = cont / 2;

        printf("\nMetade da String: %d", cont);

        //passando valor para a primeira string
        for (int i = 0; i < cont; i++) {
            primeira[i] = palavra[i];
        }


        //passando valor para a segunda string

        for (cont; palavra[cont] != '\0'; cont++) {
            segunda[x] = palavra[cont];
            x++;
        }

        printf("\n\nA primeira string recebe: %s \nSegunda: %s\n", primeira, segunda);

        for (int i = 0; i < 5; i++) {
            if (primeira[i] != segunda[i]) {
                printf("\nA primeira metade e a segunda sao iguais, a palavra e aceita.\n");
                break;
            } else {
                printf("\nA primera Metade e a segunda sao diferentes, a palavra nao e aceita.\n");
                break;
            }
        }
    }else{
        printf("A palavra so pode conter 'a' e 'b'.");
    }
        
    return 0;
}

