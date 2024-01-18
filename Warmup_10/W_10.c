#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    for(int u = 1; u < argc; u++){
        printf("u=%d argv[%d] = %s\n", u, u, argv[u]);
    }
}