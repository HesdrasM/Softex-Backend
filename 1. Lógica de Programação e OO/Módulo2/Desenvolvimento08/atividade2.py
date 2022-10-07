qtdRodas = int(input("Digite quantidade de rodas do veículo:\n"))
qtdPessoas = float(input("Digite quantidade de pessoas:\n"))
peso = float(input("Digite peso bruto em quilogramas do veículo"))

if qtdRodas == 2 or qtdRodas == 3:
  print("a categoria do veículo é A")
elif qtdRodas == 4 and qtdPessoas <= 8 and peso <= 3500:
  print("a categoria do veículo é B")
elif qtdRodas >= 4 and qtdPessoas and peso > 3500 and peso <= 6000:
  print("a categoria do veículo é C")
elif qtdRodas >= 4 and qtdPessoas > 8 and peso <= 6000:
  print("a categoria do veículo é D")
elif qtdRodas >= 4 and peso > 6000:
  print("a categoria do veículo é E")
else:
  print("o veículo não se enquadra em nenhuma das categorias")
        