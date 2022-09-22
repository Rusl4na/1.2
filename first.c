#include <cstdio>;
#include <cmath>;

int main () {
double x, g, f;
printf("Enter x\n");
scanf("%lf",&x);
f=exp(-fabs(x))*sin(x);
printf("f=%lf\n",f);
g=exp(-fabs(x))*cos(x);
printf("g=%lf\n",g);
return 0;}
