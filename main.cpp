#include <iostream>

int multiplier1(int valeur_a, int valeur_b);
int multiplier2(int valeur_a, int valeur_b, int valeur_c = 1);
void multiplier3(int valeur_a, int valeur_b);

int main() {
  int a = 5;
  int b = 12;

  int c = multiplier1(a, b);

  int total = multiplier2(a, b, c);

  multiplier3(total, total);
}

int multiplier1(int valeur_a, int valeur_b) {
  int retour = valeur_a * valeur_b;
  return retour;
}

int multiplier2(int valeur_a, int valeur_b, int valeur_c ) {
  int retour = valeur_a * valeur_b * valeur_c;
  return retour;
}

void multiplier3(int valeur_a, int valeur_b) {
  int affichage = valeur_a * valeur_b;
  std::cout << affichage;
}