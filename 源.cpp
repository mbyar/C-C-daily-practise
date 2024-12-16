#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vvs;
        vector<string>vs1(strs);
        for (vector<string>::iterator it = vs1.begin(); it != vs1.end(); it++)
        {
            sort((*it).begin(), (*it).end());
        }
        vector<int> a(vs1.size(),1);
        int i = 0;
        for (vector<string>::iterator it = vs1.begin(); it != vs1.end(); it++)
        {
            if (!a[i])
            {
                i++;
                continue;
            }
            vector<string>vs2;
            int j = 0;
            vs2.push_back(strs[i]);
            a[i] = 0;
            for (vector<string>::iterator ix = vs1.begin(); ix != vs1.end(); ix++)
            {
                if (!a[j])
                {
                    j++;
                    continue;
                }
                if (vs1[i] == vs1[j])
                {
                    vs2.push_back(strs[j]);
                    a[j] = 0;
                }
                j++;
            }
            vvs.push_back(vs2);
            i++;
        }
        return vvs;
    }
};
int main()
{

	return 0;
}