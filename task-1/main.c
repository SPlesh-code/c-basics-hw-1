#include <stdio.h>


int main(){
	//збір інформації
	float num1, num2, result;
	char oper;
	printf("Enter first number: ");
	scanf("%f", &num1);
	printf("Enter second number: ");
	scanf("%f", &num2);
	printf("Enter operation( +, -, /, *): ");
	scanf(" %c", &oper);
	//визначення операції
	if (oper == '+'){
		result = num1 + num2;
		printf("result operation: %f\n", result);
	}
	else if(oper == '-'){
		result = num1 - num2;
		printf("result operation: %f\n", result);
	}
	else if (oper == '/'){
		if (num2 == 0){
			printf("operation error \n");
		}
		else{
			result = num1 / num2;
			printf("result operation: %f\n", result);
		}
	}
	else if(oper == '*'){
		result = num1 * num2;
		printf("result operatoin: %f\n",result);
	}
	else{
		printf("operation failed");
	}
		
	
       return 0;
}	
