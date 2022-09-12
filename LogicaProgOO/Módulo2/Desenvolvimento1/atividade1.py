nome = input("Nome do aluno: ")
nota1 = float(input("Digite primeira nota: "))
nota2 = float(input("Digite segunda nota: "))
media = float((nota1 + nota2) / 2)
faltas = int(input("Quantidade de faltas: "))

if (media < 7) or (faltas > 3):
    print(nome + " reprovado.")
else:
    print(nome + " aprovado!")