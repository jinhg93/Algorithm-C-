#include <stdio.h>

int main(){
    int n, cnt = 0, tmp, digit;

    scanf("%d", &n);

    for(int i =1; i<=n; i++){
        tmp = i;
        
        while(tmp>0){
            digit = tmp % 10; // tmp�� ���� �ڸ�
            if(digit == 3 ) cnt ++;
            tmp = tmp/10;
        }
    }
    printf("%d", cnt);

    return 0;
}

/*
1. int -> string���� �� �����ְ� 3�� ī��Ʈ?
2. ���� ī��Ʈ 

*/