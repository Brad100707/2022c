#include <stdio.h>
char tableA[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
char tableB[]="A   3  HIL JM O   2TUVWXYZ1SE Z  8 ";
char mirror_char( char c)
{
    for(int i=0; tableA[i]!=0; i++) {
        if(c==tableA[i]) {return tableB[i];}
    }
    return ' ';
}

int main()
{
    char c;
    scanf("%c", &c);
    char ans=mirror_char(c);
    printf("√Ëπ≥¨O:%c\n", ans);
}
