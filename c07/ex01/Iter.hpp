#pragma once

template <typename T>
void iter(T* arr, int len, void(*func)(T a)) {
	for (int i = 0; i < len; ++i) {
		func(arr[i]);
	}
}