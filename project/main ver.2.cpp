int main(){
	srand(time(NULL));
    int N;
	int award[8];
	int own[1500];
	while(1){
		invoice(award);
		printf("\n");
    		printf("Input the number of invoice sheets n(Max input 1500):  ");
    		scanf("%d", &N);
		owninv(own,N);			
		check(award,own,N);
		printf("\n----------------------------------------\n");
	}
}
