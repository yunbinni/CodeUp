#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    
    char *s1, *s2, *s3; // "È¦Â¦ ÅØ½ºÆ® ´ãÀ» pointer º¯¼ö 
    
    if(a%2==0) s1 = "Â¦¼ö"; else s1 = "È¦¼ö";
    if(b%2==0) s2 = "Â¦¼ö"; else s2 = "È¦¼ö";
    if(s1 == s2) s3 = "Â¦¼ö" ; else s3 = "È¦¼ö"; // XOR
    
    
    printf("%s+%s=%s", s1, s2, s3);
    return 0;
}