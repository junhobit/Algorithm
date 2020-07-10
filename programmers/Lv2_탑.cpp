#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer;
    vector<int> tmp;
    int check=0;
    for(int i=heights.size()-1;i>=0;i--)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(heights[i]<heights[j])
            {
                tmp.push_back(j+1);
                check=1;
                break;
            }
        }
        if(!check)
            tmp.push_back(0);
        check=0;
    }
    for(int i=tmp.size()-1;i>=0;i--)
        answer.push_back(tmp[i]);
    
    return answer;
}
