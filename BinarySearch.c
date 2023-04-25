#include<stdio.h>

void main()
{
    int a[20], count = 0;

    for(int i=0; i<20; i++)
    {
        scanf("%d", &a[i]);
    }
    int l=0, r=19,m, s;

    scanf("%d", &s);

    while(l<=r)
    {
        m=(l+r)/2;

        if(a[m]==s)
        {
            printf("The number is: %d\n", a[m]);
            printf("Looped: %d", count);
            break;

        }
        else if(a[m]>s)
        {
            r=m-1;
            count++;
        }
        else
        {
            l=m+1;
            count++;
        }

    }


}
