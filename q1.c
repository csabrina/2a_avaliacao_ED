#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct Ponteiro{
  float x,y;
};
struct Circulo{
  char nome[11];
  float raio;
  struct Ponteiro centro;
};

struct Circulo *criaCirculo(char nome[], float px,float py,float r){
struct Circulo *circulo;

circulo = malloc(sizeof(struct Circulo));

if (circulo) {
  
strcpy(circulo-> nome, nome);
circulo -> centro.x = px;
circulo -> centro.y = py;
circulo -> raio = r;

  return circulo;
}

  printf("Falha ao realizar locação de memória.");
  
  return NULL;
  
}

int contem(struct Circulo *c1, struct Circulo *c2){

  float d;
  d = pow((c2->centro.x - c1->centro.x),2.0)+pow((c2-> centro.y-c1->centro.y),2.0);
  d = sqrt(d);
  
  if ((d + c2 ->raio) <= c1->raio)
    printf("\nO círculo contém outro círculo\n");
  else
    printf("\nNão existe outro círculo\n");
}

int main(void) {

char nome_circ1[11],nome_circ2[11],nome_circ3[11];
float px1, px2, px3, py1, py2, py3;
float raio1,raio2,raio3;

printf("\n     Bem vindo ao seu programa de computação gráfica     \n");
printf("\n---------------------------------------------------------\n");

printf("\nDigite o nome do círculo 1:\n\n");
scanf("%s", &nome_circ1);

printf("\nDigite o valor do ponto X e o valor do ponto Y do círculo 1:\n\n"); 
scanf("\n%f\n%f", &px1, &py1);

printf("\nDigite o valor do raio do círculo 1:\n\n");
scanf("\n%f", &raio1);

printf("\n---------------------------------------------------------\n");
  
printf("\nDigite o nome do círculo 2:\n\n");
scanf("%s", &nome_circ2);

printf("\nDigite o valor do ponto X e o valor do ponto Y do círculo 2:\n\n"); 
scanf("\n%f\n%f", &px2, &py2);

printf("\nDigite o valor do raio do círculo 2:\n\n");
scanf("\n%f", &raio2);

printf("\n---------------------------------------------------------\n");
  
printf("\nDigite o nome do círculo 3:\n\n");
scanf("%s", &nome_circ3);

printf("\nDigite o valor do ponto X e o valor do ponto Y do círculo 3:\n\n"); 
scanf("\n%f\n%f", &px3, &py3);

printf("\nDigite o valor do raio do círculo 3:\n\n");
scanf("\n%f", &raio3);
  
printf("\n---------------------------------------------------------\n");
  
struct Circulo  *c1, *c2, *c3;

c1 = criaCirculo(nome_circ1, px1, py1, raio1);
c2 = criaCirculo(nome_circ2, px2 , py2, raio2);
c3 = criaCirculo(nome_circ3, px3,py3, raio3);

printf("%d\n", contem(c1, c2));
printf("%d", contem(c1,c3));

free(c1);
free(c2);
free(c3);

  return 0;
}


