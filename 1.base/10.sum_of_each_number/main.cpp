#include <stdio.h>

// �� �ڸ��� �ڿ����� ���� ���ϴ� �Լ�
int digit_sum(int x){
    int tmp, sum=0;
    
    while(x > 0){
        tmp = x%10;
        sum += tmp;
        x = x/10;
    };

    return sum;
}

int main(){
    freopen("G:\\Git\\Algorithm-C-\\1.base\\10.sum_of_each_number\\input.txt", "rt", stdin);

    int n, num, sum, max=-2147000000, res;

    scanf("%d", &n);

    // �� ���ڸ� �Է¹޾� �� �ڸ��� �ڿ��� ���� �ִ����� Ȯ��
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        sum = digit_sum(num);

        if(sum > max){
            max = sum;
            res = num;
        }
        // �ڸ����� �ִ� ���� ���� ���?
        else if(sum == max){
            if(num > res){ // ���ڰ� ū ���� ����
                res = num;
            }
        }
    }
    printf("%d", res);

    return 0;

}
