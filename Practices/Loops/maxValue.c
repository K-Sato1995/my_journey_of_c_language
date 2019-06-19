# include<stdio.h>

#define N 5

int main(void) {
  int arr[N] = {2,3,45,43,60};
  int max;

  max = arr[0];

  int i;
  for(i=1; i<N; i++ )
  {
    if(arr[i] > max)
    {
      max = arr[i];
    }
  }

  printf("The max value is %d", max);
}
