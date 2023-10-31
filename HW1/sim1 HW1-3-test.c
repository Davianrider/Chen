#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//The probability of winning a single toss of the die is p. A starts, and if he fails, he passes the die to B, who then attempts to win on her toss. They continue tossing the die back and forth until one of them wins.
//(a) What is the probability that A wins finally? Derive the result theoretically.
//(b) Assume p=0.4, write a simulation code to find the answer using relative frequency by preforming the simulation N=10000 times. Compare your simulation result with the theoretical answer from part (a). 
float random();
float A_win(int);
int B_win(int);
int main()
{
    int a=0;
    srand((unsigned int)time(NULL));
    for (int i=0;i<5;i++){
        A_win(a);
    }
//    printf("A wins %d times.",a);
}

float random(){
    float max = 1.0;
    float min = 0.0;

    return min +((float)rand()/(RAND_MAX)) *(max-min);
}

float A_win(int m){
    float x=0;
    x=random();
    printf("A= %d\n",x);
    // if (x < 1 / 2.5) 
    //     return m=m+1;
    // else
    //     B_win(m);
}

int B_win(int n){
    float x=random();
    if (x > 1 / 2.5) 
        A_win(n);
    else
        return n;
}