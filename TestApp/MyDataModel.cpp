#include "MyDataModel.h"

namespace TestAppData {
void from_json(const json &j, MyDataModel &m) {
  // TODO: Prio3 We need exception-handling here. Find out which exceptions the
  // json library can throw and handle in a nice and re-useable way.
  j.at("name").get_to(m.name);
  j.at("description").get_to(m.description);
}

void to_json(json &j, const MyDataModel &m) {
  j = json{{"name", m.name}, {"descriptipn", m.description}};
}
} // namespace TestAppData
