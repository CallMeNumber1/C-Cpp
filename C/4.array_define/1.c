/*************************************************************************
	> File Name: 1.c
	> Author: ChongH
	> Mail: 304451676@qq.com
	> Created Time: 2018年09月24日 星期一 10时39分13秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int arr[100] = {0};
    char *p1 = (char *)(arr + 1);
    char *p2 = (char *)(arr + 2);
    p1[0] = 'a';
    p1[1] = 'b';
    p1[2] = 'c';
    p1[3] = 'd';
    for (int i = 0; i < 3; i++) p2[i] = 'A' + i;
    printf("%s %x\n", p1, arr[1]);
}
