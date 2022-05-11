#include<iostream>
using namespace std;
int main() {
    
    int n = 0;
    cout << "Please provide n: ";
    cin >> n;
    int m = (n+1)/2;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2*n + m; j++)
        {
            if (i == j || (i + j == (2*n) && j > n) || j - i == 2 * n - m)
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}

