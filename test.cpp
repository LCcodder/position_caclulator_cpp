

#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;


int main(int argc, const char * argv[]) {

    const double g = 9.8;
    const double pi = 3.1415;
    double v, alpha, T;
    double t, x, y;

    cout << "Enter speed: ";
    cin >> v;
    cout << "Enter angle: ";
    cin >> alpha;
    alpha = alpha * pi / 180;
    T = 2 * v * sin(alpha) / g;
    cout << "Enter time than can't increase "<<T<<":";
    cin >> t;
    if (t > T) {
        cout << "Error: time1 can't increase time2";
        return 0;
    }
    else {
        x = v * t * cos(alpha);
        y = v * t * cos(alpha) - g * t * t / 2;
        cout << "X coordinate is: " << x;
        cout << "Y coordinate is: " << y;


    };




    return 0;
}
