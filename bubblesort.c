#include <stdio.h>

void swap(int *left, int *right) {
    int temp = *left;

    *left = *right;
    *right = temp;
}

void bubblesort(int data[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(data[j] > data[j+1]) {
                swap(&data[j], &data[j+1]);
            }
        }
    }
}

int main() {
    int data[] = {1,9,2,8,3,7,4,6,5};
    bubblesort(data, sizeof(data)/sizeof(data[0]));

    for (int i=0; i<sizeof(data)/sizeof(data[0]); i++) {
        printf("%d ", data[i]);
    }

    return 0;
}
