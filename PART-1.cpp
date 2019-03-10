1:
	g++ -> g++7
	gcc -> gcc7
	
2:
	using CryptoPP::byte;
	
4&6:
	-D_GLIBCXX_USE_CXX11_ABI=1
	
5:
	lIL

7:
	template <typename T> T MINMAX(T min, T value, T max)
	{
		T tv;

		tv = (min > value ? min : value);
		return (max < tv) ? max : tv;
	}
	
8:
	#include <algorithm>
	
9:
	#include <random>
	#include <algorithm>
	--------------------
	std::random_device rd;
	std::mt19937 g(rd());
	std::shuffle(vec_bSlots.begin(), vec_bSlots.end(), g);
	
11:
	-std=gnu++17
	
12:
	mcpu -> mtune
	auto_ptr -> unique_ptr
	typeof -> __typeof
	
13:
	-fstack-protector-all