#include <stdio.h>

int main(){
    // ������ ����ϴ� ��������, ������� �ʰ� �ذ� ������
    /* 
    - cnt = 0 '(' = +1, ')' = -1
    �� ���� ����� �´ٸ� ���� ����� 0�� ��
    - �������� 0�̶�� ������ �ùٸ� ��ȣ�� �ƴ�!! ex) (()))( = 0
    ��, ������ �ǹ����� ���� �Ұ����� ��ȣ��! -> NO
    */ 
    freopen("G:\\Git\\Algorithm-C-\\1.base\\8.correct_bracket\\input.txt", "rt", stdin);
    char a[100];
   
    int cnt = 0;
    scanf("%s", &a);

    for(int i=0; a[i]!='\0';i++){
        // ( = +1, ) = -1
        if(a[i]=='('){
            cnt++;
        } else if(a[i]==')'){
            cnt--;
        }

        // cnt�� ������� ���� �Ұ� ��ȣ
        if(cnt < 0){
            break;
        }
    }
    
    if(cnt == 0) printf("YES\n");
    else printf("NO\n");

    return 0;
}