#include <iostream>
#include <string>

void Log(const char* str)
{
    std::cout << str << std::endl;
}

void Input(unsigned long long int& n)
{
    std::cin >> n;
}

int main()
{
    unsigned long long int start, end, i = 0;

    Log("Starting Line Number: ");
    Input(start);

    Log("Ending Line Number: ");
    Input(end);

    freopen("input.txt", "r", stdin); // the text file should be "input.txt"
    freopen("output.sh", "w", stdout); // and the output file will be "output.sh"

    bool flag = false;
    std::string s;

    while(getline(std::cin, s)) {
        i++; // counting line number
        if(i >= start) {
            if(i <= end) flag = true;
            else break;
        }
        if(flag) std::cout << s << std::endl;
    }
}
