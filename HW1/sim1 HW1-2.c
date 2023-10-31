#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Two real numbers are selected. The first real number, x, is selected at random from the interval [0.5,2.5], and the second real number, y, is selected at random from the interval [-1.5,1.5]. What is the probability that x - y < 0.5? 
//(a) Derive the result theoretically.
//(b) Write a simulation code to find the answer using relative frequency by preforming the simulation N=10000 times. Compare your simulation result with the theoretical answer from part (a). 
int main()
{
    srand((unsigned int)time(NULL));
    float max_x = 2.5;
    float min_x = 0.5;
    float max_y = 1.5;
    float min_y = -1.5;
    float x,y; 
    int a=0;
    for (int i=0;i<10000;i++){
        x = min_x +((float)rand()/(float)(RAND_MAX)) *(max_x-min_x);
        y = min_y +((float)rand()/(float)(RAND_MAX)) *(max_y-min_y);
        if (x-y<0.5)
            a=a+1;
        }
    printf("X-Y<0.5:%d times",a);
    return 0;                                                                  
}

