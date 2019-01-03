#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int choice;
    int award;
    printf("choice ");
    scanf("%d", &choice);
    
    while(choice!=-1){
    	
        srand(time(NULL));
        int eng1 = rand()%26+65;
        int eng2 = rand()%26+65;
        printf("%c%c - ", eng1, eng2);
        for(int i=1 ; i<=8 ; i++){
            int num = rand()%10;
            printf("%d",num);
        }
        printf("\nchoice ");
    	scanf("%d", &choice);
    }
}
