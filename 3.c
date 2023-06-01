#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    int result = 1;
    int past_el = 0;

    if (n >= 2) {
        for (int i = 1; i < n; i++) {
            int temp = result;
            result = result + past_el;
            past_el = temp;
        }
    }
    printf("%d\n", result);
    return 0;
}
