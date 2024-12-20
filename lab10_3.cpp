#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float sum1 = 0;
    float m = 0;
    float sd = 0;
    string textline ;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        sum1 += pow(atof(textline.c_str()),2);
        count++ ;
    }
    m = sum/count;
    sd = sqrt((sum1/count)-pow(m,2));
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << m << "\n";
    cout << "Standard deviation = " << sd << "\n";
}