#include <stdio.h>

int main() {
    
    int num1 = 48;
    int num2 = 14;

    int cong = num1 + num2;
    int tru = num1 - num2;
    int nhan = num1 * num2;
    int chia = num1 / num2;

    printf("Tổng %d và %d là: %d\n", num1, num2, cong);
    printf("Hiệu %d và %d là: %d\n", num1, num2, tru);
    printf("Tích %d và %d là: %d\n", num1, num2, nhan);
    printf("Thương %d và %d là: %d\n", num1, num2, chia);

    return 0;
}
