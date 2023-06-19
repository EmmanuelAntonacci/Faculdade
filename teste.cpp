#include <iostream>
#include "Planta.hpp"
#include "Setor.hpp"
#include "Irrigador.hpp"
#include "Plantacao.hpp"
#include "ListaPlantas.hpp"
#include "Fazenda.hpp"

int main() {

  ListaPlantas Lista;

  Lista.cadastrar_planta("Milho", 3, 12);
  Lista.print_lista_planta();
  std::cout << std::endl;
  Lista.cadastrar_planta("Capim Mombaça", 2.33, 8);
  Lista.print_lista_planta();
  std::cout << std::endl;
  Lista.remover_planta_por_nome("Milho");
  Lista.print_lista_planta();
  std::cout << std::endl;
  Lista.atualizar_planta("Capim Mombaça", 5, 12);
  Lista.print_lista_planta();
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;


  Fazenda F("Fazenda1", 250, "Emmanuel");

  F.print_info_fazenda();
}
