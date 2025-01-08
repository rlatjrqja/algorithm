#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string,int> dictionary;
    int score = 0;
    
    for(int i=0;i<name.size();i++)
    {
        dictionary[name[i]] = yearning[i];
    }
    
    for(int i=0;i<photo.size();i++)
    {
        score = 0;
        for(int j=0;j<photo[i].size();j++)
        {
            if(dictionary[photo[i][j]] > 0) score += dictionary[photo[i][j]];
        }
        answer.push_back(score);
    }
    
    return answer;
}