#include <stdio.h>
#include <stdbool.h>

enum weekday {MON=1, TUE, WED, THU, FRI, SAT, SUN}; 
bool is_weekend (enum weekday today);

int main() {
    enum weekday today;
    today = SAT;
    printf("%d : %d \n", today, is_weekend (today));
    return 0;
}

bool is_weekend (enum weekday today)
{
    if (today == 6 | today == 7) return 1;
    else return 0;
}