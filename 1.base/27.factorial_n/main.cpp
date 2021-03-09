
#include <stdio.h>
#include <vector>

int main(){
    int n, tmp, i, j;

    scanf("%d", &n);

    std::vector<int> chk(n+1);  // 1~n ������ ���� ����, 0���� �ʱ�ȭ

    // 2���� ī����
    for(i =2; i<n; i++){
        tmp=i;
        j=2; 

        while(1){
            if((tmp%j)==0){
                tmp = tmp/j;
                chk[j]++; // �߰ߵ� �μ� �߰�
            }
            else j++;

            if(tmp==1) break;
        }
    }
    
    printf("%d! = ", n);
    for(int i=2; i<=n; i++){
        if(chk[i]!=0) printf("%d ", chk[i]);
    }

    return 0;
}

/* 7!
7 * 6 * 5 * 4 * 3 * 2 * 1 
�� ���ڸ��� ���μ� ���� �� üũ �迭�� ���� ī����
= 7 * (2*3) * 5 *(2*2) * 3 * 2 * 1
*/