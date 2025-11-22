#include <stdio.h>
int main(){
	float celsius, fahrenheit;
	
	printf("Enter temperature in Celsius: ");
	scanf("%f", &celsius);
	
	fahrenheit = (celsius * 9 / 5) + 32;
	
	printf("%.1fC = %.1fF\n", celsius, fahrenheit);
	
	if (celsius >= 30){
		printf("It's hot! Stay hydrated and wear light clothes.\n");
	}
	else if (celsius >=20){
		printf("Nice weather! Perfect for outdoor activities.\n");
	}
	else if (celsius >=10){
		printf("Cool weather. Wear a light jacket.\n");
	}
	else if (celsius >=0){
		printf("Cold! Wear warm clothes. \n");
	} 
	else {
		printf('Freezing! Stay indoors and bundle up. \n');
	}
	
}
