#include <stdio.h>
#include <stdlib.h>

int *uniao(int *v1, int n1, int *v2, int n2) {
  
    int *vet = malloc(sizeof(int)*(n1 + n2)), indice = 0;


    for (int i = 0; i < n1; ++i) {
        *(vet + indice) = v1[i];
        indice++;
    }
    for (int i = 0; i < n2; ++i) {
        *(vet + indice) = v2[i];
        indice++;
    }
  
 return vet;
}

int main(void) {
  
    int *vet, *v1, *v2, n1, n2;

    printf("\nDigite o tamanho do vetor 1:\n");
    scanf("%d", &n1);
    v1 = malloc(sizeof(int)*n1);

    for (int i = 0; i < n1; ++i) {
        printf("\nDigite o valor da posição %d:\n", i);
        scanf("%d", &v1[i]);
    }
  
    printf("\n---------------------------\n");
    printf("\nDigite o tamanho do vetor 2:\n");
    scanf("%d", &n2);
    v2 = malloc(sizeof(int)*n2);

    for (int i = 0; i < n2; ++i) {
        printf("\nDigite o valor da posição %d:\n", i);
        scanf("%d", &v2[i]);
    }

    vet = uniao(v1, n1, v2, n2);

    for (int i = 0; i < (n1+n2); ++i) {
        printf("%d ", *(vet+i));
    }

    free(v1);
    free(v2);
    free(vet);

    return 0;
}