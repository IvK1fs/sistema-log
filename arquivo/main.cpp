#include <iostream>

#include <vector>

#include <string>

using namespace std;

class dados {
public:
    string names;
    int nota1, nota2, media;
};

void cadastrarAluno(vector<dados> &alunos) {
  
    dados novoAluno;
  int perg;
  
    cout << "Insira o nome do aluno: ";
  
    cin >> novoAluno.names;
  
    cout << "Insira a nota da primeira unidade do aluno: ";
  
    cin >> novoAluno.nota1;
  
    cout << "Insira a nota da segunda unidade do aluno: ";
  
    cin >> novoAluno.nota2;

    
    novoAluno.media = (novoAluno.nota1 + novoAluno.nota2) / 2;

    alunos.push_back(novoAluno);
  
    cout << "Aluno cadastrado com sucesso!" << endl;
  
  cout << "deseja cadastrar mais alunos? 1-sim 2-não" << endl;
  cin >> perg;
  
  while(perg == 1 ){
    
    cout << "Insira o nome do aluno: ";

      cin >> novoAluno.names;

      cout << "Insira a nota da primeira unidade do aluno: ";

      cin >> novoAluno.nota1;

      cout << "Insira a nota da segunda unidade do aluno: ";

      cin >> novoAluno.nota2;


      novoAluno.media = (novoAluno.nota1 + novoAluno.nota2) / 2;

      alunos.push_back(novoAluno);

      cout << "Aluno cadastrado com sucesso!" << endl;
    
    cout << "deseja cadastrar mais alunos? 1-sim 2-não" << endl;
    
cin >> perg;

  }
}

void exibirLista(const vector<dados> &alunos) {
  
    cout << "Lista de dados cadastrados:\n";
  
  cout << endl;
  
    for (const dados &aluno : alunos) {
      
        cout  << aluno.names << endl;
      
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
        cout << "1. Cadastrar\n";
        cout << "2. Exibir\n";
        cout << "3. Sair do sistema\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarAluno(alunos);
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
