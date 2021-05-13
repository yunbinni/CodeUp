#include <stdio.h>

int main() {
	char c, h;
	int cnum, hnum;

	scanf("%c%d%c%d", &c, &cnum, &h, &hnum);

	printf("%d", 12 * cnum + hnum);

	return 0;
}