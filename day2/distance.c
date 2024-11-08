// add distances given in ft and in
#include <stdio.h>

typedef struct
{
    int feet;
    int inches;
} Distance;

void add(Distance *d)
{

    if (d->inches >= 12)
    {
        d->feet += d->inches / 12;
        d->inches = d->inches % 12;
    }
}

int main()
{
    Distance dist;

    printf("Enter feet: ");
    scanf("%d", &dist.feet);
    printf("Enter inches: ");
    scanf("%d", &dist.inches);

    add(&dist);

    printf("New distance: %d feet %d inches\n", dist.feet, dist.inches);

    return 0;
}
