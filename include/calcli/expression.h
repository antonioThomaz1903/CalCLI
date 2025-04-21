#ifndef EXPRESSION_CALCLI_H
#define EXPRESSION_CALCLI_H

#include <string>
#include <iostream>
#include <memory>

class Expression {
public:
    virtual ~Expression() = default;
    virtual double evaluate() const = 0; 
    virtual std::string toString() const = 0; 
}; 

class OperandNode : public Expression {
public:
    explicit OperandNode(double value);
    
    double evaluate() const override;
    std::string toString() const override;

private:
    double value;
};

class OperatorNode : public Expression {
public:
    OperatorNode(char op, std::unique_ptr<Expression> left, std::unique_ptr<Expression> right);
    
    double evaluate() const override;
    std::string toString() const override;

private:
    char op;
    std::unique_ptr<Expression> left;
    std::unique_ptr<Expression> right;
};

#endif