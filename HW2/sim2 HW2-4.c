#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int random();
int main()
{
    int N;
    printf("number of N:");
    scanf("%d",&N);

    float f = 0.0;
    int s = 0, a = 0; 
    int T[365];
    srand(time(NULL));

    for(int i = 0; i<N; i++ ){
        
        for(int j = 0; j < 365; j++ ) 
        T[j] = 0;
        
        for(int j = 0; j < 23; j++){
        a=random();
        T[a-1] = T[a-1] + 1;
        }

        for(int i = 0; i < 365; i++)
            if (T[i] > 1){
                s++;
                break;
            }      
    }
    f = (float)s / N;
    printf("the probability=%f", f);
}

int random(){
    int max = 365;
    int min = 1; 
    int x = min + rand() % max;
    return x;
}

