#include <stdio.h>

int checkBit(int num, int position) {
    // ʹ�������ж�ĳһλ�Ƿ�Ϊ1
    int mask = 1 << position;  // ����positionλ
    return (num & mask) != 0;  // �ж� num �� position λ�õ�ֵ�Ƿ�Ϊ1
}

int main() {
    int num, position;
    printf("������һ������: ");
    scanf("%d", &num);
    printf("������Ҫ����λ��λ��(��0��ʼ): ");
    scanf("%d", &position);
    
    if (checkBit(num, position)) {
        printf("��%dλ��1\n", position);
    } else {
        printf("��%dλ��0\n", position);
    }

    return 0;
}
