// Algorithms and data structures
/* Exercise 1:
Write a pseudocode and implement a program in C to swap the first and last digits
of a positive integer
*/

// PSEUDOCODE
/* BEGIN:
input n ( positive integer)
lastnum = n % 10
firstnum = n
while firstnum >= 10:
    firstnum = firstnum / 10
endwhile
p = 1
number = n
while number >= 10:
    number = number / 10
    p = p * 10
endwhile
n = n - firstnum * p - lastnum
n = n + lastnum * p + firstnum
print(n)
END */

/* 
Input n
Get the last digit
Find the first digit
Find its place value (p)
Remove first and last digits
Put last digit at the beginning
Put first digit at the end
*/

#include <stdio.h>

int main() {
    int n;
    printf("Nhap vao mot so nguyen duong n: ");
    scanf("%d", &n);

    int lastnum = n % 10;
    
    int firstnum = n;
    while (firstnum >= 10) {
        firstnum = firstnum / 10;
    }

    int p = 1;
    int number = n;
    while (number >= 10) {
        number = number / 10;
        p = p * 10;
    }
    
    n = n - firstnum * p - lastnum;
    n = n + lastnum * p + firstnum;

    printf("so sau khi hoan doi la: %d\n", n);

    return 0;
}