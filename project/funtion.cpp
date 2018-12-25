void invoice(int prizeN[]){
    int choice;
    printf("1. Show the prize number\n");
    printf("2. Needn't show and go to next\n");
    printf("=> ");
    scanf("%d", &choice);
    for(int a=1;a<=5;a++){

        for(int i=1 ; i<=8 ; i++){
            int num = rand()%10;
            if(choice == 1) printf("%d",num);
        }
        if(a==1) printf(" <Special award>(10 million)");
        if(a==2) printf(" <Special award>(2 million)");
        if(a==3) printf(" <Prize Number>");
        if(a==4) printf(" <Prize Number>");
        if(a==5) printf(" <Prize Number>");
        if(choice == 1) printf("\n");
    }
    for(int a=1;a<=2;a++){
        for(int i=1 ; i<=3 ; i++){
            int num = rand()%10;
            if(choice == 1) printf("%d",num);
        }
        if(choice == 1) printf(" <Last 3 Number>\n");
    }
}

void inv(int n){

}

void check(int prizeN[]){

}

void money(int award){

}
