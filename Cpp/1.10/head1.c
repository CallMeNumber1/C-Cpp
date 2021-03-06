/*************************************************************************
	> File Name: head.c
	> Author: ChongH
	> Mail: 304451676@qq.com
	> Created Time: 2019年01月10日 星期四 20时27分45秒
 ************************************************************************/


// 继承的c实现
#include <stdio.h>
#include <stdlib.h>
#include "head.h"

// 父类
typedef struct class_demo {
    int a;
    int b;
} class_demo;

// 子类
typedef struct Derived {
    class_demo d;
    int k;
} derived;

demo *demo_init(int i, int j) {
    class_demo *p = (class_demo *)malloc(sizeof(class_demo));
    if (p != NULL) {
        p->a = i;
        p->b = j;
    }
    return p;
}
int getI(demo *pthis) {
    class_demo *p = (class_demo *)pthis;
    return p->a;
}
int getJ(demo *pthis) {
    class_demo *p = (class_demo *)pthis;
    return p->b;
}
int add(demo *pthis, int value) {
    class_demo *p = (class_demo *)pthis;
    return p->a + p->b + value;
}

void free_demo(demo *p) {
    free(p);
    return ;
}
