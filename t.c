#include<stdio.h>
int main()
{
   //ָ��Ĵ�С��32λƽ̨��4���ֽڣ���64λƽ̨��8���ֽ�
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
    //������Կ�����ָ��Ķ��巽ʽ�ǣ� type* 


    //ָ�����͵�����
    int a=0x00000144;
    int* pa=&a;   // 00 00 01 44  С��ģʽ
                //���ݸ�λ<--------��λ
                  //�ߵ�ַ<--------�͵�ַ
    *pa=0;
    printf("%d\n",a);//��Ϊpa��int*���͵ģ����Խ�����ʽ�����ĸ��ֽڣ�00 00 00 00
    a=0x00000144;
    char* pac=(char*)&a;
    *pac=0;          //��Ϊpac��char*���͵ģ����Խ�����ʽ����һ���ֽڣ�00 00 01 00 =256
    printf("%d\n",a);
    
    printf("pa=%p\n",pa);
    printf("pa+1=%p\n",pa+1);
    printf("pac=%p\n",pac);
    printf("pac+1=%p\n",pac+1);
    //ָ������;�����ָ�������ʱ���ʼ����ֽ�
    //ָ������;�����ָ��+-1��ʱ�����������ֽڡ�

    int num=10;
    int* pnum=&num;
    float* pnumf=(float*)&num;
    *pnum=100;
    printf("%d\n",num);
    *pnumf=100.0;  // ������100.0��16���Ʊ�ʾ��42C80000(hex)=1120403456(����)
    printf("%d\n",num);
    //int*��float*����ͨ�ã�����������洢��ʽ���潲��
    return 0;
}