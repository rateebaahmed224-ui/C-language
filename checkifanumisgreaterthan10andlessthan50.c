#include <stdio.h>

int main(void) {
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if (num < 51 && num > 10 ){
	printf(" TRUE ");
	}
	else {
		printf("FALSE ");
	}
    return 0;
}
