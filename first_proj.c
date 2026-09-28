#include <stdio.h>
#include <stdlib.h>

void grav_force();

int main(void)
{
    grav_force();
    return 0;
}

void grav_force(void)
{
    double mass1, mass2, r, force;
    const double G = 6.67430e-11;

    mass1 = 5.972e24;
    mass2 = 7.348e22;
    r = 3.844e8;

    force = (G * mass1 * mass2) / (r * r);
    printf("The gravitational force between Earth and Moon is: %.2e N\n", force);
}
