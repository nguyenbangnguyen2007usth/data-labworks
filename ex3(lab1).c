/* Exercise 3:
Write a structure to represent complex numbers and complete operators: add and
multiply
*/

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