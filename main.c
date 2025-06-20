#include <stdio.h>

/* 整数 n の総和を求める関数 */
int sum_to_n(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

int main(void) {
    int number;
    printf("整数を入力してください: ");
    /* scanf は標準入力から値を読み込む */
    if (scanf("%d", &number) != 1) {
        printf("入力が正しくありません。\n");
        return 1;
    }

    int result = sum_to_n(number);
    printf("1 から %d までの総和は %d です。\n", number, result);

    return 0;
}
