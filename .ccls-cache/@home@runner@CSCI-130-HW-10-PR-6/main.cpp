#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int NUMCARS = 5; //number of cars
struct GasMile // this is a global declaration

{ int carNum;
  int miles;
  int gal;
};

int main()
{
 int i;
 GasMile employee[NUMCARS] = {
 { 25, 1450, 16.72},
 { 36, 3240, 17.54},
 { 44, 1792 15.56},
 { 52, "Ernst, T.", 15.43},
 { 68, "Gwodz, K.", 18.72}
 };
  cout << endl; // start on a new line
 cout << setiosflags(ios::left); // left-justify the output
 for (i = 0; i < NUMRECS; i++)
 cout << setw(7) << employee[i].id
 << setw(15) << employee[i].name
 << setw(6) << employee[i].rate << endl;
 return 0;
}