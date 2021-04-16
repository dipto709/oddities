#include<stdio.h>
main()
{
    int n,ara[10],i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&ara[i]);
        if(ara[i]%2 == 0){
            printf("%d is even\n",ara[i]);
            }
        else printf("%d odd\n",ara[i]);
        }
    }
    