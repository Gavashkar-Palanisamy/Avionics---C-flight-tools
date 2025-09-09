# Waypoint Distance Calculator

## Description
This C program calculates the great-circle distance between two waypoints (latitude/longitude in degrees) using the Haversine formula.  
It outputs the distance in **nautical miles (NM)**, the standard unit for aviation navigation.

## Tech Used
- Language: C
- Formula: Haversine
- d=2R⋅arcsin(sin2(2Δϕ​)+cos(ϕ1​)⋅cos(ϕ2​)⋅sin2(2Δλ​)​)
- Earth Radius: 3440.065 NM

## Input Example
Enter Latitude of Waypoint 1 (degrees): 7654
Enter Longitude of Waypoint 1 (degrees): 07065
Enter Latitude of Waypoint 2 (degrees): 9856
Enter Longitude of Waypoint 2 (degrees): 05893

##Output Example
Great Circle Distance: 2778.29 NM
