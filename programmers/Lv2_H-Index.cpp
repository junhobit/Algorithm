#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int arr[10002]={0,};
    sort(citations.begin(),citations.end());
    
    for(int i=citations.size()-1;i>=0;i--)
        ++arr[citations.at(i)];
    
    for(int i=citations.at(citations.size()-1);i>=0;i--)
        arr[i] += arr[i+1];
    
    for(int i=10002;i>=0;i--)
    {
        if(arr[i]>=i)
        {
            answer = i;
            return answer;
        }
    }
        
    return answer;
}
