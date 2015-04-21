#include <stdio.h>
static int process_mode = 0;
static double distance = 0;
static double consumption = 0;

void set_mode(mode)
{
    if (mode == 0 || mode == 1) {
        process_mode = mode;
    } else {
        printf("Invalid process_mode specified. Mode 1 (US) used.\n");
        process_mode = 1;
    }
}

void get_info()
{
    switch (process_mode) {
        case 0:
            printf("Enter distance traveled in kilometers: ");
            scanf("%lf", &distance);
            printf("Enter fuel consumption in liters: ");
            scanf("%lf", &consumption);
            break;
        case 1:
            printf("Enter distance traveled in miles: ");
            scanf("%lf", &distance);
            printf("Enter fuel consumption in gallons: ");
            scanf("%lf", &consumption);
            break;
        default:
            printf("Enter distance traveled in miles: ");
            scanf("%lf", &distance);
            printf("Enter fuel consumption in gallons: ");
            scanf("%lf", &consumption);
            break;
    }
}

void show_info()
{
    if (process_mode == 0) {
        printf("Fuel consumption is %.2lf liters per 100 km\n", consumption / distance * 100);
    } else {
        printf("Fuel consumption is %.2lf miles per gollon.\n", distance / consumption);
    }
}