#include "../include/calcli/expression.h"

#include <string>
#include <iostream>
#include <memory>
#include <sstream>


OperandNode::OperandNode(double value) : value(value) {}

double OperandNode::evaluate() const {
    return value;
}

std::string OperandNode::toString() const {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

OperatorNode::OperatorNode(char op, std::unique_ptr<Expression> left, std::unique_ptr<Expression> right)
    : op(op), left(std::move(left)), right(std::move(right)) {}

double OperatorNode::evaluate() const {
    if (op == '+') {
        return left->evaluate() + right->evaluate();
    } else if (op == '-') {
        return left->evaluate() - right->evaluate();
    } else if (op == '*') {
        return left->evaluate() * right->evaluate();
    } else if (op == '/') {
        return left->evaluate() / right->evaluate();
    }
    return 0.0;
}

std::string OperatorNode::toString() const {
    std::ostringstream oss;
    oss << "(" << left->toString() << " " << op << " " << right->toString() << ")";
    return oss.str();
}