#include<stdio.h>
#include<malloc.h>
int main(){
    int n;
    char *s;
    scanf("%d", &n);
    s = (char*)malloc(n*sizeof(char));
    for (int i = 0; i < n; i++)
    {
        *(s+i)=0;
    }
    return 0;    
}
