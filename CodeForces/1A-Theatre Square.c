#include<stdio.h>
int main()
{
      long long int m,n,a,x,y,z;
      scanf("%lld%lld%lld",&m,&n,&a);
      if(m%a!=0)
            x=m/a+1;
      else
            x=m/a;
      if(n%a!=0)
            y=n/a+1;
      else
            y=n/a;
      z=x*y;
      printf("%lld",z);
      return 0;
}
