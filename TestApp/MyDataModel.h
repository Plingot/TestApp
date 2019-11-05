#pragma once

#include "../External/nlohmann/json.hpp"
#include <string>

using nlohmann::json;
using std::string;

namespace TestAppData {

struct MyDataModel {
  string name;
  string description;
};

void from_json(const json &j, MyDataModel &m);
void to_json(json &j, const MyDataModel &m);

} // namespace TestAppData
