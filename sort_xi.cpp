/* Caller of bitonicSort for sorting the entire array of
length N in ASCENDING order */
#include "bitonic_sort.hpp"
#include "defines.h"
void sort_xi(data_t a, data_t& b, int up)
{
#pragma HLS INTERFACE mode=ap_none port=a,b,up
	int aa[32], ba[32];
	for (int i=0; i<32; i++)
#pragma HLS UNROLL
		aa[i] = a.d[i];
	xf::database::details::bitonic_sort_inst<int, 32>::sub_sort(aa, ba, up);
	for (int i=0; i<32; i++)
#pragma HLS UNROLL
		b.d[i] = ba[i];

}
