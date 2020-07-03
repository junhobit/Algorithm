#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    int i,check=0;
    sort(participant.begin(),participant.end());
    sort(completion.begin(),completion.end());
    
    for(i = 0;i<completion.size();i++)
    {
        if(participant[i] != completion[i])
            return participant[i];
    }
    answer = participant[completion.size()];
    return answer;
}
