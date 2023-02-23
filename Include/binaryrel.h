#pragma once
#include <vector>
namespace binary
{
	class binrel {
	public:
		static bool reflect(std::vector<std::vector<bool>> &arr);
		static bool antireflect(std::vector<std::vector<bool>>& arr);
		static bool symmetry(std::vector<std::vector<bool>>& arr);
		static bool antisymmetry(std::vector<std::vector<bool>>& arr);
		static bool transitivity(std::vector<std::vector<bool>>& arr);
	};
}