#include <stdio.h>
#include <math.h>
int main(void) {
    double x0, y0, r, x1, x2, y1, y2; // x0, y0 - centrul cercului

    // printf("Scrie coordonatele centrului cercului, raza si coordonatele celor doua puncte de pe dreapta: \n");
    scanf("%lf %lf %lf %lf %lf %lf %lf", &x0, &y0, &r, &x1, &y1, &x2, &y2);

    double a = y1 - y2, b = x1 - x2;
    double distanta = abs(a*x0 - b*y0 + x1*y2 - y1*x2) / sqrt(a*a+b*b);

    if (r > distanta)
        printf("Dreapta este secanta");
    else if (r == distanta)
        printf("Dreapta este tangenta la cerc");
    else
        printf("Dreapta nu intersecteaza cercul");

    return 0;
}
