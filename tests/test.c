#include "next_turn.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    const int TESTCOUNT = 11;
    int test_data[11][2] = {{1836311903, 800000000}, {1836311903, 701408732}, {9300000, 12}, {921, 4},
                            {73552, 812}, {72, 8}, {43, 40}, {5128972, 14}, {2345611, 10}, {4181, 100}, {4181, 1600}};
    int answ_data[11] = {701408733, 1, 5, 2, 1, 1, 1, 13, 2, 1, 1597};
    for (int i = 0; i < TESTCOUNT; ++i) {
        int result = next_turn(test_data[i][0], test_data[i][1]);
        if (result != answ_data[i]) {
            printf("TEST %d FAILED\n"
                   "EXPECTED: %d GIVEN: %d\n", i, answ_data[i], result);
            return 1;
        }
    }
    printf("ALL TEST PASSED\n");
    return 0;
}