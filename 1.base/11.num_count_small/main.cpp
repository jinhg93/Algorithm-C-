#include <stdio.h>

// int to char?
// %�� �̿��ϸ� �� ���� Ǯ�� ����

int main(){
    int n, cnt=0, tmp;

    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        tmp=i;

        // �ڸ��� �и�
        while(tmp > 0){
            tmp = tmp/10;
            cnt++;
        }
    }
    printf("%d",cnt);

    return 0;
}
