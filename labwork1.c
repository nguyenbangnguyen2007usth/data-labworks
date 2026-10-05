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
/*
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
*/

/* Exercise 2:
Complete this given function void findMax(int *max, int a), which assigns a value
a to max if a > max.
*/
/*
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
*/

/* Exercise 3:
Write a structure to represent complex numbers and complete operators: add and
multiply
*/
/*
#include <stdio.h>
struct SoPhuc {
    float thuc;
    float ao;
};

int main() {
    struct SoPhuc z1 = {3.0, 2.0};
    struct SoPhuc z2 = {1.0, 4.0};
    struct SoPhuc tong, tich;
    tong.thuc = z1.thuc + z2.thuc;
    tong.ao = z1.ao + z2.ao;
    tich.thuc = (z1.thuc * z2.thuc) - (z1.ao * z2.ao);
    tich.ao = (z1.thuc * z2.ao) + (z1.ao * z2.thuc);
    printf("So phuc z1: %.1f + %.1fi\n", z1.thuc, z1.ao);
    printf("So phuc z2: %.1f + %.1fi\n", z2.thuc, z2.ao);
    printf("----------------------------------\n");
    printf("Tong (z1 + z2) = %.1f + %.1fi\n", tong.thuc, tong.ao);
    printf("Tich (z1 * z2) = %.1f + %.1fi\n", tich.thuc, tich.ao);

    return 0;
}
*/

/* Exercise 4:
Write a pseudo-code by commenting in the file then implement a program in to
enter a natural number n and verify whether n is sphenic. Calculate the complexity
of your program.
Note: A sphenic number is a product of p*q*r where p, q, and r are three distinct
prime numbers. Example: 30 = 2 * 3* 5; 42 = 2*3*7; 66 = 2*3*11
*/
/*
BEGIN:
input n (positive integer)
count = 0
number = n
i = 2
while i <= number:
    if number % i == 0:
        count = count + 1
        number = number / i

        if number % i == 0:
            print("Not Sphenic")
            END
        endif
    endif

    i = i + 1
endwhile
if count == 3:
    print("Sphenic")
else:
    print("Not Sphenic")
endif
END
*/
/*
#include <stdio.h>
int main()
{
    int n, number, count = 0, i = 2;
    printf("Enter n: ");
    scanf("%d", &n);
    number = n;
    while (i <= number)
    {
        if (number % i == 0)
        {
            count++;
            number = number / i;

            if (number % i == 0)
            {
                printf("Not Sphenic");
                return 0;
            }
        }
        i++;
    }
    if (count == 3)
        printf("Sphenic");
    else
        printf("Not Sphenic");
    return 0;
}
*/