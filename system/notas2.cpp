include <iostream>

#include <vector>

#include <string>

using namespace std;

void cadastrarnotas(vector<string> &lista) {

    string aluno;
    
    string converter;
    
    string converter2;

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
    
   converter =  to_string(notas +0);
    
   converter2 = to_string(notas2 +0);
    
   media = to_string((notas + notas2) );

    lista.push_back(media);
    
    lista.push_back(converter);
    
    lista.push_back(converter2);
   
    cout << "notas cadastradas com sucesso!\n";


}


void exibirLista(const vector<string> &lista) {

    cout << "Lista de dados cadastrados:\n";

    for (const string &dado : lista) {

        cout << "//"<< "["<< dado << "]" << endl;

       
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
                cout << "\na lista será exibida no formato:" <<  " \n[nome do aluno],\n[nota total],\n[nota 1], \n[nota 2],\n :"<< endl;
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
