#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "fixed.h"

int main(int argc, char *argv[]) {
  if (argc < 2) {
    fprintf(stderr, "Usage %s: <a float value>\n", argv[0]);
    exit(1);
  }

  float origin = atof(argv[1]);
  printf("Original floating point value: %f\n", origin);
  printf("Binary scale: %d\n", BINARY_FIXED_SCALE);
  printf("Decimal scale: %d\n", DECIMAL_FIXED_SCALE);

  fixed binary_result = float_to_binary_fixed(origin);
  fixed decimal_result = float_to_decimal_fixed(origin);

  printf("Transform to binary scale fixed point: %d\n", binary_result);
  printf("Transform back: %f\n", binary_fixed_to_float(binary_result));
  printf("Transform to decimal scale fixed point: %d\n", decimal_result);
  printf("Transform back: %f\n", decimal_fixed_to_float(decimal_result));

  printf("Square:\nExpected:\t%f\nBinary: \t%f\nDecimal:\t%f\n", 
      origin * origin,
      binary_fixed_to_float(binary_fixed_mult(binary_result, binary_result)),
      decimal_fixed_to_float(decimal_fixed_mult(decimal_result, decimal_result)));
  return 0;
}
