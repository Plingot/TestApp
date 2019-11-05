#include "MyDataModel.h"
#include <iostream>

using nlohmann::json;
using std::cout;
using std::endl;

using namespace TestAppData;

int main() {
  cout << "Plingot TestApp v0.1.0" << endl << endl;

  {
    MyDataModel m{"Mio Nilsson", "Code guru"};

    json j;
    j = m;

    cout << j.dump(2) << endl;
  }
}
