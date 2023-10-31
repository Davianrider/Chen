#include<stdio.h>
#include<stdlib.h>
//If a fair die is tossed four times, what is the probability that they will show four different faces?
//(a) Derive the result theoretically.==>(6/6)*(5/6)*(4/6)*(3/6)=360/1296=0.28
//(b) Write a simulation code to find the answer using relative frequency by preforming the simulation N=10000 times. Compare your simulation result with the theoretical answer from part (a). 
int main()
{
   int j=0;
   int f=0,s=0;         //s is 4 difference,f is not.
   srand(time(NULL));   // Initialization, should only be called once.
   while(j<10000){
        int a=0,b=0,c=0,d=0;
        int i=0;
        for(i;i<4;i++){ 
            int min=1;           // set min number
            int max=6;           // set max number
            int r = rand()%max + min;      // Returns a pseudo-random integer between 0 and RAND_MAX.
                if(a==0){
                a=r;}
                else if(b==0){
                    b=r;}
                else if(c==0){
                    c=r;}
                else if(d==0){
                    d=r;}
                }
            if(a==b){
                f=f+1;}
                else if(a==c){
                f=f+1;}        
                else if(a==d){
                f=f+1;} 
                else if(b==c){
                f=f+1;} 
                else if(b==d){
                f=f+1;} 
                else if(c==d){
                f=f+1;} 
                else{
                s=s+1;}
        j=j+1;
          }
     printf("s=%d,f=%d,\n",s,f);      
}
