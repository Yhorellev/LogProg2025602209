#include <stdio.h>
int main() {
    int peso;
    float altura;
    float IMC;

    printf("Inserte su peso en kg: ");
    scanf("%d", &peso);
    printf("Inserte su altura en metros:");
    scanf("%f", &altura);
    IMC=peso/(altura*altura);
    if(IMC <= 18.4){
        printf("Usted tiene bajo peso\n", IMC);
    } else{
        if(IMC >= 18.5 && IMC <= 24.9){
            printf("Usted tiene un peso normal\n", IMC);
        } else{
            if(IMC >= 25.0 && IMC <= 29.9){
                printf("Usted tiene sobrepeso\n", IMC);
            } else{
                if(IMC >= 30.0 && IMC <= 34.0){
                    printf("Usted tiene obesidad clase 1\n", IMC);
                } else{
                    if(IMC >= 35.0 && IMC <= 39.9){
                        printf("Usted tiene obesidad clase 2\n", IMC);
                    } else{
                        if(IMC > 40.0){
                            printf("Usted tiene obesidad clase 3\n", IMC);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
