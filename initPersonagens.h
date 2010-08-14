
#ifndef __IMAGENS__

#define __IMAGENS__

int carregarPersonagens() {
     Imagem *imagemMestre = new Imagem("monstro.bmp");
     imagemMestre->mudarFundo(0, 0, 0);
     person[PERSON_PRINC] = new Personagem();
     person[PERSON_PRINC]->addImagem(MCOST_DIR, imagemMestre->getImagem(  0,  0, 24, 27));
     person[PERSON_PRINC]->addImagem(MCOST_ESQ, imagemMestre->getImagem( 47,  0, 30, 25));
     person[PERSON_PRINC]->addImagem(MFREN_FRE, imagemMestre->getImagem( 24, 65, 24, 24));
     person[PERSON_PRINC]->addImagem(MCOST_FRE, imagemMestre->getImagem( 24,  0, 24, 27));
     return 0;
}

#endif
