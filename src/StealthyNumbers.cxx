/*
 * StealthyNumbers.c++
 * Problem_757
 * 
 * Copyright 2020 mike <mike@pop-os>
 * 
 * ~/.config/geany/templates/files/main.c++
 */

#include <iostream>

#include "../inc/library.hxx"
#include "../inc/StealthyNumbers.hxx"
#define NL printf("\n")
int main(int argc, char **argv)
{
	const int N = 1000000;
	std::vector<int> vt3; // vector from library function
	std::vector<int> vfs; // vector from exhaustive search
	int count_vt3 = 0;
	int count_vfs = 0;
	
	count_vt3 = lib_test3(vt3,N);

	//for(auto a = vt3.begin(); a != vt3.end(); ++a) printf("vt3_N:%d\n", *a);
	// exhaustive search
	NL;
	count_vfs = ex_search(vfs,N);
	//for(auto a = vfs.begin(); a != vfs.end(); ++a) printf("vfs_N:%d\n", *a);
	NL;
	printf("lib_test3(%d) => %d\n",N, count_vt3);
	printf("ex_search(%d) => %d\n",N, count_vfs);
	NL;
	return 0;
}

