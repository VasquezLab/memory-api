#include<malloc.h>
int main(){
    int *vector = (int *)malloc(2*sizeof(int));
    printf("Ingrese los 2 valores para guardar en el vector. Presione enter para cada valor\n");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", vector+i);
    }

    vector = (int *)realloc(vector, 6*sizeof(int));

    printf("Ahora ingrese un valor más para cambiar de posición el vector\n");

    scanf("%d", vector+2);

    printf("Los datos son:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *(vector + i));
    }        
    return 0;
}
