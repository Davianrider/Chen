// Generate a sequence of i.i.d. (independently identically distributed) random
// variables U  {U , N  n  1} n which are uniformly distributed over [0,1] for
// N =10000,50000,100000. To verify the results you obtain, for each case of N,
// A. Draw probability distribution histograms which show the relative frequency
// of U in the interval of ( , ], 10
// 1
// 10 10 i i  for i  0,1, ,9.
// B. Compute the sample mean and sample variance. Compare your simulation
// results with the theoretical values.
// Note: For a sequence of i.i.d. random variable X , n 1,2, , N, n     the sample
// mean, N M , and the sample variance, N  , are computed as

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float random();
int success(int);
// void fail(int *,int );
int main()
{
    int N;
    printf("number of N:");
    scanf("%d",&N);

    float p[31] = {0}, Mn = 0;
    int T[N];
    int a = 0, m = 0;
    srand(time(NULL));

    for (int i=0; i<N; i++)
        T[i]=success(m);
        
    
    for (int i = 0; i < N; i++)
        printf("T[%d]=%d\n", i, T[i]);
    

    // for (int i=0; i<N; i++)
    //     T[31] = T[31] + T[i];
    
    // for (int i=0; i<30; i++){
    //     p[i] = 0.1 * pow(0.9, i) * T[i];
    //     p[30] = p[30] + p[i];
    // }
    for (int i=0; i<N; i++)
        a = a + T[N];
    Mn = a / N;
    // printf("a=%d\n",a);
    // printf("Mn=%f\n",Mn);

    float var[N], b=0, c=0;
    for (int i=0; i<N; i++){
        var[i] = (p[i] - Mn) * (p[i] - Mn);
        b = b + var[i];
    }
    c = b / (T[31] - 1);
    printf("var(N)=%f\n", c);
}

float random(){
    float max = 1.0;
    float min = 0.0; 
    float x=min +((float)rand()/(RAND_MAX)) *(max-min);
    return x;
}

int success(int m){
    float x=random();
    if (x < 1 / 10.0) 
        return m + 1;
    else 
        return success(m + 1);
}
