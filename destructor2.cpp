
#include <iostream>
using namespace std;

class FileLogger 
{
public:
    FileLogger() {
        cout << "Begin: your object now takes up memory" << endl;
    }

    ~FileLogger() {
        cout << "Destructor: closing file, object destroyed" << endl;
    }
};

int main(int argc, char* argv[]) 
{
    cout << "Program starts" << endl;

    FileLogger logger;
    cout << argv[1] << endl;

    cout << "Program is running" << endl;

    return 0;
}
