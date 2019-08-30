// Example without lambda
#include <stdio.h>


float thelist[]={ 3.141, 6.02, 42.0, 0.7 };

// Find average of 2X
float average2x(void)
{
  int i,n=sizeof(thelist)/sizeof(thelist[0]);
  float avg=0.0;
  for (i=0;i<n;i++)
    {
      avg+=2*thelist[i];
      printf("Running sum=%f\n", avg);
    }
  return avg/n;
}
  
// Find avarege of x/3
float averagethird(void)
{
  int i,n=sizeof(thelist)/sizeof(thelist[0]);
  float avg=0.0;
  for (i=0;i<n;i++)
    {
      avg+=thelist[i]/3;
      printf("Running sum=%f\n", avg);
    }
  return avg/n;
}


int main(int argc, char *argv[])
{
  printf("%f\n",average2x());
  printf("%f\n",averagethird());
  return 0;
}
