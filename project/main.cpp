#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int choice;
    int award;
    printf("");
    
    
    
    scanf("%d", &choice);
    while(choice!=-1){
        srand(time(NULL));
        int num = rand()%26+65;
        int num2 = rand()%26+65;
        printf("%c%c - ", num, num2);
        for(int i=1 ; i<=8 ; i++){
            int eng = rand()%10;
            printf("%d",eng);
        }
    }

}
