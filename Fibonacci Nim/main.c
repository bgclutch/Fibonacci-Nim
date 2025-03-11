#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "next_turn.h"

int main(){
    int total, possible;
    int res = scanf("%d %d", &total, &possible);
    assert(res == 2);
    total = next_turn(total, possible);
    printf("%d\n", total);
    return 0;
}

