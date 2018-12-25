void invoice(int prizeN[]){
    int choice;
    int N=0;
    printf("1. Show the prize number.\n");
    printf("2. Needn't show and go to next.\n");
    printf("=> ");
    scanf("%d", &choice);
    printf("\n");
    for(int a=1;a<=5;a++){

        for(int i=1 ; i<=8 ; i++){
            prizeN[N] = rand()%10;
            if(choice == 1) printf("%d",prizeN[N]);
            N++;
        }
        if(a==1) printf(" <Special award>(10 million)");    //N=0~7
        if(a==2) printf(" <Special award>(2 million)");     //N=8~15
        if(a==3) printf(" <Prize Number>");                 //N=16~23
        if(a==4) printf(" <Prize Number>");                 //N=24~31
        if(a==5) printf(" <Prize Number>");                 //N=32~39
        if(choice == 1) printf("\n");
    }
    for(int a=6;a<=7;a++){
        for(int i=1 ; i<=3 ; i++){
            prizeN[N] = rand()%10;
            if(choice == 1) printf("%d",prizeN[N]);
            N++;
        }
        if(choice == 1) printf(" <Last 3 Number>\n");       //N=40~42,43~45
    }
    for(N=0;N<=7;N++)
        printf("%d",prizeN[N]);
    printf("\n");
}

void inv(int n){

}

void check(int prizeN[]){

}

void money(int award){

}
