#include <stdio.h>

int day_fibonaci(int i)
{
   if(i == 0)
   {
      return 0;
   }
   if(i == 1)
   {
      return 1;
   }
   return day_fibonaci(i-1) + day_fibonaci(i-2);
}

int  main()
{
    int i,n;
		printf("n=?");scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
       printf("%d\t%n", day_fibonaci(i));
    }
}