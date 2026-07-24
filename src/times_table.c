#include <stdio.h>
int main(void) {
    int i;
    int num = 0;
    int result = 0;
    scanf("%d", &num);
    for(i = 0; i <= 10; i++) {
        result = i * num;
        printf("%d x %d = %d\n", i, num, result);
    }
}