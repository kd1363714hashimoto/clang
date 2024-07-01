#include<stdio.h>
main()
{
    double inputNumber;

    // ユーザーから実数を入力
    printf("実数を入力してください: ");
    scanf("%lf", &inputNumber);

    // 計算結果を出力
    printf("1/2 = %f\n", inputNumber / 2);
    printf("1/3 = %f\n", inputNumber / 3);
    printf("1/4 = %f\n", inputNumber / 4);
}