
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

// Estrutura dos produtos
struct Produto {
    int codigo;
    string nome;
    double preco;
    double promocional;
    int estoque;
};

// Estrutura das vendas
struct Venda {
    string produto;
    int quantidade;
    double valor;
};

// Nome do programa
int main() {

    // Cadastro inicial dos produtos
    vector<Produto> produtos = {
        {1, "Dark Bar Unidade", 17.90, 13.90, 11},
        {2, "Omega 3 Max Titanium", 89.90, 59.90, 1},
        {3, "Hit Protein 900g", 159.90, 109.90, 4},
        {4, "Insane Mad 350g", 169.90, 129.90, 2},
        {5, "Creatina Black Skull 300g", 79.90, 49.90, 1},
        {6, "Chef Juice 900g", 179.90, 129.90, 1},
        {7, "SMARSH Marshmallow Bar", 14.90, 7.90, 21},
        {8, "La Fajor", 17.90, 11.49, 26},
        {9, "Garrafa Max 500ml", 14.90, 9.90, 5},
        {10, "Nutrata Whey Grego", 8.90, 5.90, 14}
    };

    vector<Venda> vendas;

    int opcao;
    int codigo;
    int quantidade;

    double totalVendas = 0;

    do {

        cout << "\n====================================\n";
        cout << "       SANTORIO SUPLEMENTOS\n";
        cout << "====================================\n";

        cout << "1 - Consultar produtos\n";
        cout << "2 - Realizar venda\n";
        cout << "3 - Repor estoque\n";
        cout << "4 - Relatorio de vendas\n";
        cout << "5 - Consultar estoque baixo\n";
        cout << "0 - Sair\n";

        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {

            // CONSULTAR PRODUTOS
            case 1:

                cout << "\n===== PRODUTOS =====\n";

                cout << fixed << setprecision(2);

                for (int i = 0; i < produtos.size(); i++) {

                    cout << "\nCodigo: "
                         << produtos[i].codigo;

                    cout << "\nProduto: "
                         << produtos[i].nome;

                    cout << "\nPreco: R$ "
                         << produtos[i].preco;

                    cout << "\nPreco promocional: R$ "
                         << produtos[i].promocional;

                    cout << "\nEstoque: "
                         << produtos[i].estoque;

                    cout << "\n----------------------\n";
                }

                break;

            // REALIZAR VENDA
            case 2:

                cout << "\n===== REALIZAR VENDA =====\n";

                cout << "Digite o codigo do produto: ";
                cin >> codigo;

                cout << "Digite a quantidade: ";
                cin >> quantidade;

                if (quantidade <= 0) {

                    cout << "Quantidade invalida!\n";

                    break;
                }

                {

                    bool encontrado = false;

                    for (int i = 0; i < produtos.size(); i++) {

                        if (produtos[i].codigo == codigo) {

                            encontrado = true;

                            if (produtos[i].estoque >= quantidade) {

                                double preco;

                                // Utiliza o preco promocional
                                if (produtos[i].promocional > 0) {

                                    preco = produtos[i].promocional;

                                } else {

                                    preco = produtos[i].preco;
                                }

                                double valorVenda = preco * quantidade;

                                // Baixa automatica do estoque
                                produtos[i].estoque =
                                    produtos[i].estoque - quantidade;

                                // Registra a venda
                                vendas.push_back({
                                    produtos[i].nome,
                                    quantidade,
                                    valorVenda
                                });

                                totalVendas =
                                    totalVendas + valorVenda;

                                cout << "\nVenda realizada!\n";

                                cout << "Produto: "
                                     << produtos[i].nome;

                                cout << "\nQuantidade: "
                                     << quantidade;

                                cout << fixed << setprecision(2);

                                cout << "\nValor total: R$ "
                                     << valorVenda;

                                cout << "\nEstoque restante: "
                                     << produtos[i].estoque;

                            } else {

                                cout << "\nEstoque insuficiente!\n";

                                cout << "Estoque disponivel: "
                                     << produtos[i].estoque;
                            }

                            break;
                        }
                    }

                    if (!encontrado) {

                        cout << "\nProduto nao encontrado!\n";
                    }
                }

                break;

            // REPOSICAO DE ESTOQUE
            case 3:

                cout << "\n===== REPOSICAO DE ESTOQUE =====\n";

                cout << "Digite o codigo do produto: ";
                cin >> codigo;

                cout << "Digite a quantidade para reposicao: ";
                cin >> quantidade;

                if (quantidade <= 0) {

                    cout << "Quantidade invalida!\n";

                    break;
                }

                {

                    bool encontrado = false;

                    for (int i = 0; i < produtos.size(); i++) {

                        if (produtos[i].codigo == codigo) {

                            encontrado = true;

                            produtos[i].estoque =
                                produtos[i].estoque + quantidade;

                            cout << "\nReposicao realizada!\n";

                            cout << "Produto: "
                                 << produtos[i].nome;

                            cout << "\nNovo estoque: "
                                 << produtos[i].estoque;

                            break;
                        }
                    }

                    if (!encontrado) {

                        cout << "\nProduto nao encontrado!\n";
                    }
                }

                break;

            // RELATORIO DE VENDAS
            case 4:

                cout << "\n===== RELATORIO DE VENDAS =====\n";

                cout << fixed << setprecision(2);

                if (vendas.empty()) {

                    cout << "Nenhuma venda realizada.\n";

                } else {

                    for (int i = 0; i < vendas.size(); i++) {

                        cout << "\nProduto: "
                             << vendas[i].produto;

                        cout << "\nQuantidade: "
                             << vendas[i].quantidade;

                        cout << "\nValor: R$ "
                             << vendas[i].valor;

                        cout << "\n----------------------\n";
                    }
                }

                cout << "\nTotal de vendas: R$ "
                     << totalVendas;

                cout << "\nQuantidade de vendas registradas: "
                     << vendas.size();

                break;

            // CONSULTAR ESTOQUE BAIXO
            case 5:

                cout << "\n===== ESTOQUE BAIXO =====\n";

                {

                    bool estoqueBaixo = false;

                    for (int i = 0; i < produtos.size(); i++) {

                        if (produtos[i].estoque <= 5) {

                            estoqueBaixo = true;

                            cout << "\nProduto: "
                                 << produtos[i].nome;

                            cout << "\nEstoque: "
                                 << produtos[i].estoque;

                            cout << "\n----------------------\n";
                        }
                    }

                    if (!estoqueBaixo) {

                        cout << "Nenhum produto com estoque baixo.\n";
                    }
                }

                break;

            // SAIR
            case 0:

                cout << "\nEncerrando o sistema...\n";

                cout << "Obrigado por utilizar a Santorio Suplementos!\n";

                break;

            default:

                cout << "\nOpcao invalida!\n";
        }

    } while (opcao != 0);

    return 0;
}
