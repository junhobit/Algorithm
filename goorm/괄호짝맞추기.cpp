#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	int i;
	stack<char> s;
	string input;
	getline(cin,input);
	for(i=0;i<input.size();i++)
	{
		if(input.at(i)=='(') s.push(input.at(i));
		else if(input.at(i)=='{') s.push(input.at(i));
		else if(input.at(i)=='[') s.push(input.at(i));
		else if(input.at(i)==')') 
		{
			if(s.top()=='(')
				s.pop();
			else
				break;
		}
		else if(input.at(i)=='}')
			{
			if(s.top()=='{')
				s.pop();
			else
				break;
		}
		else if(input.at(i)==']')
		{
			if(s.top()=='[')
				s.pop();
			else
				break;
		}
	}
	if(i==input.size())
		cout << "True";
	else
		cout << "False";
	return 0;
}
