#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void invoice(int award[]){
	int a=0;
	for(int i=0;i<5;i++){
		for(int i=1 ; i<=8 ; i++){
			award[i] = 0;
		}
    	int eng1 = rand()%26+65;
    	int eng2 = rand()%26+65;
    	printf("%c%c - ", eng1, eng2);
    	for(int i=1 ; i<=8 ; i++){
    		award[i] = rand()%10;
        	printf("%d",award[i]);
    	}	
    printf("\n");
	}
	for(int j=0;j<3;j++){
		for(int i=1 ; i<=3 ; i++){
    		award[i] = rand()%10;
        	printf("%d",award[i]);
		}
	printf("\n");
	}
}


int main(){
    srand(time(NULL));
    int N;
    int award[100];
    int num;
	int choice;
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
