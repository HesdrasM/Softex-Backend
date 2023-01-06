function Banco(saldo, numConta, tipoConta, agencia) {
  this.saldo = saldo;
  this.numConta = numConta;
  this.tipoConta = tipoConta;
  this.agencia = agencia

  this.buscarSaldo = () => {
    return this.saldo;
  }

  this.buscarConta = () => {
    return this.numConta;
  }

  this.deposito = (valorDeposito) => {
    return this.saldo += valorDeposito;
  }

  this.saque = (valorSacado) => {
    return this.saldo -= valorSacado;
  }
}

const conta1 = new Banco(1300, "78435-08", "corrente", 5864);
console.log(conta1.buscarSaldo());
console.log(conta1.buscarConta());

conta1.deposito(60);
console.log(conta1.buscarSaldo());

conta1.saque(660);
console.log(conta1.buscarSaldo());