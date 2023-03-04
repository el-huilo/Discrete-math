#pragma once
#include <vector>
#include <iostream>
#include <string>
using namespace std;
class graphCreate {
public:
	static void line_to_int(vector<int>& verticles, int &max);
	static void adjacency(vector<int>& verticles, vector<vector<bool>>& adj, int& edges);
	static void incidence(vector<vector<bool>>& adj, vector<vector<int>>& inci, int& max);
	static void degrees(vector<vector<int>>& inci, int& max, int& edges);
};