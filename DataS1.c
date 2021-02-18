#include<stdio.h>
//简单选择排序算法:在8个数中找到最小的数与最前面的数值（第一个未排序的数）进行交换；
//                 再在剩余7个数中找到最小的数与第二个数（第一个未排序的数）交换；以此类推
//15,5,86,39,47,55,29,30
//5,15,86,39,47,55,29,30
//5,15,29,39,47,55,86,30
//5,15,29,30,47,55,86,39
//5,15,29,30,39,55,86,47
//.....
/*void SelectSort(int arr[],int n) {
	int x=0;
	int y=0;
	int z=0;
	int temp = 0;
	for (int x = 0; x < n; x++) {
		z = x;
		for (y = x + 1; y < n; y++) {
			if (arr[y] < arr[z]) {
				z = y;
			}
		}
		temp = arr[z];
		arr[z] = arr[x];
		arr[x] = temp;

	}
}
int main() {
	int arr[8] = { 15,5,86,39,47,55,29,30 };
	SelectSort(arr,8);
	for (int x = 0; x < 8; x++) {
		printf("%d ", arr[x]);
	}
	return 0;
}*/


//直接插入排序：将第一个记录看成是一个有序子序列，算法将以后的n-1给记录，依次插入到一个已经有序的子序列中去，使得每次
//              插入记录后的子序列也是有序的
//(64),(37,83,72,28,55)
//(37,64),(83,72,28,55)
//(37,64,83),(72,28,55)
//(37,64,72,83),(28,55)
//....
/*void InsertSort(int arr[], int n) {
	for (int x = 0; x < n; x++) {
		int y = x;
		int temp = arr[y];
		while (y > 0 && temp <arr[y - 1]) { //判断找到第一个不大于数
			arr[y] = arr[y - 1];//将已排序的数后移，为将要插入的数提供位置
			y--;
		}
		arr[y] = temp;
	}
}
int main() {
	int arr[6] = { 64,37,83,72,28,55 };
	InsertSort(arr, 6);
	for (int x = 0; x < 6; x++) {
		printf("%d ", arr[x]);
	}
	return 0;
}*/


//冒泡排序
//15,5,86,39,47,55,29,30
/*void BubbleSort(int arr[],int n) {
	int temp = 0;
	for (int i = n; n >1; n--) {
		int flag = 1;
		for (int y = 1; y < i; y++) {
			if (arr[y-1] > arr[y]) {
				temp = arr[y];
				arr[y] = arr[y-1];
				arr[y-1] = temp;
				flag = 0;
			}
		}
		if (flag) {
			return;
		}
	}
}
int main() {
	int arr[8] = { 15,5,86,39,47,55,29,30 };
	BubbleSort(arr,8);
	for (int x = 0; x < 8; x++) {
		printf("%d ", arr[x]);
	}
	return 0;
}*/