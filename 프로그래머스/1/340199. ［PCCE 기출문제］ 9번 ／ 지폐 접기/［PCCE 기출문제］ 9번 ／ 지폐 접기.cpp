#include <string>
#include <vector>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    while(true)
    {
        int wmax=0,wmin=0,bmax=0,bmin=0;
        wmax = wallet[0] > wallet[1] ? wallet[0] : wallet[1];
        wmin = wallet[0] < wallet[1] ? wallet[0] : wallet[1];
        bmax = bill[0] > bill[1] ? bill[0] : bill[1];
        bmin = bill[0] < bill[1] ? bill[0] : bill[1];
        
        if(bmax > wmax || bmin > wmin)
        {
            bill[0] = bmax / 2;
            bill[1] = bmin;
            answer++;
        }
        else
        {
            return answer;
        }
    }
    
    return answer;
}