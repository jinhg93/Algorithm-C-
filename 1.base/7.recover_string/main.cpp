#include <stdio.h>


int main(){
    freopen("G:\\Git\\Algorithm-C-\\1.base\\7.recover_string\\input.txt", "rt", stdin);

    char a[101], b[101];

    int pos = 0;

    // �κкκ� ���Ⱑ ���ԵǾ������Ƿ� �ٷ� �޾ƾ���
    gets(a);

    // ������ �����ϰ� ���� �ܾ b �迭�� ����
    for(int i=0; a[i] != '\0'; i++){
        if(a[i] != ' '){
             // �빮���� ���
             if(a[i] >= 65 && a[i] <= 90){
                // b[pos] �� a[i]�� �빮�ڷ� ���� �� pos�� 1 ����
                b[pos++] = a[i]+32; // A = 65, a = 97
            } 
            // �ҹ����� ��� �״�� ����
            else{
                b[pos++] = a[i];
            }
        }
    }
    // ������ pos ������ null ����
    b[pos] = '\0';

    printf("%s\n", b);

    return 0;
}