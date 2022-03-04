
#include<stdio.h>
#include<string.h>
char tableA[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
char tableB[]="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char line[1000];
char mirror_char(char c)
{
    for(int i=0;tableA[i] != 0;i++)
    {
        if(c==tableA[i])
        return tableB[i];
    }
    return ' ';
}
int palindrome()
{
    int N=strlen(line);
    for(int i=0;i<N;i++)
    {
        if(line[i]!=line[N-1-i])
        return 0;
    }
    return 1;
}
int mirror()
{
    int N=strlen(line);
    for(int i=0;i<N;i++)
    {
        if(mirror_char(line[i])!=line[N-1-i])
        return 0;
    }
    return 1;
}
int main()
{
    while(scanf("%s",line)==1)
    {
        int p=palindrome();
        int m=mirror();
        if(p==1&&m==1) printf("%s -- is a mirrored palindrome.\n\n",line);
        if(p==1&&m==0) printf("%s -- is a regular palindrome.\n\n",line);
        if(p==0&&m==1) printf("%s -- is a mirrored string.\n\n",line);
        if(p==0&&m==0) printf("%s -- is not a palindrome.\n\n",line);
    }
}


//== 以上是自[瘋狂雲端]下載的資料 請自行剪貼到各檔中進行寫作
/*
//使用Java的考生請注意，最外層的類別(class)需命名為 main 。
//如果遇到超乎想像的狀況，請更改編譯器試看看!! 各編譯器特性不同!!
//預設測資、隨機測資、固定測資是用來幫助除錯用的。批改時，只看暗中測資是否通過!!

//*/
