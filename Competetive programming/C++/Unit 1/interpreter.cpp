#include <iostream> 
#include <sstream> 
#include <stack> 
#include <cctype> 
using namespace std; 
// Function to return precedence of operators 
int precedence(char op) { 
    if(op == '+'|| op == '-') return 1; 
    if(op == '*'|| op == '/') return 2; 
    return 0; 
} 
// Function to perform arithmetic operations 
int applyOp(int a, int b, char op) { 
    switch(op) { 
        case '+': return a + b; 
        case '-': return a - b; 
        case '*': return a * b; 
        case '/': return b == 0 ? 0 : a / b; 
    } 
    return 0; 
} 
// Function that evaluates a simple arithmetic expression 
int evaluate(string tokens) { 
    int i; 
    stack<int> values; 
    stack<char> ops; 
 
    for(i = 0; i < tokens.length(); i++) { 
        // Skip spaces 
        if(tokens[i] == ' ') 
            continue; 
        // If number, push to values stack 
        else if(isdigit(tokens[i])) { 
            int val = 0; 
            while(i < tokens.length() && isdigit(tokens[i])) { 
                val = (val*10) + (tokens[i]-'0'); 
                i++; 
            } 
            values.push(val); 
            i--; // move back one step 
        } 
 
        // If '(', push it to ops 
        else if(tokens[i] == '(') { 
            ops.push(tokens[i]); 
        } 
        // If ')', solve entire bracket 
        else if(tokens[i] == ')') { 
            while(!ops.empty() && ops.top() != '(') { 
                int val2 = values.top(); values.pop(); 
                int val1 = values.top(); values.pop(); 
                char op = ops.top(); ops.pop(); 
                values.push(applyOp(val1, val2, op)); 
            } 
            if(!ops.empty()) ops.pop(); // pop '(' 
        } 
        // Operator encountered 
        else { 
            while(!ops.empty() && precedence(ops.top()) >= precedence(tokens[i])) { 
                int val2 = values.top(); values.pop(); 
                int val1 = values.top(); values.pop(); 
                char op = ops.top(); ops.pop(); 
                values.push(applyOp(val1, val2, op)); 
            } 
            ops.push(tokens[i]); 
        } 
    } 
    // Remaining operations 
    while(!ops.empty()) { 
        int val2 = values.top(); values.pop(); 
        int val1 = values.top(); values.pop(); 
        char op = ops.top(); ops.pop(); 
        values.push(applyOp(val1, val2, op)); 
    } 
 
    return values.top(); 
} 
// Main function 
int main() { 
    string expression; 
    cout << "Enter an arithmetic expression (e.g., 3 + 5 * (2 - 1)): "; 
    getline(cin, expression); 
 
    int result = evaluate(expression); 
    cout << "Result: " << result << endl; 
 
    return 0; 
} 