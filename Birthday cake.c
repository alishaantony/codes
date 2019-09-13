#include<stdio.h>
int main()
{
    int i,n,a[10000],c=0,m=a[0];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
            c=c+1;
    }
    printf("%d",c);

}
