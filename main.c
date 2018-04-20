#include <stdio.h>
#include "algorithmes/max_sub_array.h"
int main() {

    //Fill in your array , please make sure that you have modified LEN macro 
    int t[LEN] = {3,-1,2,3,4,-10,20,23,12,123,
                  3,-1,2,3,4,-10,20,23,12,123,
                  3,-1,2,3,4,-10,20,22342343,12,123,
                  3,-1,2,3,4,-1023234,20,-12323,12,123,
                  3,-1,2,3,4,-103,20,23,12,123,
                  3,-1,2,3,4,-10,20,23,12,1223,
                  3,-1,2,3,4,-10,20,23,12,3,
                  3,-1,2,3,4123,-10,20,3,12,123,
                  3,-1,2,3,4,-1350,20,23,12,123,
                  3,-1,2,3,4,-10,20,23,12,123423423};
    int result=0,i=0,tmp=0;
    max_subarray(t,&result,&tmp,i);

    printf("Maximum subArray  is  : %d\n",result);

    return 0;
}