#include <stdio.h>
#include <math.h>

main(){

int num1, num2, mult;

printf("Digite o comprimento de sua sala\n");
scanf("%d", &num1);
printf("Agora digite a largura de sua sala\n");
scanf("%d", &num2);

mult = num1 * num2;

printf("A area de sua sala e de %d metros quadrados", mult);


}