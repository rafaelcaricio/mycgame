#include <stdio.h>
#include <allegro.h>
#include <map>
#include <string>

using namespace std;

#include "personagem.h"
#include "imagem.h"
#include "initPersonagens.h"
#include "init.h"

int main(int argv, char **argc) {

    if (inicializar())
       return -1;
       
    const int personSel = PERSON_PRINC;

    person[personSel]->setX(15);
    person[personSel]->setX(15);
    person[personSel]->setImagemAtual(MFREN_FRE);

    bool modificado = false;

    while (!key[KEY_ESC]) {
          // Aqui deve-se atualizar as imagens do estagio;
          
          // Se o usuário apertou algum botão de ação
          if (key[KEY_UP] || key[KEY_DOWN] || key[KEY_LEFT] || key[KEY_RIGHT]) {

              if (key[KEY_UP]) {
    
                 person[personSel]->incrementarY(-1);

                 if (key[KEY_LEFT]) {
                    modificado = true;                 //if (person[PERSON_PRINC]->getImagemAtual() == MCOST_ESQ) {
                    person[personSel]->setImagemAtual(MCOST_ESQ);
                    person[personSel]->incrementarX(-1);
                 } else {
                     if (key[KEY_RIGHT]) {
                        modificado = true;
                        person[personSel]->setImagemAtual(MCOST_DIR);
                        person[personSel]->incrementarX(1);
                     }
                 }
    
                 if (!modificado) {
                    modificado = true;
                    person[personSel]->setImagemAtual(MCOST_FRE);
                 }
    
              } else {
                  if (key[KEY_DOWN]) {
                     person[personSel]->incrementarY(1);
                  } else {
                      if (key[KEY_LEFT]) {
                         person[personSel]->incrementarX(-1);
                      } else {
                          if (key[KEY_RIGHT]) {
                             person[personSel]->incrementarX(1);
                          }
                      }
                  }
              }

          }
          if (modificado)
             person[personSel]->show(screen);
          modificado = false;
          readkey();
    }

    finalizar();
    return 0;
}

END_OF_MAIN();




