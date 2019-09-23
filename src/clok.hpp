//
//  loki.hpp
//  Lok
//
//  Created by TheOnlyMrCat on 13/8/19.
//  Copyright © 2019 Dockdev. All rights reserved.
//

#pragma once

#include <ostream>
#include <stdexcept>
#include <unordered_map>

#include "trees.hpp"

class ParseError : public std::logic_error {
public:
	explicit ParseError(std::string what);
};

namespace clok {
	extern bool VERBOSE;

	node_t parse();
	void printAST(node_t root, std::ostream *stream);


}
