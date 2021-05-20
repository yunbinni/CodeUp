#include <stdio.h>

int main(){
    int arr[4];
    for(int i = 0; i < 4; i++){
        scanf("%d", &arr[i]);
    }
    
    switch(arr[0] + arr[1] + arr[2] + arr[3]){
        case 1:
            printf("도");
            break;
        case 2:
            printf("개");
            break;
        case 3:
            printf("걸");
            break;
        case 4:
            printf("윷");
            break;
        default:
            printf("모");
            break;
    }
	return 0;
}