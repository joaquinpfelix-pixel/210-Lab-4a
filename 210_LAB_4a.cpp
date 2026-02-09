#include <iostream>
#include <vector>
#include <random>
#include <iomanip>
#include <string>

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

    cout << left << setw(7) << "Color#"
         << setw(10) << "R value"
         << setw(10) << "G value"
         << setw(10) << "B value" << endl;
    
    cout << string(7, '-') << " "
         << string(9, '-') << " "
         << string(9, '-') << " "
         << string(9, '-') << endl;

    for (int i = 0; i < colorVector.size(); i++){
        cout << setw(7) << (i+1)
             << setw(10) << colorVector[i].red
             << setw(10) << colorVector[i].green 
             << setw(10) << colorVector[i].blue << endl;
    }

    return 0;
}

