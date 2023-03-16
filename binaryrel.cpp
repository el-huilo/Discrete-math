#include "binaryrel.h"
bool binary::binrel::reflect(std::vector<std::vector<bool>> &arr)
{
	bool flag(1);
	for (int i = 0; i < arr.size(); i++)
		if (arr[i][i] != 1)
		{
			flag = 0; break;
		}
	return flag;
}

bool binary::binrel::antireflect(std::vector<std::vector<bool>>& arr)
{
	bool flag(1);
	for (int i = 0; i < arr.size(); i++)
		if (arr[i][i] != 0)
		{
			flag = 0; break;
		}
	return flag;
}

bool binary::binrel::symmetry(std::vector<std::vector<bool>>& arr)
{
	bool flag(1);
	unsigned short limit(1);
	for (int i = 1; i < arr.size(); i++)
	{
		for (int j = 0; j < limit; j++)
			if (arr[j][i] != arr[i][j])
			{
				flag = 0; break;
			}
		++limit;
	}
	return flag;
}

bool binary::binrel::antisymmetry(std::vector<std::vector<bool>>& arr)
{
	bool flag(1);
	unsigned short limit(1);
	for (int i = 1; i < arr.size(); i++)
	{
		for (int j = 0; j < limit; j++)
			if (arr[j][i] == 1 && arr[i][j] == 1)
			{
				flag = 0; break;
			}
		++limit;
	}
	return flag;
}

bool binary::binrel::transitivity(std::vector<std::vector<bool>>& arr)
{
	bool flag(1);
	for (int i = 0; i < arr.size(); i++)
		for (int j = 0; j < arr.size(); j++)
			for(int k = 0; k < arr.size(); k++)
			if (arr[i][j] && arr[j][k])
				if (!arr[i][k])
			{
				flag = 0; break;
			}
	return flag;
}