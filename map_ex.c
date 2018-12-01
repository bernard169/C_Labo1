#include <stdio.h>

long map (long value, long fromLow, long fromHigh, long toLow, long toHigh);

int main (){
    printf ("%d \n", map (5, 0, 10, 0, 50)); //25
    printf ("%d \n", map (2, -5, 5, 1, 10)); //7
    return 0;
}

long map (long value, long fromLow, long fromHigh, long toLow, long toHigh){
    return ((value-fromLow) * (toHigh - toLow) / (fromHigh - fromLow)) + toLow;
} 