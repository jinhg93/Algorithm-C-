#include <stdio.h>

int main(){
    freopen("G:\\Git\\Algorithm-C-\\1.base\\20.r_s_p\\input.txt", "rt", stdin);
    int n;
    int a[101], b[101];

    // nȸ ���������� 
    scanf("%d", &n);

    // a�� �ൿ 
    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);
    }
    // b�� �ൿ 
    for(int i=1; i<=n; i++){
        scanf("%d", &b[i]);
    }
    
    // �¸� �Ǻ�
    for(int i=1; i<=n; i++){

        // ����� ���
        if(a[i]==b[i]){printf("D\n");}

        // A�� �̱�� ����
        else if(a[i]==1 && b[i]==3){printf("A\n");} // ���� > ��
        else if(a[i]==2 && b[i]==1){printf("A\n");} // ���� > ����
        else if(a[i]==3 && b[i]==2){printf("A\n");} // �� > ����

        // �� �ܿ��� B�� �̱�� ���ۿ� ����
        else printf("B\n");
    }

    return 0;
}