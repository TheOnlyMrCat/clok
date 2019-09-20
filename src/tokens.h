//
//  tokens.h
//  Lok
//
//  Created by Maxwell Guppy on 5/7/19.
//  Copyright © 2019 Dockdev. All rights reserved.
//

#pragma once

enum tokenType {
	NONE = 0, // For use in the AST and action tree
	END,
	UNKNOWN,
	FUNCTION,
	USE,
	LOAD,
	RETURN,
	RUN,
	IDENTIFIER,
	TYPE,
	NAMESPACE,
	INTEGER,
	FLOAT,
	STRING,
	OPEN_BRACE,
	CLOS_BRACE,
	OPEN_PARENTHESIS,
	CLOS_PARENTHESIS,
	OPEN_SQUARE,
	CLOS_SQUARE,
	SEMICOLON,
	WHITESPACE,
	NEWLINE,
	ACCESS_MOD,
	FUNCTION_MOD,
	CLASS,
	STRUCT,
	NEW,
	IF,
	ELSE,
	FOR,
	REPEAT,
	WHILE,
	BREAK,
	CONTINUE,

	OPERATOR,
	OPERATOR_PRE_UN,
	OPERATOR_POST_UN,
	OPERATOR_BIN
};
