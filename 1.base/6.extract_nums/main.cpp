#include <stdio.h>

int main(){
    // freopen("G:\\Git\\Algorithm-C-\\1.base\\6.extract_nums\\input.txt", "rt", stdin);
    char a[100];

    int result = 0, cnt = 0;

    scanf("%s", &a);

    for(int i=0; a[i] != '\0'; i++){ // a[i] �� null �� �ƴҶ�!
        if(a[i] >= 48 && a[i] <= 57){ // a[i]�� ascii�� ���� 
            result = result * 10 + (a[i]-48); // result�� �������� ��ĭ�� �ű�
        } 
    }

    printf("%d\n", result);

    // ����� ���� 
    for(int i =1; i<= result; i++){
        if((result % i) == 0){
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}