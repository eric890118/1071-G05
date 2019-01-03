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
