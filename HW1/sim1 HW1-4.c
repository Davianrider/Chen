#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//A fair coin is continuously flipped. What is the probability that the pattern T,H,H,H occurs before the pattern of H,H,H,H?
//(a) Derive the result theoretically. 
//(b) (b) Write a simulation code to find the answer using relative frequency by preforming the simulation N=10000 times. Compare your simulation result with the theoretical answer from part (a).  
int main(int argc, char *argv[])
{
    srand(time(NULL));   // Initialization, should only be called once.
    int j=0,m=0;
    while (j<10000){
        int a=0,b=0,c=0,d=0;
            for(int i=0;i<4;i++){  
                int r = rand()%(2-0) + 0;      // Returns a pseudo-random integer between 0 and RAND_MAX.
                    // printf("r=%d",r);
                if(a==0)
                    a=r;
                else if(b==0)
                    b=r;
                else if(c==0)
                    c=r;
                else if(d==0)
                    d=r;
            }
        if (a==0)
            m=m+1;
        else if (b==0)
            m=m+1;
        else if (c==0)
            m=m+1;
        else if (d==0)
            m=m+1;
        j=j+1;            
    }
    printf("m=%d",m);
}

