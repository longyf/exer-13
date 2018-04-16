#ifndef find_path_2_h
#define find_path_2_h
#include <iostream>
using namespace std;

int func(int rows, int cols, int k) {
    int count=0;

    for (int i=0; i!=rows; ++i) {
        for (int j=0; j!=cols; ++j) {

            int temp_row=i;
            int temp_col=j;
            int sum=0;
            while (temp_row!=0) {
                sum+=temp_row%10;
                temp_row/=10;
            }
            while (temp_col!=0) {
                sum+=temp_col%10;
                temp_col/=10;
            }

            if (sum<=k) count++;
        }
    }

    return count;
}
#endif
