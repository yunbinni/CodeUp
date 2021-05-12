#include <stdio.h>

int main(){
    int n, k, s, e, u, sum = 0, i;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(i = 0; i < n; i++) {
        arr[i] = 0;
    }
    
    for(i = 0; i < k; i++) {
        scanf("%d %d %d", &s, &e, &u);
        arr[s - 1] += u;
        arr[e] -= u;
    }
    
    // Ãâ·Â
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(i = 0; i < n; i++) {
        sum += arr[i];
        printf("%d ", sum);
    }
    
	return 0;
}