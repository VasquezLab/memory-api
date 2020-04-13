#include<stdio.h>
#include<malloc.h>
int main(){
    int *data = (int *)malloc(100*sizeof(int));
    int *x = data + 50;
    free(x);
    printf("El valor en la posición 50 es: %d,\n", *x);

    return 0;
}

