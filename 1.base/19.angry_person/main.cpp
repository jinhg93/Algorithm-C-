#include <stdio.h>

int main(){
    freopen("G:\\Git\\Algorithm-C-\\1.base\\19.angry_person\\input.txt", "rt", stdin);
    int n, h[101], cnt=0, max;

    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        scanf("%d", &h[i]);
    }

    // �迭 �ڿ��� ���� �����ΰ��鼭 max���� ã�� 
    max = h[n]; 

    for(int i=n-1; i>=1; i--){
        // ���� �ջ���� �� ũ�� �г���������
        if(h[i] > max){
            max = h[i];
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;

}