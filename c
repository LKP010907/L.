/*两个整数，并输出它们的和
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main(){
	int a, b;
	int sum;
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("%d", sum);
	return 0;
} */

/*判断是否为偶数
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	if (a % 2 == 0) {
		printf("该数为偶数");
	}
	else
	{
		printf("该数为奇数");
	}
	return 0;
} */

/*找出给定数组中的最大值
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int  Max(int arr[], int len) {
	int max = arr[0];
	int i;
	for (i = 0; i < len; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
		
	}
	return max;
}
int main() {
	int arr[] = { 15,20,11,2,9,55,3,66 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int max = Max(arr, len);
	printf("%d", max);
} */


/* 给定数组中所有元素的平均值
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int Avg(int arr[],int len) {
	int sum = 0;
	int i;
	for (i = 0; i < len; i++) {
		sum = sum + arr[i];

	}
	return sum;

}
int main() {
	int arr[] = { 11,2,56,66,89,89 };
	int len = sizeof(arr) / sizeof(arr[0]);
	double avg = Avg(arr, len) / len;
	printf("%f", avg);
}
*/
