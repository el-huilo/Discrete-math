#include "graphCreate.h"
void graphCreate::line_to_int(vector<int> &verticles, int &max)
{
	string dump;
	int comp(0), n;
	cin >> n;
	getline(cin, dump);
	for (int i = 0; i < n; i++)
	{
		while (cin.peek() != '\n')
		{
			cin >> comp;
			if (cin.peek() == ' ') cin.ignore();
			if (max < comp) max = comp;
			verticles.push_back(comp);
		}
		verticles.push_back(0);
		getline(cin, dump);
	}
}

void graphCreate::adjacency(vector<int> &verticles, vector<vector<bool>> &adj, int &edges)
{
	for (int i = 0; i < verticles.size(); i++)
	{
		if (verticles[i] == 0) continue;
		if (verticles[i + 1] != 0)
		{
			if (adj[verticles[i] - 1][verticles[i + 1] - 1] != 1) ++edges;
			adj[verticles[i] - 1][verticles[i + 1] - 1] = 1;
		}
	}
}

void graphCreate::incidence(vector<vector<bool>>& adj, vector<vector<int>> &inci, int &max)
{
	int k(0);
	for (int i = 0; i < max; i++)
		for (int j = 0; j < max; j++)
		{
			if (adj[i][j] == 1)
			{
				inci[i][k] = 1;
				inci[j][k] = -1;
				++k;
			}
		}
}

void graphCreate::degrees(vector<vector<int>>& inci, int &max, int &edges)
{
	vector<int> outdeg(max);
	vector<int> indeg(max);
	vector<int> deg(max);
	bool flag(0); int i(0);
	for (i = 0; i < edges; i++)
		for (int j = 0; j < max; j++)
		{
			if (inci[j][i] == -1)
			{
				indeg[j] += 1;
				for (int k = 0; k < max; k++)
					if (inci[k][i] == 1)
					{
						outdeg[k] += 1; flag = 0; break;
					}
					else flag = 1;
				if (flag == 1) outdeg[j] += 1;
			}
		}
	for (i = 0; i < max; i++)
		deg[i] = indeg[i] + outdeg[i];
	cout << endl << '\t' << "d+" << '\t' << "d-" << '\t' << "d" << endl;
	for (i = 0; i < max; i++)
		cout << "v" << i + 1 << '\t' << outdeg[i] << '\t' << indeg[i] << '\t' << deg[i] << endl;
}