//print number in words, up to a million.
#include <stdio.h>
int main(int argv, char *argc[]){
	char* suffice[] = {"million", "thousand", ""};
//{" ", " ", " hundred ", " thousand ", " ", " ", " million "};
	int group[3] = {0};
	char* numbers[] = {"zero","one", "two", "three", "four", "five", "six", "seven", 			"eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", 
		"fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	char* twoN0[] = {"", "","twenty", "thirty", "fourty", "fifty", "sixty", 
				"seventy", "eighty", "ninety"};
	int number = atoi(argc[1]);
	int n0ofDigits = 0;
	for(int i = atoi(argc[1]); i >0; i/=10){
		n0ofDigits +=1;
	}
	//printf("%d", n0ofDigits);
	for(int i= 1; i<= n0ofDigits; i++){
		if (i<=3){
			group[0] = (group[0]+number%10)*10;
			number/=10;}
		else if(i<=6){
			group[1] = (group[1]+ number%10)*10;
			number/=10;}
		else{ group[2] = (group[2] +number%10)*10;}
	}
	group[0]/=10; 
	group[1] /=10;
	group[2] /=10;
	number = atoi(argc[1]);
	for(int y=0; y<3; y++){
		for(int i = group[y]; i>0; i/=10){
		if(group[i]<20 && group[i]!=0 && i==2){
			printf("%s", numbers[group[i]]);}
		else if(group[i]<100 && group[i]!=0){
			printf("%s %s", twoN0[group[i]%10], numbers[group[i]/10]);}
		else{ printf("%s hundred", numbers[group[i]/100]);}
		}
		printf("%s", suffice[y]);

	}
	return 0;
}

