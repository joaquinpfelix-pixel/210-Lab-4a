#include <iostream>
#include <vector>

using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main() {

    Color testColor = {128, 39, 95};

    vector<Color> colorVector;
    colorVector.push_back(testColor);
    




    
    cout << "Red: " << colorVector[0].red << endl; 
    cout << "Green: " << colorVector[0].green << endl; 
    cout << "Blue: " << colorVector[0].blue << endl;


}

