#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int input1,input2,size,sum=0,check=100;
	cin >> input1 >> input2;
	size = input2 - input1;
	int *arr = new int[size];
	for(int i=1;pow(i,2)<=input2;i++)
	{
		if(pow(i,2)>=input1 && pow(i,2)<=input2)
		{
			if(check>i)
				check = i;
			sum += pow(i,2);
		}
	}
	cout << pow(check,2) << " " << sum;
	return 0;
}
