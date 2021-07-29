#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>

std::vector <int> getInput(int times)
{
	std::string buffer;
	std::vector <int> input(times);
	std::getline(std::cin, buffer);
	for (int i = 0; i < times; i++)
	{
		if (i < times - 1)
		{
			int spaceLocation = buffer.find(" ");
			input[i] = stoi(buffer.substr(0, spaceLocation));
			buffer.erase(0, spaceLocation + 1);
		}
		else if (i == times - 1)
		{
			input[i] = stoi(buffer.substr(0, buffer.length()));
		}
	}
	return input;
}

int trashFinder(std::vector <int> n, std::vector <int> a, std::vector <int> b)
{
	int inversionCount{ 0 };
	for (int i1 = 0; i1 < n[0]; i1++)
	{
		for (int i2 = i1 + 1; i2 < n[0]; i2++)
		{
			if (i1 < i2 && find(b.begin(), b.end(), a[i1]) > find(b.begin(), b.end(), a[i2]))
			{
				inversionCount++;
			}
			else if (i1 > i2 && find(b.begin(), b.end(), a[i1]) < find(b.begin(), b.end(), a[i2]))
			{
				inversionCount++;
			}
		}
	}
	return inversionCount;
}

int main()
{
	std::cout << "Please enter inputs:\n";
	std::vector <std::vector <int>> input(3);
	input[0] = getInput(1);
	input[1] = getInput(input[0][0]);
	input[2] = getInput(1);
	input.resize(input[2][0] + 3);
	for (int i = 3; i < input[2][0] + 3; i++)
	{
		input[i] = getInput(input[0][0]);
	}
	std::cout << "Number of inversions:\n";
	for (int i = 3; i < input[2][0] + 3; i++)
	{
		std::cout << trashFinder(input[0], input[1], input[i]) << "\n";
	}
	std::getchar();
	return EXIT_SUCCESS;
}