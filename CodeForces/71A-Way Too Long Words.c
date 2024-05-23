#include <stdio.h>
#include <string.h>
int main()
{
    int len,k,x;
    char str[101];
    scanf("%d",&x);
    while(x--)
     {
          scanf("%s",&str);
          len = strlen(str);
          if(len>10) printf("%c%d%c\n",str[0],len-2,str[len-1]);
          else printf("%s\n",str);
     }
}
