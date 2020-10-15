#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int i = 0;
Engenheiro eng[3];
Vendedor vend[3];
 
void printaEng(double horas){
  std::cout << "Nome: " << eng[i].nome << std::endl;
  std::cout << "Salario Mes: " << eng[i].pagamentoMes(horas) << std::endl;
  std::cout << "Projetos: " << eng[i].projetos << std::endl;
  std::cout << std::endl;
}


void printaVend(double horas){
  std::cout << "Nome: " << vend[i].nome << std::endl;
  std::cout << "Salario Mes: " << vend[i].pagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << vend[i].quotaTotalAnual() << std::endl;  
  if(i<2){std::cout << std::endl;};
}


int main() {

  double horasEng[3] = {9.5,8,8};
  double horasVend[3] = {6,8,8};


  eng[0].nome = "Joao Snow";
  eng[0].salarioHora = 35;
  eng[0].projetos = 3; 
 
  eng[1].nome = "Daniela Targaryen";
  eng[1].salarioHora = 30;
  eng[1].projetos = 1;
  
  eng[2].nome = "Bruno Stark";
  eng[2].salarioHora = 30;
  eng[2].projetos = 2; 


  vend[0].nome = "Tonho Lannister";
  vend[0].salarioHora = 20;
  vend[0].quotaMensalVendas = 5000;
  
  vend[1].nome = "Jose Mormont";
  vend[1].salarioHora = 25;
  vend[1].quotaMensalVendas = 3000;
  
  vend[2].nome = "Sonia Stark";
  vend[2].salarioHora = 30;
  vend[2].quotaMensalVendas = 4000;


  for(i=0;i<=2;i++){
   printaEng(horasEng[i]);
  }
  
  for(i=0;i<=2;i++){
   printaVend(horasVend[i]);
  }
  
  return 0;	
}