#include<stdio.h>
#include<stdlib.h>
//If a fair die is tossed four times, what is the probability that they will show four different faces?
//(a) Derive the result theoretically.==>(1/6)*(1/5)*(1/4)*(1/3)
//(b) Write a simulation code to find the answer using relative frequency by preforming the simulation N=10000 times. Compare your simulation result with the theoretical answer from part (a). 
int main()
{
    
   int m=0;
   int j=0;
while(j<1000){
        int a=0,b=0,c=0,d=0;
        srand(time(NULL));   // Initialization, should only be called once.
        for(int i=0;i<4;i++){  
            int min=1;           // set min number
            int max=6;           // set max number
            int r = rand()%max + min;      // Returns a pseudo-random integer between 0 and RAND_MAX.
                printf("r=%d",r);
            if(a==0)
                a=r;
            else if(b==0)
                b=r;
            else if(c==0)
                c=r;
            else if(d==0)
                d=r;
        }
 printf("a=%d,b=%d,c=%d,d=%d",a,b,c,d); 
       }

       j=j+1;
}
