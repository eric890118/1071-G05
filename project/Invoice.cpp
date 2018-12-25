#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10000

void invoice(int prizeN[]){
    int choice;
    int N=1;
    printf("Show the prize number?\n");
    printf("1. Yes.     2. No.\n");
    printf("=> ");
    scanf("%d", &choice);
    printf("\n");
    for(int a=1;a<=5;a++){

        for(int i=1 ; i<=8 ; i++){
            prizeN[N] = rand()%10;
            if(choice == 1) printf("%d",prizeN[N]);
            N++;
        }
        if(choice == 1){
            if(a==1) printf("   <Special award>(10 million)");    //N=1~8
            if(a==2) printf("   <Special award>(2 million)");     //N=9~16
            if(a==3) printf("   <Prize Number>");                 //N=17~24
            if(a==4) printf("   <Prize Number>");                 //N=25~32
            if(a==5) printf("   <Prize Number>");                 //N=33~40
        }
        if(choice == 1) printf("\n");
    }
    for(int a=6;a<=7;a++){
        for(int i=1 ; i<=3 ; i++){
            prizeN[N] = rand()%10;
            if(choice == 1) printf("%d",prizeN[N]);
            N++;
        }
        if(choice == 1) printf("        <Last 3 Number>\n");       //N=41~43,44~46
    }
    printf("\n");
}

void owninv(int n, int ownN[]){
    int choice;
    int N=1;

    printf("\n");
    printf("Show the invoice number?\n");
    printf("1. Yes.     2. No.\n");
    printf("=> ");
    scanf("%d", &choice);
    for(int a=1;a<=n;a++){
        ownN[N] = rand()%26+65;
        N++;
        ownN[N] = rand()%26+65;
        N++;
        if(choice == 1) printf("%c%c-",ownN[N-2], ownN[N-1]);
        for(int i=1 ; i<=8 ; i++){
            ownN[N] = rand()%10;
            if(choice == 1) printf("%d",ownN[N]);
            N++;
        }
        if(choice == 1) printf("\n");
    }
    printf("\n");
}

