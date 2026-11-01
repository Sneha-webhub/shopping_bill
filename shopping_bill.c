#include <stdio.h>

int main() {
    float p1, p2, p3, t, d, f;
    int q1, q2, q3;

    printf("Enter price & qty for item 1: ");
    scanf("%f %d", &p1, &q1);

    printf("Enter price & qty for item 2: ");
    scanf("%f %d", &p2, &q2);

    printf("Enter price & qty for item 3: ");
    scanf("%f %d", &p3, &q3);

    t = (p1 * q1) + (p2 * q2) + (p3 * q3);

    printf("\n");
    printf("Total: %.2f\n", t);

    if(t > 1000) {
        d = t * 0.1;
        f = t - d;
        printf("Dis: %.2f\n", d);
        printf("Net Amt: %.2f\n", f);
    } else {
        printf("Net Amt: %.2f\n", t);
    }

    return 0;
}