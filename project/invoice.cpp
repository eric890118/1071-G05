#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void invoice(int award[]){
	int temp = 0;
	int a = 0;
	int b = 0;
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
	for(int j=0;j<5;j++){
		printf("%08d\n", award[j]);
	}
	for(int j=5;j<8;j++){
		printf("%03d\n", award[j]);
	}
}

int main(){
    srand(time(NULL));
    int N;
    int num;
	int choice;
	int award[8];
	
	while(1){
		printf("1. 9~10 month award: \n");
		printf("2. exit\n");
		printf("--> ");
    	scanf("%d", &choice);
    	if(choice==2)break;
		switch(choice){
			case 1:
				invoice(award);
				printf("\n");	
				break;
		}	
	}
    //inv(num);
    //check(award);
    //money(award);
}