void check(int prizeN[], int ownN[], int n, int ownprize[], int mn[]){
    int pn,pN;
    int a=3,b=1;
    int temp;
    int i=1;

    for(int N=1;N<=n*10;N++){
        pN=N*10;
        for(a=3;pn<=40;a++){
            pn=a*8;
            if(prizeN[pn]==ownN[pN]&&prizeN[pn-1]==ownN[pN-1]&&prizeN[pn-2]==ownN[pN-2]&&prizeN[pn-3]!=ownN[pN-3]){
                mn[8]++;
                for(temp=pN-9;temp<=pN;temp++){
                    ownprize[i]=ownN[temp];
                    i++;
                }
            }
        }
        for(;pn<=46;b++){
            pn=b*3+40;
            if(prizeN[pn]==ownN[pN]&&prizeN[pn-1]==ownN[pN-1]&&prizeN[pn-2]==ownN[pN-2]){
                mn[8]++;
                for(temp=pN-9;temp<=pN;temp++){
                    ownprize[i]=ownN[temp];
                    i++;
                }
            }
        }

        for(a=3;pn<=40;a++){
            pn=a*8;
            if(prizeN[pn]==ownN[pN]&&prizeN[pn-1]==ownN[pN-1]&&prizeN[pn-2]==ownN[pN-2]&&prizeN[pn-3]==ownN[pN-3]&&prizeN[pn-4]!=ownN[pN-4]){
                mn[7]++;
                for(temp=pN-9;temp<=pN;temp++){
                    ownprize[i]=ownN[temp];
                    i++;
                }
            }
        }

        for(a=3;pn<=40;a++){
            pn=a*8;
            if(prizeN[pn]==ownN[pN]&&prizeN[pn-1]==ownN[pN-1]&&prizeN[pn-2]==ownN[pN-2]&&prizeN[pn-3]==ownN[pN-3]&&prizeN[pn-4]==ownN[pN-4]&&prizeN[pn-5]!=ownN[pN-5]){
                mn[6]++;
                for(temp=pN-9;temp<=pN;temp++){
                    ownprize[i]=ownN[temp];
                    i++;
                }
            }
        }

        for(a=3;pn<=40;a++){
            pn=a*8;
            if(prizeN[pn]==ownN[pN]&&prizeN[pn-1]==ownN[pN-1]&&prizeN[pn-2]==ownN[pN-2]&&prizeN[pn-3]==ownN[pN-3]&&prizeN[pn-4]==ownN[pN-4]&&prizeN[pn-5]==ownN[pN-5]&&prizeN[pn-6]!=ownN[pN-6]){
                mn[5]++;
                for(temp=pN-9;temp<=pN;temp++){
                    ownprize[i]=ownN[temp];
                    i++;
                }
            }
        }

        for(a=3;pn<=40;a++){
            pn=a*8;
            if(prizeN[pn]==ownN[pN]&&prizeN[pn-1]==ownN[pN-1]&&prizeN[pn-2]==ownN[pN-2]&&prizeN[pn-3]==ownN[pN-3]&&prizeN[pn-4]==ownN[pN-4]&&prizeN[pn-5]==ownN[pN-5]&&prizeN[pn-6]==ownN[pN-6]&&prizeN[pn-7]!=ownN[pN-7]){
                mn[4]++;
                for(temp=pN-9;temp<=pN;temp++){
                    ownprize[i]=ownN[temp];
                    i++;
                }
            }
        }

        for(a=3;pn<=40;a++){
            pn=a*8;
            if(prizeN[pn]==ownN[pN]&&prizeN[pn-1]==ownN[pN-1]&&prizeN[pn-2]==ownN[pN-2]&&prizeN[pn-3]==ownN[pN-3]&&prizeN[pn-4]==ownN[pN-4]&&prizeN[pn-5]==ownN[pN-5]&&prizeN[pn-6]==ownN[pN-6]&&prizeN[pn-7]==ownN[pN-7]){
                mn[3]++;
                for(temp=pN-9;temp<=pN;temp++){
                    ownprize[i]=ownN[temp];
                    i++;
                }
            }
        }

        pn=16;
        if(prizeN[pn]==ownN[pN]&&prizeN[pn-1]==ownN[pN-1]&&prizeN[pn-2]==ownN[pN-2]&&prizeN[pn-3]==ownN[pN-3]&&prizeN[pn-4]==ownN[pN-4]&&prizeN[pn-5]==ownN[pN-5]&&prizeN[pn-6]==ownN[pN-6]&&prizeN[pn-7]==ownN[pN-7]){
            mn[2]++;
            for(temp=pN-9;temp<=pN;temp++){
                    ownprize[i]=ownN[temp];
                    i++;
            }
        }

        pn=8;
        if(prizeN[pn]==ownN[pN]&&prizeN[pn-1]==ownN[pN-1]&&prizeN[pn-2]==ownN[pN-2]&&prizeN[pn-3]==ownN[pN-3]&&prizeN[pn-4]==ownN[pN-4]&&prizeN[pn-5]==ownN[pN-5]&&prizeN[pn-6]==ownN[pN-6]&&prizeN[pn-7]==ownN[pN-7]){
            mn[1]++;
            for(temp=pN-9;temp<=pN;temp++){
                    ownprize[i]=ownN[temp];
                    i++;
            }
        }
    }

    mn[0] = mn[1] + mn[2] + mn[3] + mn[4] + mn[5] + mn[6] + mn[7] + mn[8];
    printf("%d\n\n",mn[0]);

}

void money(int award, int ownprize[], int mn[]){
    if(mn[0]==0) printf("No prize.\n");
    else{
        printf("The number of prize: %d\n",mn[0]);
        printf("The number of invoice\n");
        for(int temp=1;temp<=mn[0];temp++){
            for(int i=1;i<=mn[0]*10;i++){
                if(i%10==1||i%10==2) printf("%c",ownprize[i]);
                if(i%10==2) printf("-");
                if(i%10!=1&&i%10!=2) printf("%d",ownprize[i]);
                if(i%10==0) printf("\n");
            }
        }
        printf("\n");
        award=mn[1]*10000000 + mn[2]*2000000 + mn[3]*200000 + mn[4]*40000 + mn[5]*10000 + mn[6]*4000 + mn[7]*1000 + mn[8]*200;
        printf("Total Invoice Prize: %d\n",award);
    }
}

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
