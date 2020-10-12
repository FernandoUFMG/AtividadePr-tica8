#include "Pessoa.hpp"

class Amigo : public Pessoa
{
private:
    // Data de aniversario da pessoa
    string dataAniversario;

public:

    // construtores

    // Construtor padrão
    Amigo();

    // getters

    // retorna a data de aniversario
    string getDataAniversario();

    // setters

    void setDataAniversario(string);

    // another methods

    // Printa para o usuário as informações da
    // pessoa
    void print();
};