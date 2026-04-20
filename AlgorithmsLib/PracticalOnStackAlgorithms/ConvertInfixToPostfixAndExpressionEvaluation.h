#pragma once

#include <stack>


namespace MyAlgorithmsLib
{
	namespace Internal
	{
		double MakeSureWeAreGetFullNumberPostfix(string str, short& index)
		{
			double num = 0;

			short n = 1;

			for (short i = index + 1; i < str.length(); i++)
			{
				if (!isdigit(str[i]))
				{
					string NumAsString = str.substr(index, n);
					num = ConvertToDouble(NumAsString);
					index = i;
					break;
				}

				n++;
			}

			return num;
		}

		// ======================================================================================================

		void ConvertInfixToPostfixHelper(string& Postfix, string Exp, short& i)
		{
			stack<char> s;

			for (short j = i; j < Exp.length(); j++)
			{
				if (ItIsCharacterIDoNotNeed(Exp[j]))
					continue;

				else if (isdigit(Exp[j]))
				{
					Postfix += Exp[j];

					if (!isdigit(Exp[j + 1]))
					{
						// this -> ' ' must be here, becuase this function -> MakeSureWeAreGetFullNumber depend on excist space after number 
						Postfix += ' ';
					}
					else
					{
						while (isdigit(Exp[j + 1]))
						{
							++j;
							Postfix += Exp[j];
						}

						// this -> ' ' must be here, becuase this function -> MakeSureWeAreGetFullNumber depend on excist space after number 
						Postfix += ' ';
					}
				}

				else if (Exp[j] == '/' || Exp[j] == '*' || Exp[j] == '-' || Exp[j] == '+')
				{
					if (s.empty())
					{
						s.push(Exp[j]);
					}
					else
					{
						while (!DoesOperator_1HavePriorityOverOperator_2(Exp[j], s.top()))
						{
							Postfix += s.top();
							Postfix += ' ';

							s.pop();

							if (s.empty())
								break;
						}

						s.push(Exp[j]);
					}
				}

				else if (Exp[j] == ')')
				{
					i = j;

					while (!s.empty())
					{
						Postfix += s.top();
						Postfix += ' ';
						s.pop();
					}

					return;
				}

				else if (Exp[j] == '(')
				{
					j++;
					ConvertInfixToPostfixHelper(Postfix, Exp, j);
				}

			}

			while (!s.empty())
			{
				Postfix += s.top();
				s.pop();
			}

		}
	}

	string ConvertInfixToPostfixBetter(string Exp)
	{
		string Postfix = "";

		stack<char> s;

		for (short j = 0; j < Exp.length(); j++)
		{
			if (Internal::ItIsCharacterIDoNotNeed(Exp[j]))
				continue;

			else if (isdigit(Exp[j]))
			{
				Postfix += Exp[j];

				if (!isdigit(Exp[j + 1]))
				{
					// this -> ' ' must be here, becuase this function -> MakeSureWeAreGetFullNumber depend on excist space after number 
					Postfix += ' ';
				}
				else
				{
					while (isdigit(Exp[j + 1]))
					{
						++j;
						Postfix += Exp[j];
					}

					// this -> ' ' must be here, becuase this function -> MakeSureWeAreGetFullNumber depend on excist space after number 
					Postfix += ' ';
				}
			}

			else if (Exp[j] == '/' || Exp[j] == '*' || Exp[j] == '-' || Exp[j] == '+' || Exp[j] == '(')
			{
				if (s.empty() || Exp[j] == '(')
				{
					s.push(Exp[j]);
				}
				else
				{
					while (!Internal::DoesOperator_1HavePriorityOverOperator_2(Exp[j], s.top()))
					{
						Postfix += s.top();
						Postfix += ' ';

						s.pop();

						if (s.empty())
							break;
					}

					s.push(Exp[j]);
				}
			}

			else if (Exp[j] == ')')
			{
				while (s.top() != '(')
				{
					Postfix += s.top();
					Postfix += ' ';
					s.pop();
				}

				s.pop();
			}

		}

		while (!s.empty())
		{
			Postfix += s.top();
			s.pop();
		}

		return Postfix;

	}

	string ConvertInfixToPostfix(string Exp)
	{
		string Postfix = "";

		short i = 0;

		Internal::ConvertInfixToPostfixHelper(Postfix, Exp, i);

		return Postfix;
	}

	double PerformExpressionEvaluationPostfix(string Exp)
	{
		//Exp = ConvertInfixToPostfix(Exp);
		Exp = ConvertInfixToPostfixBetter(Exp);

		stack<double> s;

		for (short i = 0; i < Exp.length(); i++)
		{
			if (isdigit(Exp[i]))
			{
				s.push(Internal::MakeSureWeAreGetFullNumberPostfix(Exp, i));
			}

			else if (Exp[i] == '/' || Exp[i] == '*' || Exp[i] == '-' || Exp[i] == '+')
			{
				double SecondOperand = s.top();
				s.pop();

				double FirstOperand = s.top();
				s.pop();

				s.push(Internal::Calc(Exp[i], FirstOperand, SecondOperand));
			}
		}

		return s.top();
	}


}