#include <stdio.h>

int main(){
	float temp_cel, temp_far;
	printf("Enter temperature in Celsius: ");
	scanf("%f", &temp_cel);
	temp_far = temp_cel * 1.8 + 32;
	printf("result temperature in Fahrenheit: %0.2f\n", temp_far);
	return 0;
}
