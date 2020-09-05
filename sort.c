#include <stdio.h>
int main()
{
  int n, array[100], i, j, c,t;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter the elements\n");
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
  for (i = 1 ; i < n ; i++) {
    j = i;
    while (j>0 && array[j-1] > array[j]) {
      t   = array[j];
      array[j]   = array[j-1];
      array[j-1] = t;
      j--;
    }
      for (c = 0; c <= n - 1; c++) {
    printf("%d", array[c]);}
    printf("\n");
  }}
