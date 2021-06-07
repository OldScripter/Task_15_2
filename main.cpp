#include <iostream>
#include <vector>

void FindPair(std::vector<int> v, const int result)
{
    for (int i = 0; i < v.size() - 1; i ++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] + v[j] == result)
            {
                std::cout << v[i] << " + " << v[j] << " = " << result << "\n";
                std::cout << "Indexes: " << i << " and " << j << "\n";
                return;
            }
        }
    }
    std::cout << "Appropriate pair is not found.\n";
    return;
}

int main() {

    std::vector<int> input = {2, 7, 11, 15};
    int result = 9;

    FindPair(input, result);
    return 0;
}
