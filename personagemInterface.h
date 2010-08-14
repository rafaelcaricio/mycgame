
#include "imagem.h"

#ifndef __PERSONAGEM_INTERFACE__

#define __PERSONAGEM_INTERFACE__

#define MAX_IMG_PER 12

#define MCOST_DIR 0 
#define MCOST_FRE 1
#define MCOST_ESQ 2

#define MDIRE_DIR 3
#define MDIRE_FRE 4
#define MDIRE_ESQ 5

#define MFREN_DIR 6
#define MFREN_FRE 7
#define MFREN_ESQ 8

#define MESQR_DIR 9
#define MESQR_FRE 10
#define MESQR_ESQ 11

class Personagem {
      private:
              Imagem *imagens[MAX_IMG_PER];
              int bufferImagem;
              int _x;
              int _y;
      public:
              Personagem(void);        // ok
              ~Personagem(void);       // pendente ver como implementar
              void show(BITMAP*);      // ok
              int getX(void);          // ok
              int getY(void);          // ok
              void setX(int);          // ok
              void setY(int);          // ok
              void incrementarY(int);  // ok
              void incrementarX(int);  // ok
              void addImagem(int,Imagem*); // ok
              void setImagemAtual(int); // ok
              int  getImagemAtual(); // ok
              //void apagarFundo();   // ok
};

std::map <string , Personagem*> person;

#define PERSON_PRINC  "personP"

#endif
