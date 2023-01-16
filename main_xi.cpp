/*
 * main.cpp
 *
 *  Created on: Jan 4, 2023
 *      Author: user5
 */
#include<bits/stdc++.h>
using namespace std;
#include "defines.h"

extern void sort_xi(data_t, data_t&, int up);
// Driver code
int main()
{
	//int a[]= {3, 7, 4, 8, 6, 2, 11, 10, 1, 5, 9, 12, 16, 14, 13, 15};
	const int N = pow(2,5);
	data_t a, b;
	for (int i=0; i<N; i++)
		a.d[i] = rand()%512;
	//const int N = sizeof(a)/sizeof(a[0]);

	int up = 1; // means sort in ascending order
	printf("Unsorted array: \n");
	for (int i=0; i<N; i++)
		printf("%d ", a.d[i]);

	sort_xi(a, b, up);

	printf("\nSorted array: \n");
	for (int i=0; i<N; i++)
		printf("%d ", b.d[i]);
	printf("\n");
	return 0;
}




