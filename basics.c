#include <stdio.h>

#define FAHRENHEIT(C) ((9.0 / 5.0) * (C) + 32)

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = FAHRENHEIT(celsius);

    printf("Temperature in Fahrenheit = %.2f", fahrenheit);

    return 0;
}