#include <stdio.h>

int main(){
    char data[2001];
    // 공백을 포함하여 문자열을 키보드로(stdin) 입력받는 함수
    fgets(data, 2000, stdin);
    printf("%s", data);
    return 0;
}