#include "sdk_cfg.h"
#include "ui/ui_api.h"
#include "fm_ui.h"
#include "fm/fm_radio.h"
#include "echo/echo_api.h"

#if 1

extern void *fm_reverb;

#if 0
void ui_open_fm_led(void *buf,u32 len)
{
    puts("ui_open_aux_led\n");

    SET_UI_MAIN(MENU_FM_MAIN);
    SET_UI_BUF_ADR(buf);
    SET_UI_BUF_LEN(len);
    UI_menu(MENU_FM_MAIN);
}
#endif

#if 1
void ui_open_fm_lcd(void *buf,u32 len)
{
    puts("ui_open_fm_lcd\n");

    SET_UI_MAIN(MENU_FM_MAIN);
    SET_UI_BUF_ADR(buf);
    SET_UI_BUF_LEN(len);
    SET_UI_ECHO_PT(&fm_reverb);
    UI_menu(MENU_FM_MAIN);
}
#endif

void ui_open_fm(void *buf,u32 len)
{
    //puts("open fm ui\n");
#if 1

#if 0
    ui_open_fm_led(buf, len);
#endif

#if UI_SEG_ENABLE
    ui_open_fm_seg(buf, len);
#endif

#if 1
    ui_open_fm_lcd(buf, len);
#endif

#if UI_TFT_ENABLE
    ui_open_fm_tft(buf, len);
#endif

#endif/*1*/
}

void ui_close_fm(void)
{
    SET_UI_MAIN(MENU_WAIT);
    UI_menu(MENU_WAIT);

    SET_UI_BUF_ADR(NULL);
    SET_UI_BUF_LEN(0);
    SET_UI_ECHO_PT(NULL);
}

#endif/*LINEIN_TASK*/
