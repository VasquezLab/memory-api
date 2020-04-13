#include<stdio.h>
#include<malloc.h>
int main(){
    int *data = malloc(100*sizeof(int));
    data[1] = 8;
    free(data);
    printf("%d\n", data[1]);
    return 0;
}
