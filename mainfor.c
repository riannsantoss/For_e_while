#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int cont = 1, n;
	printf("escreva o numero de vezes");
	scanf("%d", &n);
	
	
	for(cont = 1; cont <= n; cont++){
		printf("escreva... %d\n", cont);
	}
	
	
	
	return 0;
}
