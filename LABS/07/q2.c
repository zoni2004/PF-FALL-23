/*
* Programmer: Zunaira Amjad
* Desc: MOVING AN ARRAY D SPACES
* Date: 10-10-23
*
*/
#include <stdio.h>

int main() {
    int N, d;
    int i;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the elements of the array: ");
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate left by: ");
    scanf("%d", &d);

   
    d %= N;  
    for (i = 0; i < N; i++) {
        printf("%d ", arr[(i + d) % N]);
    }

    return 0;
}
