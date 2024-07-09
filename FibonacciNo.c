#include<stdio.h>

int main(){
    int range, a = 0, b = 1, c;
    printf("Enter Range\n");
    scanf("%d", &range);
    int sum = 0;
    for (int i = 0; i < range; i++) {
        sum += a;
        c = a + b;
        a = b;
        b = c;
    }
    printf("Sum of Fibonacci numbers: %d", sum);
    return 0;
}
