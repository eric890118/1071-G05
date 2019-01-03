#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void invoice(int award[]){
	int temp = 0;
	int a = 0;
	int b = 0;
	int choice;
	printf("1. Show the winning numbers.\n");
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
		printf("Winning number:\n");
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
	printf("1. Show your receipts.\n");
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
	int last = 0;
	int sp1 = 0;
	int sp2 = 0;
	int sp = 0;
	int pri[5];
	int temp[4];
	int a = 0,b = 0,c = 0,d = 0,e = 0,f = 0;
	/*for(int i=0;i<6;i++){
		pri[i] = 0;
	}
	*/
	for(int j=0; j<2; j++){			//specical
		for(int i=0;i<n;i++){
			if(award[j]==own[i]){
				sp++;
				printf("%08d\n", own[i]);
				if(j==0)sp1++;
				if(j==1)sp2++;			
			}
		}
	}
	for(int j=2; j<5; j++){			//prize
		for(int i=0;i<n;i++){
			for(int k=1; k<=100000; k*=10){
				if(award[j]%(1000*k)==own[i]%(1000*k)){
					if(k==1){
						pri[++a] = own[i];
						printf("%08d\n",pri[a]);
					}
					if(k==10)b++;
					if(k==100)c++;
					if(k==1000)d++;
					if(k==10000)e++;
					if(k==100000)f++;				
				}
			}
		}
	}
	temp[0]=a-b-c-d-e-f;
	temp[1]=b-c-d-e-f;
	temp[2]=c-d-e-f;
	temp[3]=d-e-f;
	temp[4]=e-f;
	for(int j=5; j<8; j++){			//last 3 number
		for(int i=0;i<n;i++){
			if(award[j]==own[i]%1000){
				printf("%08d\n",own[i]);
				last++;	
			}
		}
	}
	if(last+a+sp>0)	
		printf("You win %d receipt lottery.\n",last+a+sp);
	if(last+a+sp==0)
		printf("No prize.\n");
	printf("You win %d dollars.",
			sp1*10000000+sp2*2000000+f*200000+temp[4]*40000+temp[3]*10000+temp[2]*4000+temp[1]*1000+(temp[0]+last)*200);
}

int main(){
    srand(time(NULL));
    int N;
	int award[8];
	int own[1000];
	
	invoice(award);
	printf("\n");
    printf("Input the number of invoice sheets n(Max input 1000):  ");
    scanf("%d", &N);
	owninv(own,N);			
	check(award,own,N);
}
