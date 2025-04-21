#include "../include/calcli/expression.h"
#include <string>
#include <iostream>
#include <memory>

int main(){
    auto leftOperand = std::make_unique<OperandNode>(3);
    auto rightOperand1 = std::make_unique<OperandNode>(4);
    auto rightOperand2 = std::make_unique<OperandNode>(5);
    
    auto multiplyNode = std::make_unique<OperatorNode>('*', std::move(rightOperand1), std::move(rightOperand2));
    auto addNode = std::make_unique<OperatorNode>('+', std::move(leftOperand), std::move(multiplyNode));

    std::cout << "Resultado: " << addNode->evaluate() << std::endl;
    std::cout << "Expressão: " << addNode->toString() << std::endl;
    
    return 0;
}