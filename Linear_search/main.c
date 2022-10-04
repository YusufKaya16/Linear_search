#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display(int arr[], int sizee){

    int j;
    printf("[");
    for(j = 0; j < sizee; j++){
        printf("%d ", arr[j]);
    }
    printf("]\n");

}

int linear_searching(int arr[], int sizee, int value){

    int i;

    for(i = 0; i < sizee; i++){
        if (arr[i] == value){
            return i;
        }

    }

    return -1;

}

int main()
{
    int array[] = {12,35,65,87,8,9,3,5,7,345,34,62,90,53,45,23,11};
    int sizee, value, result;
    sizee = sizeof(array) / sizeof(int);

    display(array, sizee);
    printf("searched item:"); scanf("%d", &value);
    result = linear_searching(array, sizee, value);

    if (result != -1){
        printf("index of searched item: %d", result);
    }
    else{
        printf("searched item is not in array!");
    }

    return 0;
}
