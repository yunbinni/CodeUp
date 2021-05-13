#include <stdio.h>

int main() {
	char name[20];
	int age;
	char dep;
	float key;

	scanf("%s\n", name);
	scanf("%d\n", &age);
	scanf("%c\n", &dep);
	scanf("%g", &key);

	printf("%s\n", name);
	printf("%d\n", age);
	printf("%c\n", dep);
	printf("%g", key);

	return 0;
}