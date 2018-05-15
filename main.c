#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int constant,variable=11,sum=0;
	for(constant=0;constant<variable;constant++){
		sum=sum+constant; //1 plus to variable(10)
	}
	printf("sum=%d\n",sum); //print sum
	return 0;
}
