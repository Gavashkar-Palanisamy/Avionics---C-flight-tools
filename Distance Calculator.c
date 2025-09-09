#include <stdio.h>
#include <math.h>

#define RADIUS_NM 3440.065  // Earth radius in Nautical Miles

// Convert degrees to radians
double toRadians(double degree) {
    return degree * (M_PI / 180.0);
}

// Haversine formula for distance
double haversine(double lat1, double lon1, double lat2, double lon2) {
    double dLat = toRadians(lat2 - lat1);
    double dLon = toRadians(lon2 - lon1);

    lat1 = toRadians(lat1);
    lat2 = toRadians(lat2);

    double a = pow(sin(dLat / 2), 2) +
               cos(lat1) * cos(lat2) * pow(sin(dLon / 2), 2);

    double c = 2 * atan2(sqrt(a), sqrt(1 - a));

    return RADIUS_NM * c;
}

int main() {
    double lat1, lon1, lat2, lon2;

    printf("Enter Latitude of Waypoint 1 (degrees): ");
    scanf("%lf", &lat1);
    printf("Enter Longitude of Waypoint 1 (degrees): ");
    scanf("%lf", &lon1);

    printf("Enter Latitude of Waypoint 2 (degrees): ");
    scanf("%lf", &lat2);
    printf("Enter Longitude of Waypoint 2 (degrees): ");
    scanf("%lf", &lon2);

    double distance = haversine(lat1, lon1, lat2, lon2);

    printf("\nGreat Circle Distance: %.2f NM\n", distance);

    return 0;
}
