#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    struct mas_struct {
        double G;
        double F;
        double Y;
    } functions;
    struct mas_struct item[100];
    double a, x, d, xmin, xmax, s = 0, steps;
    int i = 0;
    char value[100];

    printf("Введите минимальное значение х: ");
    scanf("%s", &value);
    xmin = atof(value);

    printf("Введите максимальное значение x: ");
    scanf("%s", &value);
    xmax = atof(value);

    printf("Введите а: ");
    scanf("%s", &value);
    a = atof(value);

    printf("Введите количество шагов:\n");
    scanf("%s", &value);
    steps = atoi(value);
    s = (xmax - xmin) / (steps - 1);

    i = 0;

    x = xmin;

    while ((x <= xmax) && (i <= steps)) {
        d = (10 * pow(a, 2) + 11 * a * x + 3 * pow(x, 2));
        if (d == (10e-6)) {
            printf("Введите другие значения \n");
            break;
        } else {
        item[i].G = (5 * (-2 * pow(a, 2) + a * x + 3 * pow(x, 2))/d);
        printf("G=%lf\n", item[i].G);
    }
    i++;
    if (i > 100) {
        printf("Массив переполнен.");
        break;
    }
    x += s;
}
printf("__________________________________________\n");

i = 0;

x = xmin;

    while ((x <= xmax) && (i <= steps)) {
        item[i].F = sin(10 * pow(a, 2) - 7 * a * x + pow(x ,2));
        printf("F= %0.18lf\n", item[i].F);
    i++;
    if (i > 100) {
        printf("Массив переполнен.");
        break;
    }
    x += s;
}
printf("__________________________________________\n");

i = 0;

x = xmin;

    while ((x <= xmax) && (i <= s)) {
        item[i].Y = atan(45 * pow(a, 2) + 79 * a * x + 30 * pow(x, 2));
        printf("Y= %lf\n", item[i].Y);
    i++;
    if (i > 100) {
        printf("Массив переполнен.");
        break;
    }
    x += s;
}
    return 0;
}