#include <iostream>

#include <vector>

#include <string>

using namespace std;

//criar uma classe para aluno e uma diferente para nota

void cadastrarnotas(vector<string> &lista) {

    string aluno;


    cout << "Digite o nome do aluno: ";

    cin >> aluno;

    lista.push_back(aluno);

    cout << "aluno cadastrado com sucesso!\n";

    string media;
  
    int notas , notas2;

    cout << "Digite a primeira nota: ";

    cin >> notas;

    cout << "Digite a segunda nota: ";

    cin >> notas2;

 

  media = to_string((notas + notas2) /2 );

    lista.push_back(media);

    

    cout << "notas cadastradas com sucesso!\n";


}


void exibirLista(const vector<string> &lista) {

    cout << "Lista de dados cadastrados:\n";
//colocar para exibir classes específicas aqui
      cout << "Nome do aluno";
      cin >> lista.push_back(aluno);
      cout << "Media do aluno";
      cin >> lista.push_back(media);
    }
}

int main() {

    vector<string> dados;

    int opçoes;

    cout << "Bem-vindo ao sistema!\n";

    do {
        cout << "\nMenu de opções:\n";
        cout << "1. Cadastrar\n";
        cout << "2. Exibir\n";
        cout << "3. Sair do sistema\n";
        cout << "Escolha uma opção: ";
        cin >> opçoes;

        switch(opçoes) {
            case 1:
                cadastrarnotas(dados);
                break;
            case 2:
                exibirLista(dados);
                break;   
            case 3:
                cout << "Saindo do sistema. Até logo!\n";
            break;
            default:
                cout << "Opção não encontrada. Tente novamente.\n";
        }
    } while(opçoes != 3);

    return 0;
}
