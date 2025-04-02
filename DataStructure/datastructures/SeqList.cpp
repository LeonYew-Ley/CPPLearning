// 顺序表定义
#include <iostream>
#include <stdlib.h>

#define MaxSize 50 // 静态顺序表
#define InitSize 100 // 动态顺序表

// 静态分配顺序表
typedef struct{
    int data[MaxSize];
    int length;
}SqList;

// 动态分配顺序表
typedef struct{
    int* data;
    int SeqMaxSize;
    int length;
}SeqList;

// =================顺序表操作=======================//
// 初始化顺序表_动态
void InitSeqList(SeqList &L){
    L.data = (int*) malloc(InitSize*sizeof(int));
    L.length = 0;
    L.SeqMaxSize = InitSize;
}
// 增加顺序表长度_动态
void IncreaseSize(SeqList &L, int len) {
    int *p = L.data;
    L.data = (int*)malloc((L.SeqMaxSize + len) * sizeof(int));
    for(int i = 0; i < L.SeqMaxSize;i++) {
        L.data[i] = p[i];
    }
    L.SeqMaxSize = L.SeqMaxSize + len;
    free(p);
}
// 初始化顺序表_静态
void InitSqList(SqList &L){
    for(int i = 0; i < MaxSize; i++)
        L.data[i] = 0; // 空数据置0，避免脏数据的出现
    L.length = 0;
}

void PrintSqList(SqList &L){
    printf("Printing..");
    for(int i = 0; i < L.length; i++)
        printf("data[%d]=%d\n",i,L.data[i]);
}

int main() {
    SqList L;
    InitSqList(L);
    PrintSqList(L);

    printf("ChineseTest: 中文测试");
    return 0;
}