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

int main(int argc, char **argv)
{
	const int N = 1000;
	int count = lib_test2(N);
	printf("lib_test2(%d) => %d\n",N, count);
	printf("\n==========\n");
	//count = ex_search(100);
	//printf("ex_search(%d) => %d\n",N, count);
	
	return 0;
}

