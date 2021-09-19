#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int clockWork(int);
int main() {
	int time;
	scanf("%d", &time);
	clockWork(time);
	return 0;
}

int clockWork(int time) {
	int H = time / 3600; //H for hour
	if (H >= 1) {
		printf("%d", H);
		time = time - (H * 3600);
	}
	else {
		printf("00");
	}
	printf(":");//:

	int M = time / 60; //M for minute
	if (M >= 1) {
		if (M < 10) {
			printf("0");
		}
		printf("%d", M);
		time = time - (M * 60);
	}
	else {
		printf("00");
	}
	printf(":");//:

	int S = time; //S for second
	if (S >= 1) {
		if (S < 10) {
			printf("0");
		}
		printf("%d", S);
	}
	else {
		printf("00");
	}
	return 0;
}