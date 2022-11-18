#pragma once
#include <vector>
#include <exception>
using namespace std;
class BinaryHeap
{
public:
	int n;
	std::vector<int> heap;
	BinaryHeap(vector<int> ar, int n) : heap(n) {
		this->n = heap.size();
		for (int i = 0; i < n; i++)
			heap[i] = ar[i];
		BuildHeap(heap);
	}
	~BinaryHeap()
	{
	};
	void FixHeap(int i, int length)
	{
		int left = 2 * i + 1, right = left + 1, largest;
		if ((left <= length) && (heap[left] > heap[i]))
			largest = left;
		else
			largest = i;
		if (right <= length && heap[right] > heap[largest])
			largest = right;
		if (largest != i)
		{
			int temp = heap[i];
			heap[i] = heap[largest];
			heap[largest] = temp;
			FixHeap(largest, length);
		}
	}

	void BuildHeap(vector<int> heap)
	{
		int len = heap.size();
		for (int i = len / 2; i >= 0; i--)
			FixHeap(i, len-1);
	}


	operator int() const
	{
		return n;
	}
	int operator [] (int i) const
	{
		return heap[i];
	}
};

