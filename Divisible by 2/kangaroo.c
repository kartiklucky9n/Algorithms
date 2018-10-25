#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int x1,x2,v1,v2,a;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);

    if(v1>v2&&abs(x2-x1)%abs(v2-v1)==0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
