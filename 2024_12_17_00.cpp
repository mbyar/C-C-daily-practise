#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;
class LinkNode
{
public:
	int data;
	LinkNode* next;
};
typedef class LinkTable
{
public:
	LinkNode* head;
	LinkNode* point = head;
	int length;
}*LinkTable;
LinkNode* fun(LinkTable l, int k)
{
	LinkNode* p = l->head;
	if (l == NULL || k > l->length)
		return NULL;
	for (int i = 0; i < l->length - k; i++)
	{
		p = l->head->next;
	}
	return p;
}
int main()
{
	
	return 0;
}