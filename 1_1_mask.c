#include <stdio.h>

int checkBit(int num, int position) {
    // 使用掩码判断某一位是否为1
    int mask = 1 << position;  // 左移position位
    return (num & mask) != 0;  // 判断 num 在 position 位置的值是否为1
}

int main() {
    int num, position;
    printf("请输入一个整数: ");
    scanf("%d", &num);
    printf("请输入要检查的位的位置(从0开始): ");
    scanf("%d", &position);
    
    if (checkBit(num, position)) {
        printf("第%d位是1\n", position);
    } else {
        printf("第%d位是0\n", position);
    }

    return 0;
}
