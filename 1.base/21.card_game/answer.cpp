// lastwin ������ �ϳ� �ΰ�, ����� ���ڸ� ���

#include <stdio.h>

int main(){
    freopen("G:\\Git\\Algorithm-C-\\1.base\\21.card_game\\input.txt", "rt", stdin);
    int A[10], B[10], as =0, bs=0, lw=0;


    // ī�� �Է� �ޱ�
    for(int i=0; i<10; i++){
        scanf("%d", &A[i]);
    }

    for(int i=0; i<10; i++){
        scanf("%d", &B[i]);
    }

    // ���� ���
    for(int i=0; i<10; i++){
        // a�� �¸�
        if(A[i] > B[i]){
            as += 3;
            lw = 1; // 1 = A�� ���
        }

        // b�� �¸�
        else if (B[i] > A[i]){
            bs += 3;
            lw = 2; // 2 = B�� ���
        } 
        // ����
        else {
            as++;
            bs++;
        }
    }  

    // ��� ���
    printf("%d %d\n", as, bs);

    if(as==bs){
        if(lw == 0) printf("D\n");
        else if(lw == 1) printf("A\n");
        else printf("B\n");
    }
    else if(as > bs) printf("A\n");
    else printf("B\n");

}