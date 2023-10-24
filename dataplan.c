#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
     double GB_in_plan = atof(argv[1]);
    int current_day = atoi(argv[2]);
    double GB_used_so_far = atof(argv[3]);
    if (GB_in_plan <= 0 || current_day < 1 || current_day > 30 || GB_used_so_far < 0) {
        printf("ERROR: Invalid input values.\n");
        return 1;
    }

    int days_remaining = 30 - current_day + 1;
    double average_daily_use = GB_used_so_far / current_day;
    int avg = 

    printf("%d days used, %d days remaining\n", current_day - 1, days_remaining);
    printf("Average daily use: %.3lf GB/day\n", average_daily_use);
  if (GB_used_so_far > GB_in_plan) {
        printf("You have already met your limit for this month. Looks like you're getting some overage charges...\n");
    } else if (average_daily_use > GB_in_plan / 30) 
    