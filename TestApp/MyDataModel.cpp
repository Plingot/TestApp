#include "MyDataModel.h"

namespace TestAppData {
void from_json(const json &j, MyDataModel &m) {
  try {
    j.at("name").get_to(m.name);
  } catch (...) {
  }

  try {
    j.at("description").get_to(m.description);
  } catch (...) {
  }
}

void to_json(json &j, const MyDataModel &m) {
  j = json{{"name", m.name}, {"descriptipn", m.description}};
}
} // namespace TestAppData
