
#include <iostream> 
using namespace std;

class FileLogger {
public:
    FileLogger() {
        cout << "Constructor: opening file" << endl;
    }

    ~FileLogger() {
        cout << "Destructor: closing file" << endl;
    }
};

int main() {
    cout << "Program starts" << endl;

    FileLogger logger;

    cout << "Program is running" << endl;

    return 0;
}

