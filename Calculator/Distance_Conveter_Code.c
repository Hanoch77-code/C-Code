#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
/* KiloMetres = 1000 Metres
   KiloMetres = 3280.84 Feet
   Feet = 12 Inches
   KM = 100000 Centimetres
   inches = 2.54 Centimetres*/
  // Initialize All the Variables
  float km,feet, inches, cm,m;

  // Input the distance
  printf("Input the distance(KM):-");
  scanf("%f",&km);

  // Calculate
  m = km*1000;
  feet = 3280.84*km;
  inches = feet*12;
  cm = km*100000;

  // Output
  printf("\nThe Converted Units\nMeters = %f\nFeet  = %f\nInches = %f\nCentimeters =  %f\n\n", m,feet,inches,cm);
  return 0;
}

