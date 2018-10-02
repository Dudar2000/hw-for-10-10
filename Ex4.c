#include<stdio.h>
#include<stdlib.h>

int prim, table[100];
int n;


int main ()
{
  printf ("Enter value of elements in array \n");
  scanf ("%d", &n);


  printf ("Write down %d elements\n", n);
  for (int i = 1; i <= n; i++)
    {
      scanf ("%d", &table[i]);

    }
  for (int i = 1; i <= n; i++)
    {
      printf ("%d ", table[i]);
     
    }
    printf("\n");
    prim=table[1];
    for(int i=1;i<=n-1;i++){
      
        table[i]=table[i+1];
     
          printf("%d ",table[i]) ;
      
    }
    table[n]=prim;
     printf("%d ",prim) ;
     
  return 0;
}