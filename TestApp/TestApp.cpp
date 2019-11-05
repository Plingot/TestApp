#include "MyDataModel.h"
#include <iostream>
#include <thread>

using nlohmann::json;
using std::cout;
using std::endl;
using std::thread;

using namespace TestAppData;

int main() {
  cout << "Plingot TestApp v0.1.0" << endl << endl;

  {
    MyDataModel m{"Mio Nilsson", "Code guru"};

    thread t([m] {
      json j;
      j = m;

      // TODO: Prio1 Stdout not allowed from this thread
      cout << j.dump(2) << endl;
    });

    // TODO: Prio1 Detach this thread and make main-thread into a stdout loop
    // thread
    t.join();
  }
}
