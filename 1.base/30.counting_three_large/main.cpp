/*
lt cur rt
 �� �� ��
0 0 0 1
0 0 0 2
0 0 0 3
 ...
0 0 3 0
0 0 3 1
0 0 3 2 
 ...
0 1 3 0
0 1 3 1
 ...
5 3 6 7

����� ���� �̿��Ͽ� �ذ�

1] cur = 10�� �ڸ�
1) 10�� �ڸ��� 3���� ū ��� ���
5 3 6 7

0 0 3 x
0 1 3 x
 ...
5 3 3 x 
=> 0~53���� 54���� ��쿡 10���� ��Ÿ�� 54 * 10 = 540 ����
=> (lt+1) * 10

2) 10�� �ڸ��� 3���� ���� ���
5 3 2 7

0 0 3 x
...
5 3 2 x

=> lt * 10

3) 10�� �ڸ��� 3�� ���
5 3 3 7 

5 3 3 (0~7)
=> lt * 10 + (rt+1)

...

2] cur = õ�� �ڸ�
    5 3 6 7 
    cur = 5
    rt = 367
    k = 1000

3 0 0 0 
    ...
3 9 9 9 => 1000��

(lt+1)*K 
lt*K
lt*K + (rt+1)

k=1

while(lt != 0){
    lt = n / (k*10);
    cur = (n/k)%10;
    rt = n % k;

    if(cur > 3){res += (lt+1)*k;}
    else if (cur < 3){ res += lt*k; }
    else {res += lt*k + (rt+1); }
}


*/

#include <stdio.h>

int main(){
    int n, k, lt = 1, cur, rt, res = 0;
    scanf("%d", &n);

    k = 1;

    while(lt != 0){
        lt = n/(k*10);
        cur = (n/k)%10;
        rt = n % k;

        if(cur > 3){
            res += (lt+1)*k;
        } else if(cur < 3){
            res += lt*k;
        } else {
            res += lt*k + (rt+1);
        }
        k = k*10;
    }

    printf("%d", res);

    return 0;
}