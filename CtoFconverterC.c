/**
 * @author Arash
 * This program takes a Celsius temperature input and converts it to its equivalent in Fahrenheit temperature
 * The conversion formula used is: Fahrenheit = 9/5 * Celsius +32
 */

#include <stdio.h>

int main()
{
	// declare variables
	float fTemp, cTemp;
	printf("Please enter the current temperature in Celsius: ");

	//takes the user input and places it into the cTemp variable 
	scanf_s("%f", &cTemp);	

	// repeats what the user entered 
	printf("You entered the current temperature as %0.3f degrees in Celsius.\n", cTemp);

	//use the conversion formula to convert Celsius temperature to Fahrenheit temperature
	fTemp = 9.0 / 5.0 * cTemp + 32.0;

	printf("Your converted temperature of %0.3f Celsius", cTemp);
	printf(" in Fahrenheit is: %0.3f degrees.\n", fTemp); //rounds the decimal up to 3 points

	return 0;
}
