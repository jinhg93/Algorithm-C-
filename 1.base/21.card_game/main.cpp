#include <stdio.h>

int main(){
    //freopen("G:\\Git\\Algorithm-C-\\1.base\\21.card_game\\input.txt", "rt", stdin);

    int a[10], b[10];
    int a_score = 0, b_score = 0;

    // ī�� �Է� �ޱ�
    for(int i=0; i<10; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i<10; i++){
        scanf("%d", &b[i]);
    }

    // ���ھ� ���
    for(int i=0; i<10; i++){
        // a�� �¸�
        if(a[i] > b[i]){
            a_score += 3;
        } 
        // b�� �¸�
        else if (b[i] > a[i]){
            b_score += 3;
        } 
        // ����
        else {
            a_score++;
            b_score++;
        }
    }
    // ��� ���
    printf("%d %d\n",a_score, b_score);

    // ������ ���
    if(a_score==b_score){
        // ���������� �ºΰ� �� ����� ����
        for(int i=10; i>=0; i--){
            if(a[i] > b[i]) {
                printf("A\n");
                return 0;    
            }
            else if (b[i] > a[i]) {
                printf("B\n");
                return 0;
            }
        }
        // ��� ���� ���
        printf("D\n");
        return 0;
    } 
    else if(a_score > b_score) printf("A\n");
    else if (b_score > a_score) printf("B\n");

    return 0;
}