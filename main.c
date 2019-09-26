#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    int x,y;
    
	printf("input 2 integers :");
	scanf("%d %d",&x,&y);
	
	printf("plus is %d\n: ",x+y);
	printf("minus is %d\n: ",x-y);
	printf("multiply is %d\n: ",x*y);
	printf("division is %d\n: ",x/y);
	printf("modulo is %d\n: ",x%y);

	return 0;
}
