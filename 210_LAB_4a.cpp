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

    for (int i = 0; i < randomNumber; i++){
        Color testColor;
        testColor.red = rand() % 26 +25;
        testColor.green = rand() % 26 +25;
        testColor.blue = rand() % 26 +25;
        
        colorVector.push_back(testColor);
    }

    for (int i = 0; i < colorVector.size(); i++){
        cout << "Color " << i << ": "
             << "R= " << colorVector[i].red << " " 
             << "G= " << colorVector[i].green << " " 
            << "B= " << colorVector[i].blue << endl;
    }
    


}

