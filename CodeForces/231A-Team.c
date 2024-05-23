#include <stdio.h>
int main()
{
    int k,a,b,c,d,count=0;
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a==1 && b==1)||(b==1 && c==1)||(c==1 && a==1))
        count++;
    }
 
    printf("%d\n",count);
    return 0;
}
