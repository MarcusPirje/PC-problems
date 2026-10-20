#include <stdio.h>
#include <math.h>

int main(void) {
    double grad;
    double tg, sn, cs;

    scanf("%lf", &grad);
    grad = grad * M_PI  / 180;
    sn = sin(grad);
    cs = cos(grad);
    tg = sn / cs;

    printf("Tangenta este: %lf, sinusul este %lf, iar cosinusul este: %lf", tg, sn, cs);

    return 0;
}
