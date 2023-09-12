#include <stdio.h>

int main()
{
    int x0, y0, x1, y1, distance;
    scanf("%d %d %d %d\n", &x0, &y0, &x1, &y1);
    distance = (x1-x0)+(y1-y0);
    printf("%d", distance);
    return 0;
};
