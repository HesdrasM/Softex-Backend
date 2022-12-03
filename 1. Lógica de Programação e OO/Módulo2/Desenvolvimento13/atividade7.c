/*Desenvolva um código que simule uma eleição com três candidatos.
- candidato_X => 889
- candidato_Y => 847
- candidato_Z => 515
- branco => 0

O código deve perguntar se deseja finalizar a votação depois do voto. Caso o
número do voto não corresponda a nenhum candidato ou seja branco, ele deve ser
tratado como nulo. Se for inserido um texto ao invés de número, o código deve
retornar uma mensagem para votar novamente.

Quando a votação for finalizada, o código deverá mostrar o vencedor, aquele com
o maior número de votos e, também, a quantidade de votos de cada candidato, os
brancos e nulos
*/
#include <locale.h>
#include <stdio.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int cX = 889, cY = 847, cZ = 515, branco = 0;
  int qtd1cX, qtd2cY, qtd3cZ;
  int voto, nulo, sim = 0;
  

  while (sim == 0) {
    printf("\nInfome o número do candidato que deseja votar:\n");
    scanf("%i", &voto);
    if (voto == 889) {
      printf(
          "Você escolheu o candidato %i, Digite 1 se deseja encerrar a votação: ",
          cX);
      qtd1cX++;
      scanf("%i", &sim);
    }
    if (voto == 847) {
      printf(
          "Você escolheu o candidato %i, Digite 1 se deseja encerrar a votação: ",
          cY);
      qtd2cY++;
      scanf("%i", &sim);
    }
    if (voto == 515) {
      printf("Você escolheu o candidato %i , Digite 1 se deseja encerrar a "
             "votação: ",
             cZ);
      qtd3cZ++;
      scanf("%i", &sim);
    }
    if (voto == 0) {
      printf("Você votou Branco, Digite 1 se deseja encerrar a votação: ");
      branco++;
      scanf("%i", &sim);
    }
  }
  printf("\nO Número de votos do candidato %i foi %i:", cX, qtd1cX);
  printf("\nO Número de votos do candidato %i foi %i:", cY, qtd2cY);
  printf("\nO Número de votos do candidato %i foi %i:", cZ, qtd3cZ);
  printf("\nO Número de votos brancos e nulos foi %i:", branco);
  if (qtd1cX > qtd2cY && qtd1cX > qtd3cZ){
    printf("\nO candidato vencedor foi: %i", cX);
  }
  if (qtd2cY > qtd1cX && qtd2cY > qtd3cZ){
    printf("\nO candidato vencedor foi: %i", cY);
  }
  else{
    printf("\nO candidato vencedor foi: %i", cZ);
  }

}