/*
 * library.c++
 * 
 * Copyright 2020 mike <mike@pop-os>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include "../inc/library.hxx"

int lib_test2(int limit){
	
	int a,c, sum_ab, sum_cd;
	std::pair<int,int> ab, cd;
	int count = 0;
	for(int N = 2; N <= limit; N+=1){
		//printf("N=%d\n",N);
		a = (int)std::trunc(std::sqrt(N));
		while(((N % a) != 0)and(a > 1)) a -= 1;
		ab = {a, N/a};
		cd = {0,0};
		//printf("Start config: N: %d  ab:{%d,%d}\n", N, ab.first, ab.second);
		// We assume ab is set correctly
		sum_ab = ab.first+ab.second+1;
		do{
			//printf("Debug N: %d  ab:{%d,%d}  cd:{%d,%d}\n", N, ab.first, ab.second, cd.first, cd.second);
			if(ab.first > 1){
				cd.first = ab.first - 1;
				while(((N % cd.first) != 0)and(cd.first > 1)) cd.first -= 1;
				cd.second = N/cd.first;
				sum_cd = cd.first+cd.second;
				if(sum_ab == sum_cd){
					printf("N: %d  ab:{%d,%d}  cd:{%d,%d}\n", N, ab.first, ab.second, cd.first, cd.second);
					count++;
					break;
				}
			}
			ab = cd;
			cd = {0,0};
		} while(ab.first > 1);
	}
	return count;
}

//----------------------------------------------------------------------
int lib_test1(int limit)
{
	// limit is assumed to be even
	int a,b,c,d;
	int count = 0;
	for(int n = limit; n > 0; n -= 1){
		a = (int)std::trunc(std::sqrt(n));
		while(((n % a) != 0)and(a > 1)) a -= 1;
		if(a > 1){
			b = n / a;
			int sum_ab = a+b+1;
			//printf("n: %d  a: %d  b: %d  a+b:%d\n", n, a, b, sum_ab); 
			// now find c < a such that  d = c|n and a+b+1 = c+d

				c = a-1;
				while((c > 1)and((n % c) != 0)) c -= 1;
				d = n / c;
				int sum_cd = c+d;
				if((c > 1)and(sum_ab == sum_cd)){
					printf("Solution: n:%d  a:%d  b:%d  c:%d  d:%d\n",n,a,b,c,d);
					count += 1;
				}
	
		}
	}	
	return count;
}
//----------------------------------------------------------------------

