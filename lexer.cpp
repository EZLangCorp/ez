#include <iostream>
#include <string>
#include <vector>

/**
Evaluates lexical meaning of a given expression, to be fed in via file/CLI
*/
class Lexer
{
    public:
        // Method intended to evaluate expressions
        std::string evaluate(std::string expression)
        {
            // trim of whitespace
            // split
            // operator / literal / other classification
            // 
            // 
        }

        
};

/**
High level class with primary functionality to split and assign lexical groupings
to semantic expressions

ex: 5 + 4 / k -> f(x)
(5, 'literal'), ('+', operator), ('4', litreral), ('/', bin_operator), 
('k', literal), ('->', bin_operator), ('f', literal), ('(', lpar),
('x', literal), (')', rpar)
*/
class SemanticExpression
{
    public:
        // splits expression by symbol
        std::string split_expr(std::string expression)
        {
            return "";
        };

        // converts to lexical expression using KeyWordData subclass
        std::string lex_expression(std::string expression)
        {
            return "";

        };

};


/**
Class representing the total extend of the EZ language, allowing membership query functionality
for deciding what type of "groups" of the language a certain symbol belongs to, for example
"-" = [unary operator = True, binary operator  = True, other_groups = False]
"Integer" = ["objects" = True, other_types = False]
*/
class KeyWordData
{
    public:
        // Instance data representing semantic groupings of the language
        std::string types[3] = {"int", "float", "character"};
        std::string objects[4] = {"Integer", "Float", "Character", "Collection"};

        // Design Decision: make List a keyword due to special syntax
        std::string keywords[22] = {"List", "global", 
                                  "lock", "interactive", "return", "show", "apply",
                                   "func", "log", "if", "else", "for", "while",
                                    "try", "error", "choose", "throw"};
        std::string symbols[9] = {")", "(", "]", "[", "\"", "'", "." ",", "//" };

        // Distinction between unary and binary operators for ease of parsing
        std::string bin_operators[7] = {"+", "-", "*", "/", "=", "!=" , "->"};
        std::string uni_operators[4] = { "-", "build", "!"};



        /**
        Checks for membership of a query value in each of the language's semantic groups
        */
        int* membership_query(std::string query_val)
        {
            // for membership queries
            bool memberships[6] = {false, false, false, false, false, false};
            std::string semantic_types[6] = {"types", "objects", "keywords, symbols, bin_operators, uni_operators"};

            // Traversing to validate membership of query value in each semantic group
            for (int j=0; j < sizeof(semantic_types); j++)
            {
                std::string semantic_type = semantic_types[j];

                for(int i = 0; i < sizeof(semantic_type); i++)
                {
                    if((*this).keywords[i].compare(query_val) == 0)
                    {
                        // if member, set corresponding member boolean_arr entry to true
                        memberships[j] = true;
                    }

                }
            }
        }

};