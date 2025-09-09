#include <stdio.h>

// Function to calculate fuel required
double calculateFuel(double distance, double fuelRate) {
    return distance * fuelRate;
}

// Function to calculate total fuel including reserves
double totalFuel(double tripFuel, double contingencyPct, double alternateFuel, double reserveFuel) {
    return tripFuel + (tripFuel * contingencyPct / 100) + alternateFuel + reserveFuel;
}

int main() {
    double distance, fuelRate;
    double contingencyPct, alternateFuel, reserveFuel;
    double tripFuel, totalRequiredFuel;

    printf("Enter flight distance in NM: ");
    scanf("%lf", &distance);

    printf("Enter aircraft fuel consumption rate (kg/NM): ");
    scanf("%lf", &fuelRate);

    printf("Enter contingency fuel percentage (e.g., 5 for 5%%): ");
    scanf("%lf", &contingencyPct);

    printf("Enter alternate airport fuel (kg): ");
    scanf("%lf", &alternateFuel);

    printf("Enter final reserve fuel (kg): ");
    scanf("%lf", &reserveFuel);

    tripFuel = calculateFuel(distance, fuelRate);
    totalRequiredFuel = totalFuel(tripFuel, contingencyPct, alternateFuel, reserveFuel);

    printf("\n--- Fuel Calculation Summary ---\n");
    printf("Trip Fuel: %.2lf kg\n", tripFuel);
    printf("Contingency Fuel: %.2lf kg\n", tripFuel * contingencyPct / 100);
    printf("Alternate Fuel: %.2lf kg\n", alternateFuel);
    printf("Final Reserve Fuel: %.2lf kg\n", reserveFuel);
    printf("Total Fuel Required: %.2lf kg\n", totalRequiredFuel);

    return 0;
}
