#include <stdio.h>

int main() {
    double t1, t2, t3;
    printf("Print time t1-t3\n");
    scanf("%lf %lf %lf", &t1, &t2, &t3);

    double time = (1.0 / t1) + (1.0 / t2) + (1.0 / t3);
    double t_time = 1.0 / time;

    printf("Time: %.2lf godin", t_time);

    return 0;
}
