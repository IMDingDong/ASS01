#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    int i = 0;
    int j = 0; 
    if(argc != 2){
       exit(0); 
    }

    for(i = 1; i <= 9; i++) {
        for(j = 1; j <= 9; j++) {
            printf("%d\n", i * j);
        }
    }

    return 0;
} 
