#include <stdio.h>

int main() {
    int i;
  
    scanf("%d", &i);
  
    if (i % 15 == 0) {
    		printf("FizzBuzz");
  	}
  	else if (i % 3 == 0) {
    		printf("Fizz");
  	}
  	else if (i % 5 == 0) {
    		printf("Buzz");
  	}
  	else {
		    printf("\n");
  	}
    
    return 0;
}
