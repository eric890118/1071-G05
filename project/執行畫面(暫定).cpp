#include <stdio.h>


int main()
{
    int n;
    int choice;

    printf(" 是否顯示9~10月發票號碼\n");
    printf(" 1.是  2.否 \n=> ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf(" 11111111\n 22222222\n 33333333\n 44444444\n 55555555\n      123\n      456\n      789\n");
    }
    printf("\n 輸入兌獎發票張數 : ");
    scanf("%d",&n);
    printf("\n 是否顯示中獎發票號碼?");
    printf("\n 1.是  2.否 \n=> ");
    scanf("%d",&choice);
    if(choice==1)
        printf(" 中獎發票號碼 : 123\n");
    printf("\n 中獎張數 : 1\n");
    printf(" 中獎獎項 : 六獎\n");
    printf(" 中獎金額 : 200\n");
}
