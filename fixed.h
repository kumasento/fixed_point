#ifndef FIXED_H__
#define FIXED_H__

#define BINARY_FIXED_SCALE 10
#define BINARY_FIXED_HALF_SCALE 5
#define DECIMAL_FIXED_SCALE 10000
#define DECIMAL_FIXED_HALF_SCALE 100

typedef short fixed;

float binary_fixed_to_float(fixed num);
fixed float_to_binary_fixed(float num);
float decimal_fixed_to_float(fixed num);
fixed float_to_decimal_fixed(float num);

fixed binary_fixed_mult(fixed a, fixed b);
fixed decimal_fixed_mult(fixed a, fixed b);

#endif
