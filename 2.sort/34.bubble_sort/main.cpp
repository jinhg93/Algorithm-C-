#include <stdio.h>

int main(){
    freopen("G:\\Git\\Algorithm-C-\\2.sort\\34.bubble_sort\\input.txt", "rt", stdin);
    int n, a[101],i,j, tmp;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    // bubble sort
    for(i=0; i<n-1;i++){
        for(j=0;j<n-i-1;j++){  // j �� ������ ����!
            if(a[j] > a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}