#include <iostream>

using namespace std;

int main()
{
    double latitudeOne, longitudeOne, latitudeTwo, longitudeTwo;
    cout << "Enter cords of city 1" << endl;
    cin >> latitudeOne >> longitudeOne;
    cout << "Enter cords of city 2" << endl;
    cin >> latitudeTwo >> longitudeTwo;
    double diffOne = latitudeOne - latitudeTwo;
    if(diffOne<0)
    diffOne*=-1;
    double diffTwo = longitudeOne- longitudeTwo;
    if(diffTwo<0)
    diffTwo*=-1;
    double sum = (diffOne+diffTwo)*111;
    cout<<"The different is of "<<sum<<"kms"<<endl;
    return 0;
}