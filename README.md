# Fixed point experiments

```
gcc main.c fixed.c -o main
./main [floating point data]
```

```
Original floating point value: 1.230000
Binary scale: 10
Decimal scale: 10000
Transform to binary scale fixed point: 1259
Transform back: 1.229492
Transform to decimal scale fixed point: 12300
Transform back: 1.230000
Square:
Expected:       1.512900
Binary:         1.485352
Decimal:        1.512900
```
