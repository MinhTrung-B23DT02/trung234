#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main (){
	char s[505];
	gets(s);
	int sum=0;
	for(int i=0;i<strlen(s);i++){
		sum+=s[i]-'0';
	}
	if(sum%3==0) printf("YES\n");
	else printf("NO\n");
}
