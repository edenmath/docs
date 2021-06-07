# Functions

The Eden C library has a rich collection of mathematical functions. Their names have the following syntax: ```eden_functionName```. The most used functions are in the following table: 

> Note: <br> 
>  - "width" always refers to the horizontal length of a polygon or face<br>
> - "height" always refers to the vertical length of a polygon or face
> - "depth" always refers to the depth of a tridimensional object

| Function           | Declaration                                                           | Purpose                                                |
|--------------------|-----------------------------------------------------------------------|--------------------------------------------------------|
| eden_perim_circle  | double eden_perim_circle(double radius);                              | Returns the perimeter of a circle                      |
| eden_perim_rect    | double eden_perim_rect(double width, double height);                  | Returns the perimeter of a rectangle                   |
| eden_area_circle   | double eden_area_circle(double radius);                               | Returns the area of a circle                           |
| eden_area_rect     | double eden_area_circle(double width, double height);                 | Returns the area of a rectangle                        |
| eden_area_tri      | double eden_area_tri(double width, double height);                    | Returns the area of a triangle                         |
| eden_surf_sphere   | double eden_surf_sphere(double radius);                               | Returns the surface area of a sphere                   |
| eden_surf_rectprsm | double eden_surf_rectprsm(double width, double height, double depth); | Returns the surface area of a rectangular prism        |
| eden_surf_triprsm  | double eden_surf_triprsm(double width, double height, double depth);  | Returns the surface area of a triangular prism         |
| eden_surf_cillin   | double eden_surf_cillin(double radius, double depth);                 | Returns the surface area of a cylinder                 |
| eden_abs           | double eden_abs(double x);                                            | Returns the absolute value of a number                 |
| eden_sin           | double eden_sin(double theta);                                        | Returns the sine of a number                           |
| eden_cos           | double eden_cos(double theta);                                        | Returns the cosine of a number                         |
| eden_tan           | double eden_tan(double theta);                                        | Returns the tangent of a number                        |
| eden_arcsin        | double eden_arcsin(double x);                                         | Returns the arcsine of a number                        |
| eden_arccos        | double eden_arccos(double x);                                         | Returns the arccosine of a number                      |
| eden_arctan        | double eden_arctan(double x);                                         | Returns the arctangent of a number                     |
| eden_sqrt          | double eden_sqrt(double x);                                           | Returns the square root of a number                    |
| eden_cbrt          | double eden_cbrt(double x);                                           | Returns the cube root of a number                      |
| eden_round         | double eden_round(double x);                                          | Rounds a number to the nearest integer                 |
| eden_floor         | double eden_floor(double x);                                          | Returns the greatest integer less than or equal to x   |
| eden_ceil          | double eden_ceil(double x);                                           | Returns the greatest integer bigger than or equal to x |
| eden_trunc         | int eden_trunc(double x);                                             | Removes the mantissa (digits after the decimal point)  |
| eden_logn          | double eden_logn(double x);                                           | Returns the natural logarithm of a number              |
| eden_log10         | double eden_log10(double x);                                          | Returns the base 10 logarithm of a number              |