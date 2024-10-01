#include <stdio.h>

int main() {
    int i;
    printf("Input a number: ");
    scanf("%d", &i);
    if (i % 2 == 0) {
        printf("number %d even\n", i);
    } else {
        printf("number %d odd\n", i);
    }
    if (i > 100) {
        printf("the number %d bigger than 100\n", i);
    }
    if (i < 20) {
        printf("the number %d bigger less than 20\n", i);
    }
    if (i < 20) {
        printf("the number %d bigger less than 20\n", i);
    }
    if (i%10 == 3) {
        printf("The number ends on 3 |%d|\n",i);
    }
    if (i%10 == 0) {
        printf("The number ends on 0 |%d|\n",i);
    }
    if (i%5 == 0) {
        printf("The number is divisible by 5 |%d|\n",i);
    }
    
    return 0;
}