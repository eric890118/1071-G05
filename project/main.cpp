#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int award;
    int prizeN[45];          //存中獎號碼
    int n;                   //輸入幾張發票 最多100張
    int ownN[MAX];           //存亂數產生的發票 1~10 EE-NNNNNNNN
    invoice(prizeN);         //產生中獎號碼
    owninv(n,ownN);          //輸入有幾張發票
    check(prizeN,ownN);      //對獎
    money(prizeN,ownN);      //中獎金額/細項
}
