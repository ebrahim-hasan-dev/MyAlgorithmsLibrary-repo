#pragma once

#include <stack>


namespace MyAlgorithmsLib
{
	namespace Internal
	{
		bool ArePair(char open, char close)
		{
			if (open == '(' && close == ')')
			{
				return true;
			}

			else if (open == '[' && close == ']')
			{
				return true;
			}

			else if (open == '{' && close == '}')
			{
				return true;
			}

			else
			{
				return false;
			}
		}
	}

	bool AreBalanced(string Exp)
	{
		stack<char> stack;

		for (short i = 0; i < Exp.length(); i++)
		{
			if (Exp[i] == '{' || Exp[i] == '[' || Exp[i] == '(')
			{
				stack.push(Exp[i]);
			}

			else if (Exp[i] == '}' || Exp[i] == ']' || Exp[i] == ')')
			{
				if (stack.empty() || Internal::ArePair(stack.top(), Exp[i]) == false)
				{
					return false;
				}
				else
				{
					stack.pop();
				}

			}
		}

		return stack.empty();
	}

}