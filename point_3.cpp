// ����޸�ָ�������ֵ
 
# include <stdio.h>

void f(double ** p);

int main(void)
{
	double *p;
	double x = 66.6;
	p = &x; // xռ8�ֽڣ�������16λ������1�ֽ�һ����ַ��1�ֽ�8λ ��p��ŵ���x�ĵ�һ���ֽڵĵ�ַ
	printf("%p\n",p);
	
	// �޸ı���p��ֵ��
	// ������ͨ���ⲿ�����޸ı�����ֵ�����봫������ĵ�ַ���������&p��
	// ������pҲ��һ����ַ�����Ժ������βε�����Ӧ����double **���� 
	f(&p); 
	printf("%p",p);
	
	return 0;
}

void f(double ** p)
{
	*p = (double *)0x000000000024FE44;
}