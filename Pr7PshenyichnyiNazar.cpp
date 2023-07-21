#include <stdio.h>
#include <math.h>

int countIntersectionPoints(int x1, int y1, int r1, int x2, int y2, int r2) {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (distance == 0 && r1 == r2) {
        // Кола співпадають повністю
        return -1;
    } else if (distance > r1 + r2 || distance < fabs(r1 - r2)) {
        // Кола не перетинаються
        return 0;
    } else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        // Кола торкаються ззовні або всередині
        return 1;
    } else {
        // Кола перетинаються в двох точках
        return 2;
    }
}

int main() {
    int x1, y1, r1, x2, y2, r2;
    printf("Введіть координати центра першого кола (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Введіть радіус першого кола (r1): ");
    scanf("%d", &r1);
    printf("Введіть координати центра другого кола (x2, y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Введіть радіус другого кола (r2): ");
    scanf("%d", &r2);

    int result = countIntersectionPoints(x1, y1, r1, x2, y2, r2);
    printf("Кількість точок перетину кола: %d\n", result);

    return 0;
}
