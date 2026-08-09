#include <stdio.h>

int main(){
	unsigned char sym1, sym2, sym3;
	int range;
	//ведення потрібних даних
	printf ("Enter 3 letters: ");
	scanf ("%c %c %c",&sym1 ,&sym2 ,&sym3);
	printf("Enter range: ");
	scanf("%d", &range);
	range = range % 26;
	//визначення символа
	if(sym1 <= 90 && sym1 >= 65){
		sym1 += range;
		if (sym1 > 90){
			sym1 -= 26;
		}
		 else if(sym1 < 65){
			 sym1 += 26;
		 }
	}
	else if(sym1 <= 122 && sym1 >= 97){
		sym1 += range;
		if (sym1 > 122){
			sym1 -= 26;
		}
		else if (sym1 < 97){
			sym1 += 26;
		}
	}
	if(sym2 <= 90 && sym2 >= 65){
                sym2 += range;
                if (sym2 > 90){
                        sym2 -= 26;
                }
                 else if(sym2 < 65){
                         sym2 += 26;
                 }
        }
        else if(sym2 <= 122 && sym2 >= 97){
                sym2 += range;
                if (sym2 > 122){
                        sym2 -= 26;
                }
                else if (sym2 < 97){
                        sym2 += 26;
                }
        }
	if(sym3 <= 90 && sym3 >= 65){
                sym3 += range;
                if (sym3 > 90){
                        sym3 -= 26;
                 }
                 else if(sym3 < 65){
                         sym3 += 26;
                 }
        }
        else if(sym3 <= 122 && sym3 >= 97){
                sym3 += range;
                if (sym3 > 122){
                        sym3 -= 26;
                }
                else if (sym3 < 97){
                        sym3 += 26;
                }
        }
	
		


	printf("result: %c, %c, %c \n", sym1, sym2 , sym3);
	
	
	
	return 0;
}
		
