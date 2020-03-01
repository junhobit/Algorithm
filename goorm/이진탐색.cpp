#include <iostream>
using namespace std;
void binary(int arr[],int start,int end,int find)
{
	int mid = (start+end)/2;
	if(start>end)
		cout<< "X";
	else if(find==arr[mid])
			cout << mid+1;
	else
	{
		if(find>arr[mid])
			binary(arr,mid+1,end,find);
		else 
			binary(arr,start,mid-1,find);
	}
}
int main() {
	int input,find;
	cin >> input;
	if (input>100)
		return 0;
	int *arr = new int[input];
	for (int i=0;i<input;i++)
		cin >> arr[i];
	cin >> find;
	binary(arr,0,input-1,find);
	return 0;
}
