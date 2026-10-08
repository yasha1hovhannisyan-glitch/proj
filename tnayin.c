/*
#include <stdio.h>
int main(){
	int number;
	printf("Write the number");
	scanf("%d", &number);
	
	if(number % 3 == 0 && number % 5 == 0) {
		printf("Yes\n");

	} else {
		printf("No\n");}
	 
	return 0;


}

#include <stdio.h>
int main(){
	int a = 0;

	printf("Enter three-digit number");
	scanf("%d", &a);
	

	int b = a / 100;
	int c = (a / 10) % 10;
       	int d = a % 10;
	printf("%d \n", b + c + d);
}

#include <stdio.h>

	int main(){
	    int n = 0;

            printf("Enter a number.");
	    scanf("%d", &n);

            if(n % 2 == 0){
	       printf("Even\n");
	}else{
	   printf("Odd\n");
	}	
	
	return 0;
}

#include <stdio.h>
int main(){

	int a = 0;
		printf ("Write a number");
		scanf("%d", &a);

		printf("%d\n", a % 10);

	return 0;

}

#include <stdio.h>

int main(){
	int a;
	int b;
	int temp;

	printf("Write the number");
	scanf("%d %d", &a ,&b);

	temp = a;
	a = b;
	b = temp;

	printf("%d %d\n", a ,b);

	return 0;

}

