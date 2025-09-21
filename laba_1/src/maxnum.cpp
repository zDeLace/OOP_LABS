#include "../include/maxnum.h"

int maxnum(int devider, int bound){
    int result = 0;
    if (devider <= 0 || bound < 0)
    return 0;

    for (int i = bound; i > 0; i--){
        if (i % devider ==  0){
        result = i;
        break;
        }
    }
    return result;
}