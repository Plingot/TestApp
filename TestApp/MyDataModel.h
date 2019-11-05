#pragma once

#include "../External/nlohmann/json.hpp"
#include <string>

using nlohmann::json;
using std::string;

namespace TestAppData {

struct MyDataModel {
  string name;
  string description;

  // TODO: Prio2 Uncomment this - make sure it works with json serialization and
  // deserialization
  // float values[10];

  // TODO: Prio4 give us some nice constructors including a copy-constructor
};

void from_json(const json &j, MyDataModel &m);
void to_json(json &j, const MyDataModel &m);

} // namespace TestAppData
