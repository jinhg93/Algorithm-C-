#include <stdio.h>

int main(){
    freopen("G:\\Git\\Algorithm-C-\\2.sort\\32.selection_sort\\input.txt", "rt", stdin);
    int a[100];
    int n, idx,i,j, tmp;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    
    for(i =0; i<n; i++){
        idx = i;

        // �ڱ� �ں��� ���� ���� �ִ��� Ȯ��
        for(j = i+1; j<n ; j++){
            // ���� ���� �����ϸ� idx�� j�� ��ü  
            if(a[j] < a[idx]) idx = j;
        }

        // ���� ���� ���� i�� ��ġ �ٲ�
        tmp = a[i];
        a[i] = a[idx];
        a[idx] = tmp;
    }

    for(i=0; i<n; i++){
        printf("%d", a[i]);
    }

    return 0;
}   