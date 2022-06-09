#include<stdio.h>

int main() {

    int arr[] = {3,2,6,1,2,4,9};

    int i, temp = 0;

    for(i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {

        if(arr[i] < arr[temp]) temp = i;
    }

    printf("%i", arr[temp]);

}
