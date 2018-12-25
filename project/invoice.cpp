#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void invoice(int award[]){
	int temp = 0;
	int a = 0;
	int b = 0;
	int choice;
	printf("1. Show the prize number.\n");
	printf("2. Needn't show and go to next.\n");
	printf("--> ");
	scanf("%d", &choice);
	for(int c=1; c<=5; c++){
		temp = 0;
		for(int i=1, k=1; i<=8; i++, k*=10){
			a = ((rand()%10)*10*k)/(10);
			temp = a + temp;
			//printf(" a = %d \n",a);
			if(i==8)
				award[b++] = temp;
		}
	}
	for(int d=1; d<=3; d++){
		temp = 0;
		for(int i=1, k=1; i<=3; i++, k*=10){
			a = ((rand()%10)*10*k)/(10);
			temp = a + temp;
			//printf(" a = %d \n",a); 
			//printf(" temp = %d \n",temp);
		if(i==3)
			award[b++] = temp;
		}
	}
	if(choice==1){
		for(int j=0;j<5;j++){
			printf("%08d", award[j]);
			if(j==0)printf("    <Special award>(10 million)\n");
			if(j==1)printf("    <Special award>(2 million)\n");
			if(j==2)printf("    <Prize Number>\n");
			if(j==3)printf("    <Prize Number>\n");
			if(j==4)printf("    <Prize Number>\n");
		}
		for(int j=5;j<8;j++){
			printf("%03d", award[j]);
			printf("         <Last 3 Number>\n");
		}
	}
}

void owninv(int own[],int n){
	int b = 0;
	int a = 0;
	int temp = 0;
	int choice;
	printf("1. Show your invoice.\n");
	printf("2. Needn't show and go to next.\n");
	printf("--> ");
	scanf("%d", &choice);

	for(int c=1; c<=n; c++){
		temp = 0;
		for(int i=1, k=1; i<=8; i++, k*=10){
			a = ((rand()%10)*10*k)/(10);
			temp = a + temp;
			//printf(" a = %d \n",a);
			if(i==8)
				own[b++] = temp;
		}
	}
	if(choice==1){
		for(int j=0;j<n;j++){
			printf("%08d\n", own[j]);
		}
	}
}

void check(int award[],int own[],int n){
	int aw = 0;
	for(int j=0; j<2; j++){			//specical
		for(int i=0;i<n;i++){
		if(award[j]==own[i])aw++;
		}
	}
	for(int j=2; j<5; j++){			//prize
		for(int i=0;i<n;i++){
			for(int k=1; k<=100000; k*=10){
				if(award[j]%(1000*k)==own[i]%(1000*k)){
					printf("pr = %08d\n",own[i]);	
				}
			}
		}
	}
	for(int j=5; j<8; j++){			//last 3 number
		for(int i=0;i<n;i++){
			if(award[j]==own[i]%1000){
				printf("%08d\n",own[i]);
				aw++;	
			}
		}
	}
	printf("%d\n",aw);
}

int main(){
    srand(time(NULL));
    int N;
    int num;
	int award[8];
	int own[1000];
	
	invoice(award);
	printf("\n");
    printf("Input the number of invoice sheets n(Max input 1000):  ");
    scanf("%d", &N);
	owninv(own,N);			
    //inv(num);
	check(award,own,N);
	//money(award);
}

		
		


