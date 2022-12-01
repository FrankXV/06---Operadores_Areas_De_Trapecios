/* Hacer un programa que calcule Areas de Trapecios */

#include <iostream>

int main() {
    int base_M, base_m, area, altura;

    printf("Digite la base mayor: \n");
    scanf("%i",&base_M);
    printf("Digite la base menor; \n");
    scanf("%i",&base_m);
    printf("Digite la altura; \n");
    scanf("%i",&altura);

    area = ((base_M+base_m)/2)*altura;

    printf("El Area del trapcio es: %i ", area);



    return 0;
}
