//a program to print the range of farenheit and celcius temperatures 
//

#include <stdio.h>

int main(){
	//a program to print the temperature ranges on a table for fahr = 0, 20, ...,300
	int lower, upper, step;
	int fareh, cel;
	lower = 0; 
	fareh = lower;
	step = 20; 
	upper = 300;

	cel = 5 * (fareh-32)/9;
	while (fareh <= upper){
		printf("-------------\n");
		printf("|%3dF : %3dC |\n", fareh, cel);
		fareh = fareh + step;
	} 
		printf("------------\n");

              	return 0; 
}
