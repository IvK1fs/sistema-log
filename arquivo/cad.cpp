#include <iostream>

#include <vector>

#include <string>


using namespace std;

class dados {
public:
    string names, sobren, nota1, nota2, media;
};

void cadastraralunos(vector<dados> &alunos) {
    dados novoAluno;
    int perg;

    do {
        cout << "Insira o nome do aluno: ";
        
        cin >> novoAluno.names;

        cout << "insira o sobrenome do aluno: ";
        
        cin >> novoAluno.sobren;

        cout << "Insira a nota da primeira unidade do aluno: ";
        
        cin >> novoAluno.nota1;

        cout << "Insira a nota da segunda unidade do aluno: ";
        
        cin >> novoAluno.nota2;

        
        double nota1_val = stod(novoAluno.nota1);
        
        double nota2_val = stod(novoAluno.nota2);
        
        double media_val = (nota1_val + nota2_val) / 2;
        
        novoAluno.media = to_string(media_val);

        
        alunos.push_back(novoAluno);

        cout << "Aluno cadastrado com sucesso!" << endl;
        cout << "Deseja cadastrar mais alunos? 1 - Sim, 2 - Não" << endl;
        
        cin >> perg;
        
    } while (perg == 1);
}

void exibirLista(const vector<dados> &alunos) {
    
    cout << "Lista de dados cadastrados:\n";
    
    cout << endl;
    
    for (const dados &aluno : alunos) {
        
        cout << "Nome: " << aluno.names <<" "<< 
        aluno.sobren << endl;
        
        cout << "Nota 1: " << aluno.nota1 << endl;
        
        cout << "Nota 2: " << aluno.nota2 << endl;
        
        cout << "Média: " << aluno.media << endl;
        
        cout << endl;
    }
}

int main() {
    vector<dados> alunos;
    int opcao;

    cout << "Bem-vindo ao sistema!\n";

    do {
        cout << "\nMenu de opções:\n";
        cout << "1. Cadastrar alunos no sistema\n";
        cout << "2. Exibir notas\n";
        cout << "3. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastraralunos(alunos);
                break;
            case 2:
                exibirLista(alunos);
                break;
            case 3:
                cout << "Saindo do sistema. Até logo!\n";
                break;
            default:
                cout << "Opção não encontrada. Tente novamente.\n";
        }
    } while (opcao != 3);

    return 0;
}
