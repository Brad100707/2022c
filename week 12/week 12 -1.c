#include <stdio.h>

int main()
{
	int n, max=-9999, min=9999;

	for(int i =0; i<20; i++) {
		scanf("%d", &n);

		if(n==0) break;

		if(n>max) max=n;
		if(n<min) min = n;
	}

	printf("[%d,%d]", min,max);
}
