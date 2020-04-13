#define NULL 0
int main(){
    int integer = 9;
    int *pointer = &integer;
    pointer = NULL;
    *pointer = 7;
    return 0;
}
