#include <stdio.h>

int main(void){
    int nums[] = {1, 2, 3, 4, 5};
    int sum = 0;
    for(int u = 0; u < 5; u++){
        sum += nums[u];
    }
    double avg = sum / (double) 4;
    printf("Sum: %d\n", sum);
    printf("Average: %lf\n", avg);
}

//Got assistence for C array syntax from W3Schools: https://www.w3schools.com/c/c_arrays.php