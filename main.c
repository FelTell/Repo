#include <stdio.h>
#include <stdlib.h>

int media(int num1, int num2){
    int aux = (num1+num2)/2;
    return aux;
}

int main(){
    int num1, num2, aux
    printf("Digite dois numeros separados por espaco:\n");
    scanf("%d %d", &num1, &num2);

    aux = media(num1, num2);
    printf("A media dos dois numeros eh: %d\n",aux)

    return 0;
}


