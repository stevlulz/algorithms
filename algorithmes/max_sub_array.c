//
// Created by seyyidahmed on 4/20/18.
//

#include "max_sub_array.h"
void max_subarray(int t[LEN],int*result,int* tmp,int index){
    if(LEN == 1){
        *result = t[0];
        return;
    }
    else
    {

        int z;
        z = t[index];
        *tmp += z;
        if(index == LEN-1){
            if(*result < *tmp)
                *result = *tmp;

            return;
        }

        if(*tmp < 0)
            *tmp = 0;
        else if(*result < *tmp)
            *result = *tmp;

            max_subarray(t,result,tmp,++index);

    }
}
//22342868