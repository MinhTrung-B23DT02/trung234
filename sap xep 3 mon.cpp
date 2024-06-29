#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct mon {
	char ma[100];
	char ten[100];
	char hinhthuc[100];

};
typedef struct mon mon;
int cmp(const void *a, const void *b) {
	mon *x=(mon*) a;
	mon *y=(mon*) b;
	return strcmp(x->ten,y->ten);
}
int main () {
	int n;
	scanf("%d",&n);
	getchar();
	mon a[n];
	for(int i=0; i<n; i++) {
		gets(a[i].ma);
		gets(a[i].ten);
		gets(a[i].hinhthuc);
	}
	qsort(a, n , sizeof(mon),cmp);
	for(int i=0; i<n; i++) {
		printf("%s %s %s\n",a[i].ma,a[i].ten,a[i].hinhthuc);
	}
}
