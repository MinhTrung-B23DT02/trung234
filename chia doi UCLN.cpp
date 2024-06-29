#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

long long gcd(long long a, long long b){
	if(b==0) return a+b;
	else gcd(b,a%b);
}

int main()
{
	char x[505];
	fgets(x, sizeof(x), stdin);
	long long tong1 = 0;
	for(int i = 0; i < (strlen(x) - 1 )/ 2; i++){
		tong1 = tong1 * 10 + (x[i] - '0');
	}
	
	long long tong2 = 0;
	for(int i = (strlen(x))/ 2; i < strlen(x) - 1; i++){
		tong2 = tong2 * 10 + (x[i] - '0');
	}
	printf("%lld", gcd(tong1,tong2)); 
	
	
}

