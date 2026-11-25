#include <stdio.h>
#include <time.h>

struct Field { float moisture, health; float latitude, longitude; };

int main() { struct Field f[5] = { {20, 60, 18.5204, 73.8567}, {45, 85, 18.5210, 73.8570}, {25, 50, 18.5220, 73.8580}, {50, 90, 18.5230, 73.8590}, {15, 40, 18.5240, 73.8600} };

int n = 5, irrigation = 0, attention = 0;
int i;

time_t t;
time(&t);

printf("\n====================================\n");
printf("       FIELD MONITORING REPORT\n");
printf("====================================\n");

printf("Date: %s", ctime(&t));

for(i = 0; i < n; i++)
{
    if(f[i].moisture < 30)
    {
        irrigation++;
    }

    if(f[i].health < 70)
    {
        attention++;
    }
}

printf("Total Fields Monitored : %d\n", n);
printf("Fields Requiring Irrigation : %d\n", irrigation);
printf("Fields Requiring Attention : %d\n", attention);
printf("Crops with Health Below 70%% : %d\n", attention);

printf("\n-----------------------------------------------------\n");
printf("Crop No.   Latitude    Longitude      Status\n");
printf("-----------------------------------------------------\n");

for(i = 0; i < n; i++)
{
    if(f[i].moisture < 30)
    {
        printf("%-10d %-11.4f %-13.4f Irrigation Required\n",
               i + 1, f[i].latitude, f[i].longitude);
    }
}

printf("-----------------------------------------------------\n");
printf("       REPORT GENERATED SUCCESSFULLY\n");
return 0;
}
