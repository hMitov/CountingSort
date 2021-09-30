#include <iostream>
using namespace std;

int k = 0;

void CountingSort(int* A, int* B, int n)
{
	int* C = new int[k];
	for (int i = 0; i < k + 1; i++) {
		C[i] = 0;
	}
  
	for (int j = 1; j < n + 1; j++) {
		C[A[j]]++;
	}
  
	for (int i = 1; i < k + 1; i++) {
		C[i] += C[i - 1];
	}
  
	for (int j = n; j >= 1; j--) {
		B[C[A[j]]] = A[j];
		C[A[j]] = C[A[j]] - 1;
	}
}


int main()
{
	int n;
	cout << "Enter the size of the array :";
	cin >> n;

	int* A = new int[n];
	int* B = new int[n];

	for (int i = 1; i < n + 1; i++) {
		cin >> A[i];
		if (A[i] > k)
			k = A[i];
	}
  
	CountingSort(A, B, n);
	
	for (int i = 1; i <= n; i++)
		cout << A[i] << " ";
  cout << endl;
	
  
  return 0;
}
