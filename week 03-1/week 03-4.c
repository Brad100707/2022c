#include <stdio.h>
char line[1000];
int main()
{
    int t =1;
    while(scanf("%s", line)==1) {
        if(t>1) printf("\n");
        printf("車廂%d讀到一筆資料喔\n");
        t++;
    }
    return 0;
}
