#include <stdio.h>

int ch[10]; // 0���� �ʱ�ȭ�Ǿ�����

int main(){
    int digit, max = -2147000000, res;
    char a[101]; // ���ڷ� ����

    scanf("%s", &a);

    // �ڸ��� ī����
    for(int i=0; a[i]!='\0'; i++){
        digit = a[i]-48; // ascii to int
        ch[digit]++;
    }

    // �ִ� ���� ���
    for(int i=0; i<=9; i++){
        if(ch[i] > max){
            max = ch[i];
            res = i; // �ε��� ��ȣ ����
        }
    }

    printf("%d", res);

    return 0;
}