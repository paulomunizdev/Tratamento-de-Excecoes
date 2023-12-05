#include <iostream>
#include <stdexcept>

// Função que lança uma exceção com base no valor recebido
void funcaoComExcecao(int valor) {
    // Verifica se o valor é negativo
    if (valor < 0) {
        // Lança uma exceção do tipo std::invalid_argument se o valor for negativo
        throw std::invalid_argument("Valor não pode ser negativo.");
    } else if (valor == 0) {
        // Lança uma exceção do tipo std::runtime_error se o valor for zero
        throw std::runtime_error("Valor zero não é permitido.");
    }

    // Se o valor não for negativo e diferente de zero, a função é executada com sucesso
    std::cout << "Função executada com sucesso para valor: " << valor << std::endl;
}

int main() {
    try {
        // Tentando executar a função com diferentes valores
        funcaoComExcecao(10);
        funcaoComExcecao(0);  // Isso lançará uma exceção
        funcaoComExcecao(-5); // Isso também lançará uma exceção
        funcaoComExcecao(20);

        // Se a função for executada com sucesso para todos os valores, exibe uma mensagem adicional
        std::cout << "Todas as funções foram executadas com sucesso." << std::endl;

    } catch (const std::invalid_argument& e) {
        // Captura exceções de argumento inválido e exibe uma mensagem de erro
        std::cerr << "Erro de argumento inválido: " << e.what() << std::endl;

    } catch (const std::runtime_error& e) {
        // Captura exceções em tempo de execução e exibe uma mensagem de erro
        std::cerr << "Erro em tempo de execução: " << e.what() << std::endl;

    } catch (...) {
        // Captura exceções não previstas e exibe uma mensagem de erro
        std::cerr << "Erro desconhecido." << std::endl;
    }

    // Retorna 0 indicando que o programa foi executado com sucesso
    return 0;
}
