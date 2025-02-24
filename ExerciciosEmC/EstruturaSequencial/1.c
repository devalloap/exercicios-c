#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    // Exercício 1 - Faça um Programa que mostre a mensagem "Alo mundo" na tela.
    printf("--- Saida do Exercicio 1 ---\n");
    
    printf("Alo, Mundo :)\n\n");
    
    // Exercício 2 - Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número].
    printf("--- Saida do Exercicio 2 ---\n");
    
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);
    printf("O numero informado foi %.2f\n\n", numero);

    // Exercício 3 - Faça um Programa que peça dois números e imprima a soma.
    printf("--- Saida do Exercicio 3 ---\n");
    
    float num1, num2;

    printf("Digite o primeiro numero: \n");
    scanf("%f", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%f", &num2);

    float soma = num1 + num2;
    printf("A soma dos dois numeros eh: %.2f\n\n", soma);
    
    // Exercício 4 - Faça um Programa que peça as 4 notas bimestrais e mostre a média.
    printf("--- Saida do Exercicio 4 ---\n");

    float nota1, nota2, nota3, nota4;

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: \n");
    scanf("%f", &nota4);

    float media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("A media eh %.2f\n\n", media);

    // Exercício 5 - Faça um Programa que converta metros para centímetros.
    printf("--- Saida do Exercicio 5 ---\n");

    float metros;
    
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &metros);

    float conversao = metros * 100;
    printf("%.2fm eh igual a %.2fcm", metros, conversao);
    
    return 0;
    
}