#pragma once

#include "../External/nlohmann/json.hpp"
#include <string>

using nlohmann::json;
using std::string;

namespace TestAppData {

struct MyDataModel {
  string name;
  string description;

  // TODO: Uncomment this - make sure it works with json serialization and
  // deserialization
  // float values[10];
};

void from_json(const json &j, MyDataModel &m);
void to_json(json &j, const MyDataModel &m);

} // namespace TestAppData
