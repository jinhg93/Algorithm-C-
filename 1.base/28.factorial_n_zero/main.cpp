#include <stdio.h>

int main(){
    int n, tmp, j, cnt_2=0, cnt_5=0;

    scanf("%d", &n);

    // n!�� ���μ� ���� �� ���� ī����
    for(int i=2; i<=n; i++){
        tmp = i;
        j=2;

        while(1){
            if((tmp%j)==0){
                if(j==2) cnt_2++;
                else if(j==5) cnt_5++;
                
                tmp=tmp/j;
                
            }
            else{
                j++;
            }

            if(tmp==1) break;
        }
    }

    if(cnt_2 < cnt_2) printf("%d\n", cnt_2);
    else printf("%d\n", cnt_5);

    return 0;
}

/*
int ������ 1000!�� �ְ� ���� 0�� ���� �Ұ���!!(�����÷ο�)
���μ� ���� �� (2,5)�� ���� ī����
*/