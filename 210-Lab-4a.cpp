#include <iostream>
#include <vector>

using namespace std;

struct Color {
    int red;
    int blue;
    int green;
};

int main() {

    Color testColor = {128, 39, 95};
    cout << "Red: " << testColor.red << " " << endl; 
    cout << "Green: " << testColor.green << " " <<endl; 
    cout << "Blue: " << testColor.blue << " " << endl;
}

