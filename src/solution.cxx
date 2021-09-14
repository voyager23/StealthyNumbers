#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cstdint>

//#define N 1000000
//#define N 100000000000000

const uint64_t N = 100000000000000;

int main()
{
	std::vector<uint64_t> c;
	for (uint64_t x = 1; (x+1) * (x+1) * x * x <= N; x++)
		for (uint64_t y = x; (x+1) * (y+1) * x * y <= N; y++)
			c.push_back((x+1) * x * (y+1) * y);
	std::sort(c.begin(), c.end());
	int result = 1;
	for (auto it = c.begin() + 1; it != c.end(); ++it)
		if (*it != it[-1])
			++result;
	printf("%d\n", result);
	return 0;
}
