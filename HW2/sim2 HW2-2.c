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
int success1(int*, int);
int success2(int);
int main()
{
    int N;
    printf("number of N:");
    scanf("%d",&N);

    float p[31] = {0}, Mn = 0;
    int T[32]={0};
    int E[N];
    float a = 0;
    int m = 0;
    srand(time(NULL));

    for (int i=0; i<N; i++){
        success1(&T[0], m);
        E[i] = success2(m);
    }
    for (int i = 0; i < 31; i++)
        printf("T[%d]=%d\n", i, T[i]);
          
    for (int i=0; i<N; i++)
        a = a + E[i];

    Mn = a / N;
    printf("Mn=%f\n",Mn);

    float var[N], b=0, c=0;
    for (int i=0; i<N; i++){
        var[i] = (E[i] - Mn) * (E[i] - Mn);
        b = b + var[i];
    }
    c = b / (N - 1);
    printf("var(N)=%f\n", c);
}

float random(){
    float max = 1.0;
    float min = 0.0; 
    float x=min +((float)rand()/(RAND_MAX)) *(max-min);
    return x;
}

int success1(int* T, int m){
    float x=random();
    if (x < 1 / 10.0) 
        return T[m] = T[m] + 1;
    else if (m < 30)
        success1(&T[0], m + 1);
    else
        T[30] = T[30] + 1;
}

int success2(int m){
    float x=random();
    if (x < 1 / 10.0) 
        return m + 1;
    else 
        return success2(m + 1);
}