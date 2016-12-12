#include <stdio.h>
#define PI 3.141592653589793
#define DEV 4.0f/3.0f

int main()
{
float vol;
float rad ;

printf("Input Radius:");
scanf("%f", &rad);



vol = DEV * PI * (rad*rad*rad);

printf ("%f\n", vol);



}
