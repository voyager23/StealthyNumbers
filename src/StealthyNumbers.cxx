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
	std::vector<int> vbsky;
	int count_bsky = 0;
	std::vector<int> vt3; // vector from library function
	int count_vt3 = 0;
	
	count_vt3 = lib_test3(vt3,100);
	for(auto p : vt3) printf("Lib_test3 N:%d\n", p);

	count_bsky = blue_sky1(vbsky,100);
	for(auto p : vbsky) printf("Blue_sky N:%d\n", p);

	return 0;
}

