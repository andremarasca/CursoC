#include <stdio.h>
#include <math.h>
#define pi 3.14159265

int main (void)
{
    double x0, y0, r, theta;
    double theta_rad, x, y;
    printf("Informe x0, y0, r, theta: ");
    scanf("%lf %lf %lf %lf", &x0, &y0, &r, &theta);
    theta_rad = theta * pi / 180.0;
    x = x0 + r * cos(theta_rad);
    y = y0 + r * sin(theta_rad);
    printf("X = %lf\n", x);
    printf("Y = %lf\n", y);
    return 0;
}
