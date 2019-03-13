#include <stdio.h>

int main(){
	char str[1001];
	scanf("%s",str);
	str[0]=toupper(str[0]);
	puts(str);
	return 0;
}