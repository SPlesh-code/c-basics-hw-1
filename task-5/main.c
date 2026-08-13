#include <stdio.h>
#include <math.h>

int main(){
	float result;
	float num[8] = {3,4.5,16,2.7,5,25.2,2.4,6};
	result = (log(sqrt(pow(num[0],2) + pow(num[1],2)))+sqrt(num[2]*num[3]))/(num[4]*sqrt(num[5]))-(log(num[6]+num[7]));
	printf("result: %f\n", result);
	return 0;
}

