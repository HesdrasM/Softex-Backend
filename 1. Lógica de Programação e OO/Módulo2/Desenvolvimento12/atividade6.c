/*Desenvolva um programa que recebe do usuário nome completo e ano de nascimento
que seja entre 1922 e 2021. A partir dessas informações, o sistema mostrará o
nome do usuário e a idade que completou, ou completará, no ano atual (2022).

Caso o usuário não digite um número ou apareça um inválido no campo do ano, o
sistema informará o erro e continuará perguntando até que um valor correto seja
preenchido.
*/
#include <locale.h>
#include <stdio.h>
int main(void) {
  int idade, ano;
  char nome[50];
  setlocale(LC_ALL, "portuguese");
  printf(" \n Informe seu nome completo:");
  fgets(nome, 50, stdin);

  printf("\nInforme o ano em que nasceu:");
  scanf("%i", &ano);

  while (ano < 1922 || ano > 2021) {
    printf("\nErro, Digite novamente");
    scanf("%i", &ano);
  }

  idade = 2022 - ano;

  printf(" \nSeu nome é %s, sua idade no ano de 2022 é %i! ", nome, idade);
}
