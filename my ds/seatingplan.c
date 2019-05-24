#include<stdio.h>

int main()
{
    int T,N,ch;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        scanf("%d",&N);

        ch=N%12;
        switch(ch)
        {
            case 0: N-=11;
                   printf("%d WS\n",N);
                   break;

            case 1: N+=11;
                   printf("%d WS\n",N);
                   break;
            case 2: N+=9;
                   printf("%d MS\n",N);
                   break;
            case 3: N+=7;
                   printf("%d AS\n",N);
                   break;
            case 4: N+=5;
                   printf("%d AS\n",N);
                   break;
            case 5: N+=3;
                   printf("%d MS\n",N);
                   break;
            case 6: N+=1;
                   printf("%d WS\n",N);
                   break;
            case 7: N-=1;
                   printf("%d WS\n",N);
                   break;
            case 8: N-=3;
                   printf("%d MS\n",N);
                   break;
            case 9: N-=5;
                   printf("%d AS\n",N);
                   break;
            case 10: N-=7;
                   printf("%d AS\n",N);
                   break;
            case 11: N-=9;
                   printf("%d MS\n",N);
                   break;
        }

    }
    return 0;
}
