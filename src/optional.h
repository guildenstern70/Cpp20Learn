//
// C++ 20 Learn
// Copyright (C) 2021, Alessio Saltarin
//
// See LICENSE
//

#ifndef CPP20LEARN_OPTIONAL_H
#define CPP20LEARN_OPTIONAL_H

#include <string_view>
#include <string>
#include <optional>
#include <iostream>

using ulong = unsigned long;

std::optional<std::string_view> findoccurrence(std::string_view inputstring, std::string_view whattofind);
void optional();

#endif //CPP20LEARN_OPTIONAL_H
