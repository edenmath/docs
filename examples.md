# Examples
This page contains examples of the use of the Eden math library.

## Table of Contents
* [round](#round-function)
* [log10](#log10-function)
* [vol_sphere](#sphere-volume-function)

> Note: you must add the `-leden` flag when compiling

### round Function:
The following is a C program that rounds an int (input).
```c
#include <stdio.h>
#include "eden.h"

int main(void) {
	double num, result;
    printf("Enter a number: ");
	scanf("%lf", &num);

	result = eden_round(num);
	printf("%lf rounded is %d\n", num, result);

	return 0;
}
```

### log10 Function:
The following is a C program that computes log10 of an input.
```c
#include <stdio.h>
#include "eden.h"

int main(void) {
    double num, result;
    printf("Enter a number: ");
    scanf("%lf", &num);

    result = eden_log10(num);
    printf("log10(%lf) = %lf\n", num, result);

    return 0;
}
```

### Sphere Volume Function:
The following program will return the volume of a sphere after inputing the sphere's radius:
```c
#include <stdio.h>
#include "eden.h"

int main(void) {
    double radius, volume;
    printf("Enter radius: ");
    scanf("%lf", &radius);

    result = eden_vol_sphere(radius);
    printf("The volume of the sphere is %lf\n", volume);

    return 0;
}
```