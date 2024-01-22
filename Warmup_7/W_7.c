#include <stdio.h>

int main (void){
    int arr[] = {1, 4, 7, 9, 12};
    int target = 9;
    int index = linearSearch(arr, target);
    if(index != -1){
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found!");
    }
}
    int linearSearch (int a[], int t){
        for(int s = 0; s < 5-1; s++){
            if(a[s] == t){
                return s;
            }
        }
        return -1;
    }