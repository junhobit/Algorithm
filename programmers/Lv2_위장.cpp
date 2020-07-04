#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    vector<string> str;
    vector<int> count;
    int vect = 0;
    count.push_back(1);
    
    for(int i=0;i<clothes.size();i++)
        str.push_back(clothes[i][1]);
    sort(str.begin(),str.end());
    
    for(int i=0;i<clothes.size()-1;i++)
    {
        if(str[i] == str[i+1])
            count[vect]++;
        else
        {
            count.push_back(1);
            vect++;
        }
    }
    for(int i=0;i<count.size();i++)
        answer *= (count[i]+1);
    
    return answer-1;
}
