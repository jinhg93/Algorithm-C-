#include <stdio.h>
#include <algorithm>

// ���ĺ��� ī��Ʈ �ؼ� �迭�� ����
// A ~ Z: 65-90, a-z : 97-122
// a[52] <- �빮�� �ҹ���
// b[52] �� �迭�� ����� ���� ������ �Ƴ��׷�
int a[60], b[60];

int main(){
    char str[100];

    // ù��° ���ڿ� �б�
    scanf("%s", &str);

    for(int i=0; str[i]='\0'; i++){
        // �빮���� ���
        if(str[i]>=65 && str[i] <= 90){
            a[str[i]-64]++; 
        }

        // �ҹ����� ���
        if(str[i]>=97 && str[i] <= 122){
            a[str[i]-70]++; 
        }
    }

    // �ι�° ���ڿ� �б�
    scanf("%s", &str);

    for(int i=0; str[i]='\0'; i++){
        // �빮���� ���
        if(str[i]>=65 && str[i] <= 90){
            b[str[i]-64]++; 
        }

        // �ҹ����� ���
        if(str[i]>=97 && str[i] <= 122){
            b[str[i]-70]++; 
        }
    }

    // ��   
    for(int i=1; i<=52; i++){
        if(a[i]!=b[i]){
            printf("NO\n");
            exit;
        }
    }
    printf("YES\n");

    return 0;
}