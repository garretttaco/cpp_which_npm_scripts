#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <string>
using namespace std;

string getpath(void)
{
    char *pathname;
    long size;
    char *buf = nullptr;
    size = pathconf(".", _PC_PATH_MAX);
    pathname = getcwd(buf, static_cast<size_t>(size));
    return pathname;
}

string openjsonfile(string pathname)
{
    auto s = [&in] {
        std::ostringstream ss{};
        ss << in.rdbuf();
        return ss.str();
    }(pathname);
    cout << s << endl;
}

int main()
{
    string pathname = getpath();
    cout << "Current working directory:"
         << endl;
    cout << pathname << endl;
    return 0;
}
