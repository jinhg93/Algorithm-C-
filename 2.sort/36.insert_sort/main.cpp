#include <stdio.h>

int main(){
    freopen("G:\\Git\\Algorithm-C-\\2.sort\\36.insert_sort\\input.txt", "rt", stdin);

    int n, a[101], i, j, tmp;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++){
        tmp = a[i]; // ������ ���Ҹ� tmp�� ����ִٰ�

        for(j = i-1; j>= 0; j--){   // �� ��ġ�� ã�� ����
            if(a[j] > tmp){          
                a[j+1] = a[j];  // �ڷ� ��ĭ�� �� �̷�
            }
            else break;
        }

        a[j+1] = tmp;   // ��ġ�� ������
    }

    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}