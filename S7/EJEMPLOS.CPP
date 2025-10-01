#include <vector>
#include <iostream>

using namespace std;
int main ()
{
  vector <float> v1(5);

    

    for (float i = 0; i < v1.size(); i++)
        v1[i] = i * 1.5;

    for (float i = 0; i < v1.size(); i++)
        cout << "v1[" << i << "] = " << v1[i] << endl;

       
  
  
  return 0;
}
