#include "fixed.h"

float binary_fixed_to_float(fixed num) { return ((float) num) / (1 << BINARY_FIXED_SCALE); }

fixed float_to_binary_fixed(float num) { return (fixed) (num * (1 << BINARY_FIXED_SCALE)); }

float decimal_fixed_to_float(fixed num) { return (float) num / DECIMAL_FIXED_SCALE; }

fixed float_to_decimal_fixed(float num) { return (fixed) (num * DECIMAL_FIXED_SCALE); }

fixed binary_fixed_mult(fixed a, fixed b) { 
  return (a >> BINARY_FIXED_HALF_SCALE) * (b >> BINARY_FIXED_HALF_SCALE);
}

fixed decimal_fixed_mult(fixed a, fixed b) {
  return (a / DECIMAL_FIXED_HALF_SCALE) * (b / DECIMAL_FIXED_HALF_SCALE);
}
