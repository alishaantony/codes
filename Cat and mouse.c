
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,a[100],b[100],c[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d", &a[i],&b[i],&c[i]);
    if(abs(c[i]-a[i])>abs(c[i]-b[i]))
    {
        printf("Cat B\n");
    }
    else if (abs(c[i]-a[i])<abs(c[i]-b[i]))
        printf("Cat A\n");
    else
        printf("Mouse C\n");
    }
}
