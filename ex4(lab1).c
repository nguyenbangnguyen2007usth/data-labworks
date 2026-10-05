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

#include <stdio.h>

int main(void)
{
    int n, number, count = 0, i = 2;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n <= 1)
    {
        printf("Not Sphenic\n");
        return 0;
    }

    number = n;

    while (i <= number)
    {
        if (number % i == 0)
        {
            count++;
            number /= i;

            if (number % i == 0)
            {
                printf("Not Sphenic\n");
                return 0;
            }
        }
        i++;
    }

    if (count == 3)
        printf("Sphenic\n");
    else
        printf("Not Sphenic\n");

    return 0;
}