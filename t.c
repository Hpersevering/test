#include<stdio.h>
int main()
{
   //指针的大小在32位平台是4个字节，在64位平台是8个字节
    char  *pc = NULL;
    int   *pi = NULL;
    short *ps = NULL;
    long  *pl = NULL;
    float *pf = NULL;
    double *pd = NULL;
    printf("%u\n", sizeof pc);
    printf("%u\n", sizeof pi);
    printf("%u\n", sizeof ps);
    printf("%u\n", sizeof pl);  
    printf("%u\n", sizeof pf);
    //这里可以看到，指针的定义方式是： type* 


    //指针类型的意义
    int a=0x00000144;
    int* pa=&a;   // 00 00 01 44  小端模式
                //数据高位<--------低位
                  //高地址<--------低地址
    *pa=0;
    printf("%d\n",a);//因为pa是int*类型的，所以解引用式访问四个字节，00 00 00 00
    a=0x00000144;
    char* pac=(char*)&a;
    *pac=0;          //因为pac是char*类型的，所以解引用式访问一个字节，00 00 01 00 =256
    printf("%d\n",a);
    
    printf("pa=%p\n",pa);
    printf("pa+1=%p\n",pa+1);
    printf("pac=%p\n",pac);
    printf("pac+1=%p\n",pac+1);
    //指针的类型决定了指针解引用时访问几个字节
    //指针的类型决定了指针+-1的时候，跳过几个字节。

    int num=10;
    int* pnum=&num;
    float* pnumf=(float*)&num;
    *pnum=100;
    printf("%d\n",num);
    *pnumf=100.0;  // 浮点数100.0的16进制表示：42C80000(hex)=1120403456(整数)
    printf("%d\n",num);
    //int*和float*不能通用，浮点数具体存储方式后面讲解
    return 0;
}