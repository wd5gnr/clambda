// Example without lambda, but closer
#include <stdio.h>


float thelist[]={ 3.141, 6.02, 42.0, 0.7 };


float average_apply(float (*fn)(float inp))
{
    int i,n=sizeof(thelist)/sizeof(thelist[0]);
    float avg=0.0;
    for (i=0;i<n;i++)
    {
        avg+=fn(thelist[i]);
        printf("Running sum=%f\n", avg);
    }

    return avg/n;
}


float twox(float x) { return 2*x; }
float xdiv3(float x) { return x/3; }


int main(int argc, char *argv[])
{
  printf("%f\n",average_apply(twox));
  printf("%f\n",average_apply(xdiv3));
  return 0;
}


