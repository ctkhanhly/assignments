#include <stdio.h>
#include <math.h>
int main(int agrc, char *argv[]){
	int computer[10][10] = {0}; //1 means there is a part of the ship
	int me[10][10] ={0};
	int booleanR; //= rand()%2;;//1 is column

	int positionR; //= rand()%10;
	int positionC; //= rand()%10;

	
	for(int i = 1; i<6; i++){
		booleanR = rand()%2;//1 is column

	 	positionR  = rand()%10;
	 	positionC = rand()%10;
	while(computer[positionR][positionC] ==1){
		positionR  = rand()%10;
	 	positionC = rand()%10;
	}
	if(positionC+5<10 && positionR+5>=10 || booleanR==0){
		for(int m = positionC; m<positionC+5; m++){
			computer[positionR][m] = 1;
		}
	}
	else{	for(int m = positionR; m<positionR+5; m++){
			computer[m][positionC] = 1;
		}
	}

	}
	
	for(int i = 1; i<6; i++){
		booleanR = rand()%2;;//1 is column

	 	positionR  = rand()%10;
	 	positionC = rand()%10;
	while(me[positionR][positionC] ==1){
		positionR  = rand()%10;
	 	positionC = rand()%10;
	}
	if(positionC+5<10 && positionR+5>=10 || booleanR==0){
		for(int m = positionC; m<positionC+5; m++){
			me[positionR][m] = 1;
		}
	}
	else{	for(int m = positionR; m<positionR+5; m++){
			me[m][positionC] = 1;
		}
	}

	}

	printf("My ships are at: \n");
	for(int i =0; i<10; i++){
		for(int m = 0; m <10; m++){
			printf("%d ", me[i][m]);
		}
	printf("\n");
	}
	
	int compC = 0;
	int meC=0;
	int posR;
	int posC;
	char answer;
	int pos[10][10] ={0};
	while(meC <5 && compC<5){
		printf("Your turn: ");//row, column
		scanf("%d %d", &posR, &posC);
		printf("\n");
		if(computer[posR][posC] == 1){
			printf("Yes");
			meC++;
		}
		
		printf("\n");
		
		while(pos[posR][posC] ==1){
			posR = rand()%10;
			posC = rand()%10;
		}
			
		printf("Is yours at: %d %d", posR, posC);
		printf("Uhmm let me see... ");
		scanf("%s", &answer);
		if(me[posR][posC] == 1){
			//printf("Yes");
			compC++;
			pos[posR][posC]==1;
		}
		printf("\n");
	}
	if(meC>compC){
		printf("You won!\n");
	}
	else{
		printf("You lost!\n");
	}
	return 0;
}


