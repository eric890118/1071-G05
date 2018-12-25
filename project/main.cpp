#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10000

int main(){
    srand(time(NULL));
    int award;
    int prizeN[46];                                //存中獎號碼
    int n;                                         //輸入幾張發票 最多100張
    int ownN[MAX];                                 //存亂數產生的發票 1~10 EE-NNNNNNNN
    int ownprize[MAX];                             //存對完有中獎的發票
    int mn[9];                                     //0=中獎張數 1~8=特別獎~6獎張數

    invoice(prizeN);                               //產生中獎號碼
    printf("Input the number of invoice sheets.  (Max input 100)\n");
    printf("=> ");
    scanf("%d", &n);
    owninv(n,ownN);                                //輸入有幾張發票
    check(prizeN, ownN, n, ownprize, mn);          //對獎
    money(award, ownprize, mn);                    //中獎金額/細項

}
