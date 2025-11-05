/*
Name: Mbugua Anka 
Reg.no:CT100/G/26168*25
Description:2 rows and 2 columns 
*/
#include <stdio.h>

int main() {
    int scores[2][3] = {
        {65, 92, 35},
        {84, 72, 59}
    };

    printf("The elements of the array are:\n");

    for (int i = 0; i < 2; i++) {          
        for (int j = 0; j < 3; j++) {      
            printf("%d ", scores[i][j]);
        }
        printf("\n");  
    }

    return 0;
}
