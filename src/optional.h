//
// C++ 20 Learn
// Copyright (C) 2021-25, Alessio Saltarin
//
// This software is licensed under MIT license.
// See LICENSE.
//

#ifndef CPP20LEARN_OPTIONAL_H
#define CPP20LEARN_OPTIONAL_H

#include <string_view>
#include <string>
#include <optional>
#include <iostream>

using ulong = unsigned long;

std::optional<std::string_view> find_occurrence(std::string_view input_string, std::string_view what_to_find);
void optional();

#endif //CPP20LEARN_OPTIONAL_H
