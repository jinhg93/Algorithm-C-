#include <stdio.h>

int main(){
    int n ,cnt = 0;
    bool flag;
    scanf("%d", &n);

    for(int i=2; i<=n; i++){
        flag = true;
        for(int j=2; j*j<=i; j++){ // �߿�!!!!!!
            if((i%j)==0){
                flag = false;
                break;
            }
        }
        if(flag == true) cnt++;
    }
    printf("%d\n", cnt);

    return 0;
}
/*

for(int j=2; j*j<=i; j++){}

36 = 1 * 36
    = 2 * 18 = 18 * 2
    = 3 * 12 = 12 * 3
    = 4 * 9 = 9 * 4
    = 6 * 6
��36 ������ �������. �� j*j <= i ������ Ȯ���ϸ��!!


*/