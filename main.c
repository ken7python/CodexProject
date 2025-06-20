#include <stdio.h>

/*
 * このプログラムは、ユーザーが入力した整数 n について
 * 1 から n までの値を加算した総和を計算して表示します。
 * sum_to_n 関数が総和計算を行い、main 関数で入出力を担当します。
 */

/*
 * 整数 n の総和を求める関数
 * for 文を使い 1 から n までを順に加算していきます。
 */
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

    /* sum_to_n で計算した結果を result に格納 */
    int result = sum_to_n(number);

    /* 計算結果を画面に出力 */
    printf("1 から %d までの総和は %d です。\n", number, result);

    return 0;
}
