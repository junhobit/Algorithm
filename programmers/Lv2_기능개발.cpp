#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    if(progresses.size()>100)
        exit(0);
    
    vector<int> answer;
    int publish=0,current=0,i,j;
    int count[101]={0,};
    for(i=0;i<progresses.size();i++)
    {
        for(j=progresses[i];j<100;j+=speeds[i])
        {
            progresses[i]+=speeds[i];
            count[i]++;
        }
    }
    for(i=0;i<progresses.size();i++)
    {
        publish++;
        if(count[current]>=count[i+1])
            continue;
        
        current=i+1;
        answer.push_back(publish);
        publish=0;
    }
    if(i >= progresses.size())
        answer.push_back(publish++);
    
    return answer;
}
