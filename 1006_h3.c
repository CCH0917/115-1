#include <stdio.h>

int main()
{
    int login, balance, money, black;

    printf("請輸入登入狀態（1：已登入，0：未登入）：");
    scanf("%d", &login);

    printf("請輸入帳戶餘額：");
    scanf("%d", &balance);

    printf("請輸入提款金額：");
    scanf("%d", &money);

    printf("請輸入黑名單狀態（1：是，0：否）：");
    scanf("%d", &black);

    if (login == 1 && balance >= money && black == 0)
    {
        printf("可以提款\n");
    }
    else
    {
        printf("無法提款\n");
    }

    return 0;
}