
#define MAX_X 320
#define MAX_Y 200

int inicializar(void) {
    if (allegro_init() != 0) {
       return 1;
    }

    install_keyboard();
    set_palette(desktop_palette);
    set_color_depth(32);
                                   //_WINDOWED
    if (set_gfx_mode(GFX_AUTODETECT_WINDOWED, MAX_X, MAX_Y, 0, 0) != 0) {
      set_gfx_mode(GFX_TEXT, 0, 0, 0, 0);
      allegro_message("Erro ao setar o modo de video!\n");
      allegro_exit();
      return 1;
    }
    
    if (carregarPersonagens()){
       set_gfx_mode(GFX_TEXT, 0, 0, 0, 0);
       allegro_message("Erro ao carregar alguma imagem do jogo!\n");
       allegro_exit();
       return 1;
    }

    return 0;
}

void finalizar(void) {
    set_gfx_mode(GFX_TEXT, 0, 0, 0, 0);
    allegro_exit();
}

