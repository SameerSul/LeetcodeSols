#include <cctype>

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        

        vector<int> evalStack;
        int output = 0;
        // we need to create a stack for this

        // if its a digit push it to the stack, if not, its probably an operation, thats 
        // where we determine what operation it is and do what's needed

        for (int token = 0; token < tokens.size(); token++ )
        {
            string i = tokens[token];

            if (i == "+" || i == "-" || i == "*" || i == "/") // if operation
            {
                // we want to take the last 2 elements and use them for an operation

                // take last element and pop do the same for 2nd last

                int b = evalStack.back();
                evalStack.pop_back();
                cout << "popped element 1" << endl;
                int a = evalStack.back();
                evalStack.pop_back();
                cout << "popped element 2" << endl;
                cout << "a is: " << a << " and b is: " << b << endl;
                if (i == "+"){output = a + b;}

                else if (i == "-") {output = a - b;}

                else if (i == "*") {output = a * b;}
                
                else if (i == "/") {output = a / b;}

                evalStack.push_back(output);

            }

            else // this would be an integer

            {
                evalStack.push_back(stoi(i));
            }
            
        }
    return evalStack.back(); // return last element because the output wont be the last element 
    }
};
