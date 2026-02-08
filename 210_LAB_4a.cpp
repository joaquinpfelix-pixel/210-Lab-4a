#include <iostream>
#include <vector>
#include <random>

using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<> countDist(25,50);
    uniform_int_distribution<> colorDist(0,255);


    vector<Color> colorVector;
    
    
    int randomNumber = countDist(gen);

    for (int i = 0; i < randomNumber; i++){
        Color testColor;
        testColor.red = colorDist(gen);
        testColor.green = colorDist(gen);
        testColor.blue = colorDist(gen);
        
        colorVector.push_back(testColor);
    }

    for (int i = 0; i < colorVector.size(); i++){
        cout << "Color " << i << ": "
             << "R= " << colorVector[i].red << " " 
             << "G= " << colorVector[i].green << " " 
            << "B= " << colorVector[i].blue << endl;
    }
    

    return 0;
}

