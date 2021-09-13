
/*
 * library.h++
 * ~/.config/geany/templates/files/main.hxx
 */

#ifndef __library_hxx__
#define __library_hxx__

	#include <cmath>
	#include <iostream>
	#include <vector>
	
	// Declarations, typedefs, enum, defines
	// used by exhaustive search
	typedef struct {
		int a,b;
		int sum_ab;
	}Ab;
	typedef std::vector<Ab> Vab;
	
	int lib_test1(int limit);
	int lib_test2(int limit);
	
	int ex_search(std::vector<int> &n,int limit);
	int lib_test3(std::vector<int> &n,int limit);

#endif

