#include <stdlib.h>
#include <string.h>
#include <stdio.h>
char nation[2000][80];

int compare(const void *p1, const void *p2) {

	return strcmp((char*)p1, (char*)p2);
}

int main()
{
	int N;
	scanf("%d", &N);

	for(int i =0; i<N; i++) {
		scanf("%s", nation[i]);
		char name[80];
		gets( name );
	}

	qsort(nation, N, 80, compare);

	int combo=1;

	for(int i=0; i<N; i++ ) {
		if(strcmp(nation[i], nation[i+1]) == 0) {combo++;}
		else {printf("%s %d\n", nation[i], combo); combo =1;}
	}



}
