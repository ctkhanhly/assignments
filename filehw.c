#include <stdio.h>
#include <math.h>


int main(int argc, char*argv[]){
	
//3: hardcode the list
//build a script to create a text file with random numbers
//how to write a file
//how to use rand()
	FILE *fpo;
	fpo = fopen("rand.txt", "w");//if it isnt there, create new fiel
	fprintf(fpo,"Some random numbers are: ");

	//int num = rand()%11;
	//fprintf(fp," %d",rand()%11);//write

	//char str[10];
	//fgets(str, 50, (FILE*) fp);
	//printf("%s \n", str);

	//fscanf(fp, "%d", &num);//read
	//printf("Value of n %d\n", num);

	fclose(fpo);
	
	fpo = fopen("rand.txt", "a");
	fprintf(fpo,"%d, %d, %d, %d\n", rand()%21, rand()%11, rand()%11, rand()%31);
// pointer is always at the end of the line,
//start appending to the end = \n: new line
	
//4 read from a title( .txt)
//5 find how to time your program
	fprintf(fpo,"haha");
	fclose(fpo);

	fpo = fopen("rand.txt" , "r");
	char eachLine[100];

	while(!feof(fpo)){//whenever pointer is at the end of a line
//pointer is going through each line
		fgets(eachLine,100, fpo);//everyline has \n at the end
		puts(eachLine);//automatically adds new line
	}
	fclose(fpo);
	

	return 0;
}



