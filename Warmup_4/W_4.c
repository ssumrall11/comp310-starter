#include <stdio.h>

int main(void){
    char string[] = "Hello";
    for(int j = 0, k = 5-1; j < k; j++, k--){
        char t = string[j];
        string[j] = string[k];
        string[k] = t;
    }
        printf("%s\n", string);
}