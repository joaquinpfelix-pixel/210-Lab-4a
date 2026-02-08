#include <iostream>
#include <vector>

using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    srand(time(0)); 

    vector<Color> colorVector;
    
    
    int randomNumber = rand() % 26 + 25;

    FOR (int i = 0; i < randomNumber; i++){
        Color testColor;
        testColor.red = rand() % 26 +25;
        testColor.green = rand() % 26 +25;
        testColor.blue = rand() % 26 +25;
        colorVector.push_back(testColor);
    }


    cout << "Red: " << colorVector[0].red << endl; 
    cout << "Green: " << colorVector[0].green << endl; 
    cout << "Blue: " << colorVector[0].blue << endl;


}

