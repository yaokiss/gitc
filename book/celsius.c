#include <stdio.h>

#define FREEZING_PT 32.0
#define SCALE_GACTOR (5.0 / 9.0)

main(){
  float fahrenheit, celsius;
  printf("Enter Fahrenheit temperature:  ");
  scanf ("%f", &fahrenheit);

  celsius = (fahrenheit - FREEZING_PT) * SCALE_GACTOR;

  printf("celsius equivalent: %.1f\n", celsius);
  return 0;
}
