
#include "sdk_cfg.h"
#include "ui/ui_api.h"
#include "bt_ui.h"

extern REVERB_API_STRUCT * bt_reverb;
#if 1

#if 0
void ui_open_bt_led(void *buf,u32 len)
{
    puts("ui_open_bt_led\n");

    SET_UI_MAIN(MENU_BT_MAIN);
    SET_UI_BUF_ADR(buf);
    SET_UI_BUF_LEN(len);

    UI_menu(MENU_BT_MAIN);
}
#endif

#if 1
void ui_open_bt_lcd(void *buf,u32 len)
{
    puts("ui_open_bt_lcd\n");

    SET_UI_MAIN(MENU_BT_MAIN);
    SET_UI_BUF_ADR(buf);
    SET_UI_BUF_LEN(len);
    SET_UI_ECHO_PT(&bt_reverb);
    UI_menu(MENU_BT_MAIN);
}
#endif

void ui_open_bt(void *buf,u32 len)
{

#if 1

#if 0
    ui_open_bt_led(buf,len);
#endif

#if 1
    ui_open_bt_lcd(buf,len);
#endif

#endif/*1*/
}

void ui_close_bt(void)
{
    SET_UI_MAIN(MENU_WAIT);
    UI_menu(MENU_WAIT);
}
#endif/*LINEIN_TASK*/
