#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n == 0) {//Если число равно 0 то мы ввыводим 0
        printf("%d\n",0);
        return 0;
    }
    int result = 1;
    int past_el = 0;

    if (n >= 2) {//Если число от 1 да 2 то мы должны вывести 1 и переменная result и так равна 1
        for (int i = 1; i < n; i++) {
            int temp = result;//Переменная temp отвечает за прошлое число , а past_elза позапрошлая после чего мы их складываем и заносим в переменную result и ввыводим её
            result = result + past_el;
            past_el = temp;
        }
    }
    printf("%d\n", result);
    return 0;
}
