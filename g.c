#include <cstdio>;
#include <cmath>;

int main () {
double x, g;
printf("Enter x\n");
scanf("%lf",&x);
g=exp(-fabs(x))*cos(x);
printf("g=%lf\n",g);
return 0;}
