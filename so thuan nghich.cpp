#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char s[100];
int tn (char s[]) {
	int l=0, r=strlen(s)-1;
	while(l!=r) {
		if(s[l]!=s[r]) {
			return 0;
		}
		++l;
		--r;
	}
	return 1;
}
int main () {
	while(gets(s)!=NULL) {
		if(tn(s)) printf("YES");
	    else printf("NO");
	}
}
