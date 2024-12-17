#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;
int trans(char* string,bool* flag,int len)
{
	int count = 0, ret = 0;
	*flag = true;
	if (!len ||(len == 1 && *string == '-'))
	{
		*flag = false;
		return 0;
	}
	if (*string == '-')
	{
		ret = 1;
		string++;
	}
	for (int i = ret; i < len; i++)
	{
		if (*string <= '9' && *string >= '0')
			count = count * 10 + *string - '0';
		else
		{
			*flag = false;
			return 0;
		}
		string++;
	}
	ret = 1 - ret * 2;
	return count * ret;
}
int main()
{
	char s1[5] = "0123";
	char s2[7] = "-345";
	char s3[8] = { '1','-','3'};
	char s4[3];
	char s5[4] = { '-','1','2','3' };
	char s6[2] = "-";
	bool flag;
	cout << trans(s1, &flag, 4) << endl;
	cout << trans(s2, &flag, 4) << endl;
	cout << trans(s3, &flag, 3) << endl;
	cout << trans(s4, &flag, 0) << endl;
	cout << trans(s5, &flag, 4) << endl;
	cout << trans(s6, &flag, 1) << endl;
	return 0;
}