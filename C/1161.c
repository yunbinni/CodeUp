#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    
    char *s1, *s2, *s3; // "Ȧ¦ �ؽ�Ʈ ���� pointer ���� 
    
    if(a%2==0) s1 = "¦��"; else s1 = "Ȧ��";
    if(b%2==0) s2 = "¦��"; else s2 = "Ȧ��";
    if(s1 == s2) s3 = "¦��" ; else s3 = "Ȧ��"; // XOR
    
    
    printf("%s+%s=%s", s1, s2, s3);
    return 0;
}