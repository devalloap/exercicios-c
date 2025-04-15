#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    // Exercicio 06 - Faça um programa que peça o raio de um círculo, calcule e mostre sua área:
    printf("--- Saida do Exercicio 6 ---\n");

    float raio_circulo, diametro_circulo, area_circulo;

    printf("Informe o raio do circulo: ");
    scanf("%f", &raio_circulo);

    diametro_circulo = raio_circulo * 2;
    area_circulo = (raio_circulo * raio_circulo) * 3.141;

    printf("-- Círculo --\n");
    printf("Diametro: %.2f\n", raio_circulo);
    printf("Raio: %.2f\n", diametro_circulo);
    printf("Area: %.2f\n\n", area_circulo);


    // Exercicio 07 - Faça um programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.
    printf("--- Saida do Exercicio 7 ---\n");

    float lado_quadrado, area_quadrado, dobro_area_quadrado;

    printf("Medida de um dos lados do quadrado: ");
    scanf("%f", &lado_quadrado);

    area_quadrado = lado_quadrado * lado_quadrado;
    dobro_area_quadrado = area_quadrado * 2;
    printf("A area de um quadrado de lado %.2f eh %.2f e o dobro dela %.2f\n\n", lado_quadrado, area_quadrado, dobro_area_quadrado);


    // Exercicio 08 - Faça um programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
    // Calcule e mostre o total do seu salário no referido mês.
    printf("--- Saida do Exercicio 08 ---\n");

    float salario_hora, horas_trabalhadas, total_salario;

    printf("Ganho por hora: ");
    scanf("%f", &salario_hora);

    printf("Horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    total_salario = salario_hora * horas_trabalhadas;
    printf("Total do salario: R$ %.2f\n\n", total_salario);

    
    // Exercício 09 - Faça um programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius.
    printf("--- Saida do Exercicio 09 ---\n");

    float temp_fahrenheit, temp_celsius;

    printf("Temperatura em Fahrenheit: ");
    scanf("%f", &temp_fahrenheit);

    temp_celsius = 5 * ((temp_fahrenheit - 32) / 9);
    printf("A temperatura em graus celsius eh %.2f.\n\n", temp_celsius);

    
    // Exercício 10 - Faça um programa que peça a temperatura em graus Celsius, transforme e mostre em graus Fahrenheit.
    printf("--- Saida do Exercicio 10 ---\n");

    float temp_fahrenheit2, temp_celsius2;

    printf("Temperatura em Celsius: ");
    scanf("%f", &temp_celsius2);

    temp_fahrenheit2 = (temp_celsius2 * 9/5) + 32;
    printf("A temperatura em graus fahrenheit eh %.2f", temp_fahrenheit2);

    return 0;
}