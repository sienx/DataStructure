#include<stdio.h>
#define ture 1;
#define false 0;
typedef int BOOL;


//定义栈的结构体(定义结构体放在代码段最前面)
typedef struct stack {
	int Top;
	//允许栈的最大长度
	int MaxStack;
	//数组存放栈的元素
	int data[20];
}Stack;

void CreateStack(Stack* s, int maxsize) {
	s->Top = -1;
	s->MaxStack = maxsize;
}
BOOL IsEmpty(Stack s) {
	if (s.Top < 0) {
		return ture;
	}
	else {
		return false;
	}
}
BOOL IsFull(Stack s) {
	if (s.Top >= s.MaxStack - 1) {
		return ture;
	}
	else {
		return false;
	}
}
int StackTop() {

}
int main() {
	Stack s;
	//创建
	CreateStack(&s,10);
	//判空
	IsEmpty(s);
	//判满
	IsFull(s);
	//返回栈顶元素
	StackTop();
	//进栈
	Push();
	//出栈
	Pop();

	return 0;
}