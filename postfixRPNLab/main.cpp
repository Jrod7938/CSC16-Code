#include <iostream>
#include<sstream>
#include<cstdlib>
using namespace std;

#include "Stack.h"

int evalExpression(char operator_, int operandA, int operandB){
	switch(operator_){
		case '+':
			return operandA + operandB;
			break;
		case '-':
			return operandB - operandA;
			break;
		case '*':
			return operandA * operandB;
			break;
		case '/':
			return operandB / operandA;
			break;
		default:
			cerr << "Bad operator detected: " << operator_ << endl;
			return 0;
			break;
	}
}

void handleOperand(stringstream& strStream, Stack& rpnStack){
	// read operand from stream
	StackElement operand;
	strStream >> operand;
	// push operand into stack
	rpnStack.push(operand);
}

void handleOperator(stringstream& strStream, Stack& rpnStack){
	// Pop two values from stack
	// Get the first operand value
	StackElement operandA = rpnStack.top();
	rpnStack.pop();

	// Get second operand value
	StackElement operandB = rpnStack.top();
	rpnStack.pop();

	// Read operator from string
	char operator_;
	strStream >> operator_;
	// Apply operand to values
	StackElement result = evalExpression(operator_, operandA, operandB);

	// Push result to the stack
	rpnStack.push(result);
}

int main(){
	Stack rpnStack;
	cout << "Enter a postfix expression" << endl;
	string expStr;
	getline(cin,expStr,'\n');
	stringstream strStream(expStr);
	while(!strStream.eof()){
		int ch = strStream.peek();
		if(std::isspace(ch)){
		  strStream.ignore(1);
		  continue;
		}
		else if(std::isdigit(ch)){
			handleOperand(strStream, rpnStack);
		}
		else if(std::isgraph(ch)){
			handleOperator(strStream, rpnStack);
		}
	}

	// end of expression
	cout << "The evaluated expression is: " << rpnStack.top() << endl;
}
