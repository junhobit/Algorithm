#include <iostream>
using namespace std;
void buble(int arr[], int size)
{
	bool check;
	int tmp;
	do
	{
		check=0;
		for(int i=0;i<size-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				tmp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = tmp;
				check=1;
			}
		}
	}while(check);
}

int main() {
	int sizeA,sizeB;
	cin >> sizeA >> sizeB;
	int *arr = new int[sizeA+sizeB];
	for(int i=0;i<sizeA+sizeB;i++)
		cin >> arr[i];
	buble(arr,sizeA+sizeB);
	for(int i=0;i<sizeA+sizeB;i++)
		cout << arr[i] << " ";
	return 0;
}
