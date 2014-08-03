#ifndef _STACK_H
#define _STACK_H

#define STACK_INIT_SIZE 100 //�ռ��ʼ������
#define STACK_INCREMENT 10 //��������(ÿ�οռ䲻�����·���ʱ������)



//void**��Ϊ˫ָ�룬��ζ��ջ�ͳ�ջ�Ľ�ֻ�Ƕ�Ӧ���ݵĵ�ַ��������Ҫ�����ݱ�����п���
typedef struct _ponyStack
{
	char *base;
	char *top;
	int elementSize; //Ԫ�������ֽڴ�С
	int stackSize;	//��ǰ�ѷ���Ŀռ�(ע�ⲻ��Ԫ�ص�ʵ�ʸ���)
}ponyStack;


#define RET_OK 0
#define RET_ERROR -1


///////////////////////////////////////////////////////
int InitStack(ponyStack *stack, int elementSize);
int ClearStack(ponyStack *stack);
int DestroyStack(ponyStack *stack);
bool IsEmptyStack(ponyStack stack);
int CountOfStack(ponyStack stack);
int Push(ponyStack *stack, const void *element);
int Pop(ponyStack *stack, void *element);

int GetTop(ponyStack stack, void *element);


#endif