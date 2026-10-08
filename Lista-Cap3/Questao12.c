#include <stdio.h>

int main(void) {
    printf("%10s %12s %10s\n", "Celsius", "Fahrenheit", "Kelvin");
    for (int c = 0; c <= 100; c += 5) {
        double fahrenheit = 9.0 * c / 5.0 + 32.0;
        double kelvin = c + 273.15;
        printf("%10.2f %12.2f %10.2f\n", (double)c, fahrenheit, kelvin);
    }
    return 0;
}
