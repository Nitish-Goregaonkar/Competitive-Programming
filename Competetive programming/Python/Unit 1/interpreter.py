def evaluate_expression(expression): 
    try: 
        result = eval(expression) 
        return result 
    except Exception as e: 
        return f"Error: {e}" 
 
# Main function 
if __name__ == "__main__": 
    print("Simple Python Interpreter for Arithmetic Expressions") 
    expr = input("Enter an expression (e.g., 3 + 5 * (2 - 1)): ") 
    output = evaluate_expression(expr) 
    print(f"Result: {output}") 