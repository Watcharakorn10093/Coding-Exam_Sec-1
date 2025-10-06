#include <stdio.h>

int main () {

int num_OT_days;
char income_level[30];
float OT_hours_day1;

    printf("***OT and Tax Calculator ***\n");
    printf("Enter number of OT days (1-10):");
     scanf("%d", &num_OT_days);

    printf("Enter OT hours of Day 1:");
        scanf("%2f", &OT_hours_day1);


    printf("...(input continues)...\n");

    printf("Enter OT hours of Day 3:");
    scanf("%f", &OT_hours_day1);
    printf("Enter income Level(L,M,H):");
    scanf("%c", income_level);
    printf("Hello world\n ");
    return 0;
}