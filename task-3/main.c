#include <stdio.h>
//визначення дикримінанту

int main(){
	int a, b, c, D;
	printf("Enter a,b, c: ");
	scanf("%d %d %d", &a, &b, &c);
	D = b * b -4 * a * c;
	printf("result Discriminant: %d\n", D);

	return 0;
}
