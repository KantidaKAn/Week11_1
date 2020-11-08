#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int nub(char *str) {
	int count=0;
	while (str[++count] != '\0');
	return count;
}
void az(char* str) {
	char atoz[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (int i = 0; i < nub(str); i++) {
		for (int j = 0; j < 26; j++) {
			if (str[i] == atoz[j]||str[i]==atoz[j]+32) {
				printf("%d ", j + 1);
			}
		}
	}
}

int main() {
	char str[1000];
	scanf("%[^\n]", str);
	az(str);
	return 0;
}