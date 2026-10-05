/* Exercise 2:
Complete this given function void findMax(int *max, int a), which assigns a value
a to max if a > max.
*/

#include <stdio.h>

void findMax(int *max, int x) {
    if (x > *max){
        *max = x;
    }
}

int main() {
    int maximum = 10;
    int x;
    printf("Gia tri max hien tai la: %d\n", maximum);
    printf("Nhap vao mot so nguyen a de so sanh: ");
    scanf("%d", &x);
    findMax(&maximum, x);
    printf("Gia tri max sau khi so sanh la: %d\n", maximum);
    return 0;
}