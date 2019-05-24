#include"stdio.h"
main()
{
    FILE *pt;
    char ch[19];

    pt=fopen("file.txt","r");

    /*while(!feof(pt))
        {ch=fgetc(pt);
        printf("%c",ch);
        }
        fclose(pt);*/
        while(fgets(ch,8,pt)!=NULL)
        {
            printf("%s",ch);
        }
}
