# include <iostream>

using namespace std;

int main(int arge, char* argv[])
{
    int n = 0;
    int i = 0;
    cin >> n;
    for (i = n; i > 0; i--)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }

    }

    return EXIT_SUCCESS;
}