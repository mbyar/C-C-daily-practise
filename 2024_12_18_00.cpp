#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;
class CMyString
{
public:
	CMyString(char* pData = nullptr);
	CMyString(const CMyString& str);
	~CMyString(void);
	//char* Get_Data()
	//{
	//	return this->m_pData;
	//}
	//void Input_Data(char* p)
	//{
	//	this->m_pData = p;
	//}
	////至少编译没错，运行似乎有那么点点小问题
	//CMyString& operator=(CMyString& ms)
	//{
	//	this->m_pData = ms.Get_Data();
	//	return *this;
	//}
	CMyString& operator=(const CMyString& str);
private:
	char* m_pData;
};
//初级
//CMyString& CMyString::operator=(const CMyString& str)
//{
//	if (this == &str)
//		return *this;
//	delete[]m_pData;
//	m_pData = nullptr;
//	m_pData = new char[strlen(str.m_pData) + 1];
//	strcpy(m_pData, str.m_pData);
//	return *this;
//}
//高级 考虑到内存不足情况
CMyString& CMyString::operator=(const CMyString& str)
{
	if (this != &str)
	{
		CMyString strTemp(str);
		char* pTemp = strTemp.m_pData;
		strTemp.m_pData = m_pData;
		m_pData = pTemp;
	}
	return *this;
}
int main()
{
	return 0;
}