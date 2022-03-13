#include <string>

#include "package.h"

Package::Package(unsigned int peso, unsigned int custo_por_quilo, std::string nome, std::string endereco) : _peso(peso), _custo_por_quilo(custo_por_quilo), _nome(nome), _endereco(endereco) {}

Package::~Package() {}

double Package::calculate_cost() {return (double) _peso * _custo_por_quilo;}

unsigned int Package::get_peso() {return _peso;}

unsigned int Package::get_custo_por_quilo() {return _custo_por_quilo;}

std::string Package::get_nome() {return _nome;}
