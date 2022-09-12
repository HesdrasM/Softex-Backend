def calculadora(num1, num2, op):
  if op == '*':
    return num1 * num2
  if op == "-":
    return num1 - num2
  if op == '+':
    return num1 + num2
  if op == '/':
    return num1 / num2
  else: 
    return 0

num1 = float(input("Digite primeiro número:"))
num2 = float(input("Digite segundo número:"))
op = input("Digite o operador:")

print(num1, op, num2, "=", calculadora(num1, num2, op))