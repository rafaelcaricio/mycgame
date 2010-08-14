

#ifndef __IMAGEM_CLASS__

#define __IMAGEM_CLASS__


class Imagem {
      private:
              BITMAP* img;
              int corFundo;
      public:
              Imagem(BITMAP*);
              Imagem(string);
              Imagem(string, int);
              Imagem(string, int, int, int);
              void setCorFundo(int);
              void setCorFundoRGB(int, int, int);
              void mudarFundo(int);
              void mudarFundo(int,int,int);
              BITMAP *getBMP();                  // ok
              Imagem *getImagem(int,int,int,int); // ok
              ~Imagem();
};

#endif


