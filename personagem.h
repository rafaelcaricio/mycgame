#include "personagemInterface.h"

#ifndef __PERSONAGEM_IMPL__

#define __PERSONAGEM_IMPL__

Personagem::Personagem() {
     this->setX(0);
     this->setY(0);
     this->bufferImagem = MFREN_FRE;
}

Personagem::~Personagem() {
     //destroy_bitmap(this->img);
}

void Personagem::show(BITMAP* tela) {
     Imagem *img = imagens[this->getImagemAtual()];
     draw_sprite(tela, img->getBMP(), this->_x, this->_y);
}

void Personagem::addImagem(int cod, Imagem *img) {
     imagens[cod] = img;
}
    /*
void Personagem::apagarFundo() {
     for (int x = 0; x < this->img->w; x++) {
        for (int y = 0; y < this->img->h; y++) {
            if (getpixel(this->img, x, y) == this->_corFundo)
               putpixel(this->img, x, y, makecol(0, 0, 0));
        }
     }
} */

void Personagem::setImagemAtual(int cod) {
     this->bufferImagem = cod;
}

int Personagem::getImagemAtual() {
     return this->bufferImagem;
}

void Personagem::incrementarX(int valor) {
     if ((this->getX() - valor) >= 0 || (person[PERSON_PRINC]->getY() + valor) <= 296)
        this->_x += valor;
}

void Personagem::incrementarY(int valor) {
     if (((this->getY() + valor) <= 179) || (this->getY() - valor) >= 0)
        this->_y += valor;
}

void Personagem::setX(int x) {
     this->_x = x;
}

void Personagem::setY(int y) {
     this->_y = y;
}

int  Personagem::getY() {
     return this->_y;
}

int  Personagem::getX() {
     return this->_x;
}

#endif
