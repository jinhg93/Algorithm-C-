#include <stdio.h>

int cnt[50001]; // 50001�� ���� ���� ü ����

int main(){

    /* my answer (n^2�� �ð� ���⵵!)
    int n, cnt = 0;

    scanf("%d", &n);

    // 1 to N ������ �ڿ����� ��� ���� ���
    for(int i=1; i<=n; i++){ 
        cnt = 0;
        for(int j=1; j<-=; j++){
            if((i % j)==0){
                cnt++;
            }
        }
        printf("%d ",cnt);
    }
    */

    // �����佺�׳׽��� ü�� ����� ��� ���
    /*
    1�� ����� ������ ����++,
    2�� '' ++,
    ... ���

    */
    
    int n;

    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j=j+i){  // j�� i�� ���
            cnt[j]++;
        }
    }

    for(int i=1; i<=n; i++){
        printf("%d ", cnt[i]);
    }

    return 0;
}