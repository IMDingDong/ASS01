#include <stdio.h>

int foo (int a, int b, int c){
    return a+b+c; 
}

int main(){
    int result = 0;
    int arr[256] = {0};
    foo(1, 2, 10);
    printf("%d", foo(5, 1, 2));
    return 0;
}
