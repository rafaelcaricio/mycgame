#include "imagemInterface.h"
#include <string>


#ifndef __IMAGEM_IMPL__

#define __IMAGEM_IMPL__

#define MAX_X_IMG 2 //nao sei ainda
#define MAX_Y_IMG 2 // naosei ainda

Imagem::Imagem(BITMAP *imagem) {
     this->img = imagem;
     this->setCorFundoRGB(0, 255, 0);
}

Imagem::Imagem(string caminho) {
     this->img = load_bitmap(caminho.data(), NULL);
     this->setCorFundoRGB(0, 255, 0);
}

Imagem::Imagem(string caminho, int cor) {
     this->img = load_bitmap(caminho.data(), NULL);
     this->corFundo = cor;
}

Imagem::Imagem(string caminho, int r, int g, int b) {
     this->img = load_bitmap(caminho.data(), NULL);
     this->setCorFundoRGB(r, g, b);
}

void Imagem::setCorFundo(int cor) {
     this->corFundo = cor;
}

void Imagem::setCorFundoRGB(int r, int g, int b) {
     this->corFundo = makecol(r, g, b);
}

void Imagem::mudarFundo(int fundoTela) {
     for (int x = 0; x < this->img->w; x++) {
        for (int y = 0; y < this->img->h; y++) {
            if (getpixel(this->img, x, y) == this->corFundo)
               putpixel(this->img, x, y, fundoTela);
        }
     }
}

BITMAP *Imagem::getBMP() {
     return this->img;
}

Imagem *Imagem::getImagem(int x1, int y1, int x2, int y2) {
       BITMAP *imagem = create_sub_bitmap(this->img, x1, y1, x2, y2);
       Imagem *retorno = new Imagem(imagem); // lembrar de chamar o mudar findo pois ele ainda esta verde
       return retorno;
}

void Imagem::mudarFundo(int r, int g, int b) {
     this->mudarFundo(makecol(r, g, b));
}

Imagem::~Imagem() {
     destroy_bitmap(this->img);
}

#endif



