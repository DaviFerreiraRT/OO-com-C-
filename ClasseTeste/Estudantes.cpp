#include <iostream>
#include <string>
using namespace std;

class Estudante
{
private:
    string nomeAluno;
private:
    int idade;
private:
    string nomeProfessor;

public:
    void setIdade(int idade)
    {
        this->idade=idade;
    }
    void setNomeAluno(string nomeAluno)
    {
        this->nomeAluno=nomeAluno;
    }
    void setNomeProfessor(string nomeProfessor)
    {
        this->nomeProfessor=nomeProfessor;
    }
    int getIdade()
    {
        return this->idade;
    }
    string getNomeProfessor ()
    {
        return this->nomeProfessor;
    }
    string getNomeAluno ()
    {
        return this->nomeAluno;
    }
    void exibir()
    {
        cout<<"Nome aluno:"<<this->nomeAluno<<endl;
        cout<<"Nome do professor:"<<this->nomeProfessor<<endl;
        cout<<"Idade do aluno: "<<this->idade<<endl;
    }
};

int main()
{
    Estudante e1;
    e1.setIdade(20);
    e1.setNomeAluno("Davi Ferreira");
    e1.setNomeProfessor("Rodrigo Pacheco");
    e1.exibir();
    Estudante *e2;
    e2=&e1;

    cout<<"O endereco de memoria de e1 eh: "<<e2<<"\n"<<endl;

    cout<<"Exibindo os mesmos valores do objeto e1\n"<<endl;

    e2->exibir();
    return 0;
}
