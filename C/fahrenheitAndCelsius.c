#include <stdio.h>
/*This is an example given in the C programming language*/
/*Lists fahrenheit and celsius conversions in increments of 20*/

int main(){ 

  int fahr, celsius;    
  int lower, upper, step;
  
  lower = 0; /* lower limit of temp table*/    
  upper = 300;    /*upper limit of temp table*/
  step = 20;      /*amount being incremented by  
  
  fahr = lower;    
    while (fahr <= upper) {
      celsius = 5 * (fahr-32) /9;
      printf("%d\t%d\n", fahr, celsius);
      fahr = fahr + step;
 }
 
 }
 
 
