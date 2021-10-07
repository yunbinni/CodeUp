#include <stdio.h>

int main(){
 
    char ch;
    int num;
    int sum = 0;
    scanf("%d",&num);
    sum = num;
    for(int i = 0;;i++){
        scanf("%c",&ch);
        
        if(ch == '+'){
            scanf("%d",&num);
            sum += num;
        }
        
        else if(ch == '-'){
            scanf("%d",&num);
            sum -= num;
		}
        else if(ch == '/'){
            scanf("%d",&num);
            sum /= num;
		}
        else if(ch == '*'){
            scanf("%d",&num);
            sum *= num;
		}
        else if(ch == '='){
            printf("%d",sum);
            break;
        }
    }
    return 0;
}

//풀이에 도움을 주신 이티의 골방님 감사합니다.
//by-man.tistory.com/291?category=861937