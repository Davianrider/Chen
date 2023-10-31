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
int main(){
    int N;
    printf("number of N:");
    scanf("%d", &N);
    
    float arr[N];
    int s[10]={0};
    float max_x = 1.0, min_x = 0.0;
    float x, Mn, a = 0.0;
    srand((unsigned int)time(NULL));
    for (int i = 0; i < N; i++){
        x = min_x + ((float)rand() / (float)(RAND_MAX)) * (max_x - min_x);
        arr[i] = x;
        a = a + arr[i];
    }   
    
    for (int j = 0; j < N; j++)
        for(int q = 0; q < 10; q++)
        if (arr[j] <= (q+1) / 10.0 && arr[j] > q / 10.0)
            s[q] = s[q] + 1;
       
    for (int i = 0; i < 10; i++)
        printf("s[%d]=%d\n", i, s[i]);
        
    Mn = a/N;
    printf("Mn=%f\n", Mn);
    
    float var[N], b=0, c=0;
    for (int i=0; i<N; i++){
        var[i] = (arr[i] - Mn) * (arr[i] - Mn);
        b = b + var[i];
    }
    c = b / (N - 1);
    printf("var(N)=%f\n", c);
}
