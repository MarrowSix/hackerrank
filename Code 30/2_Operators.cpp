#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main(int argc, char *argv[])
{
    double meal_cost;
    int tipPercent;
    int taxPercent;

    cin >> meal_cost >> tipPercent >> taxPercent;   

    double cost = 0;
    cost += meal_cost * (1 + double(tipPercent)/100 + double(taxPercent)/100 );

    cout << "The total meal cost is " << round(cost) << " dollars." << endl;   

    return 0;
}