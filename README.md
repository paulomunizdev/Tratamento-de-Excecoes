# Tratamento de Exceções em C++

Este repositório contém um exemplo simples em C++ que demonstra o uso de tratamento de exceções. O código inclui uma função `funcaoComExcecao` que lança exceções com base no valor recebido e um bloco `try-catch` em `main()` para capturar e lidar com essas exceções.

### Função `funcaoComExcecao`

Esta função verifica se o valor recebido é negativo ou zero. Se for negativo, ela lança uma exceção do tipo `std::invalid_argument`. Se for zero, lança uma exceção do tipo `std::runtime_error`. Se o valor for positivo, a função imprime uma mensagem de sucesso.

### Bloco `try-catch` em `main()`

O bloco `try` envolve chamadas da função `funcaoComExcecao` com diferentes valores. O bloco `catch` captura exceções específicas (`std::invalid_argument` e `std::runtime_error`) e exibe mensagens de erro correspondentes. Um bloco `catch` genérico também está presente para lidar com exceções desconhecidas.


## Como Executar

Certifique-se de ter um compilador C++ instalado no seu sistema. Compile e execute o exemplo da seguinte maneira:

```bash
g++ script.cpp -o script
./script


