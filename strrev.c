#include<stdio.h>
int main(void)
{
    int i,n,ans=1;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        ans=ans*i;
    }
    printf("Fact is :%d",ans);
    return 0;
}
