#include<stdio.h>
//单链表创建：头插法


//首先创建节点的结构体
typedef struct node {
	int data;
	struct node * next; //类型还是这个节点类型
}Node;
void headInsert(int* arr[] ,int n) {
	Node * p = (Node*)malloc(sizeof(Node));//创建一个头节点，p存放的时地址
	 p->next = NULL;//头节点指向为空
	 for (int i = 0; i < n; i++) {
		 Node* s = (Node*)malloc(sizeof(Node));//为要插入的数创建空间
		 s->data = arr[i];
		 //核心代码
		 s->next = p->next;
		 p->next = s;
	 }
}
int main() {
	int arr[5] = { 1,2,3,4,5 };//使用头插法为数组创建空间
	int sz = sizeof(arr);
	headInsert(arr,sz);
	return 0;
}




//单链表创建：尾插法

//首先创建节点的结构体
typedef struct node {
	int data;
	struct node* next; //类型还是这个节点类型
}Node;
void headInsert(int* arr[], int n) {
	Node* p = (Node*)malloc(sizeof(Node));//创建一个头节点，p存放的时地址
	p->next = NULL;//头节点指向为空
	Node* r = p;//核心代码中p的指向是需要改变的，所以用r来代替，不影响头节点
	for (int i = 0; i < n; i++) {
		Node* s = (Node*)malloc(sizeof(Node));//为要插入的数创建空间
		s->data = arr[i];
		//核心代码
		r->next = s;
		r = r->next;
	}
}
int main() {
	int arr[5] = { 1,2,3,4,5 };//使用头插法为数组创建空间
	int sz = sizeof(arr);
	headInsert(arr, sz);
	return 0;
}