#include "next_turn.h"
#include <stdio.h>
#include <stdlib.h>

int next_turn(int total, int possible){
    int fibnums[1000] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    int counter = 0;
    fibnums[0]  = 0;
    fibnums[1]  = 1;

    while (total > fibnums[counter]) {
        if (counter > 10){
            fibnums[counter + 1] = fibnums[counter - 1] + fibnums[counter];
        }
        ++counter;
    }
    --counter;
    int closestfibsum = fibnums[counter];
    int takeme = total - closestfibsum;
    int closestfibtotakeme = 0;
    while ((takeme - closestfibtotakeme) != 0){
        counter = 0;
        for (; takeme >= fibnums[counter]; ++counter){}
        --counter;
        closestfibtotakeme = fibnums[counter];
        if ((takeme - closestfibtotakeme) != 0){
            takeme -= closestfibtotakeme;
        }

    }
    if (takeme > possible){
        takeme = 1;
    }

    return takeme;
}