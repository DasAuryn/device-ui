#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include "lvgl.h"

#ifdef __cplusplus
extern "C" {
#endif


// advanced settings
extern lv_obj_t * ui_AdvancedSettingsPanel;
extern lv_obj_t * ui_SettingsTabView;
extern lv_obj_t * ui_TabPageGeneral;
extern lv_obj_t * ui_GeneralLanguageButton;
extern lv_obj_t * ui_LanguageLabel;
extern lv_obj_t * ui_GeneralTimezoneButton;
extern lv_obj_t * ui_TimezoneLabel;
extern lv_obj_t * ui_GeneralScreenButton;
extern lv_obj_t * ui_ScreenLabel;
extern lv_obj_t * ui_GeneralMapsButton;
extern lv_obj_t * ui_MapsLabel;
extern lv_obj_t * ui_GeneralAudioButton;
extern lv_obj_t * ui_AudioLabel1;
extern lv_obj_t * ui_TabPageRadio;
extern lv_obj_t * ui_RadioBluetoothButton;
extern lv_obj_t * ui_BluetoothLabel;
extern lv_obj_t * ui_RadioDeviceButton;
extern lv_obj_t * ui_DeviceLabel;
extern lv_obj_t * ui_RadioDisplayButton;
extern lv_obj_t * ui_DisplayLabel;
extern lv_obj_t * ui_RadioLoRaButton;
extern lv_obj_t * ui_LoRaLabel;
extern lv_obj_t * ui_RadioNetworkButton;
extern lv_obj_t * ui_NetworkLabel;
extern lv_obj_t * ui_RadioPositionButton;
extern lv_obj_t * ui_PositionLabel;
extern lv_obj_t * ui_RadioPowerButton;
extern lv_obj_t * ui_PowerLabel;
extern lv_obj_t * ui_TabPageModules;
extern lv_obj_t * ui_ModuleCannedMsgButton;
extern lv_obj_t * ui_CannedMsgLabel;
extern lv_obj_t * ui_ModuleSaFButton;
extern lv_obj_t * ui_StoreAndForwardLabel;
extern lv_obj_t * ui_ModuleTelemetryButton;
extern lv_obj_t * ui_TelemetryLabel;
extern lv_obj_t * ui_ModuleMQTTButton;
extern lv_obj_t * ui_MQTTLabel;
extern lv_obj_t * ui_ModuleRangeTestButton;
extern lv_obj_t * ui_RangeTestLabel;
extern lv_obj_t * ui_ModuleAudioButton;
extern lv_obj_t * ui_AudioLabel;
extern lv_obj_t * ui_ModuleSerialButton;
extern lv_obj_t * ui_SerialLabel;
extern lv_obj_t * ui_ModuleExtNotificationButton;
extern lv_obj_t * ui_ExtNotificationLabel;
extern lv_obj_t * ui_ModuleNeighborInfoButton;
extern lv_obj_t * ui_NeighborInfoLabel;
extern lv_obj_t * ui_ModuleAmbientLightingButton;
extern lv_obj_t * ui_AmbientLightingLabel;
extern lv_obj_t * ui_ModuleDetectionSensorButton;
extern lv_obj_t * ui_DetectionSensorLabel;
extern lv_obj_t * ui_ModuleRemoteHardwareButton;
extern lv_obj_t * ui_RemoteHardwareLabel;

void create_tabview_settings(void);

typedef struct _objects_t {
    lv_obj_t *boot_screen;
    lv_obj_t *loop_screen;
    lv_obj_t *boot_logo_arc;
    lv_obj_t *boot_logo_button;
    lv_obj_t *meshtastic_url;
    lv_obj_t *firmware_label;
    lv_obj_t *boot_logo;
    lv_obj_t *bluetooth_button;
    lv_obj_t *reboot_panel;
    lv_obj_t *cancel_reboot_button;
    lv_obj_t *reboot_button;
    lv_obj_t *progmode_button;
    lv_obj_t *shutdown_button;
    lv_obj_t *obj0;
    lv_obj_t *settings_reboot_panel;
    lv_obj_t *obj1;
    lv_obj_t *obj2;
    lv_obj_t *obj2__ok_cancel_panel_w;
    lv_obj_t *obj2__ok_button_w;
    lv_obj_t *obj2__cancel_button_w;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_BOOT_SCREEN = 1,
    SCREEN_ID_LOOP_SCREEN = 2,
};

void create_screen_boot_screen();
void tick_screen_boot_screen();

void create_screen_loop_screen();
void tick_screen_loop_screen();

void create_user_widget_ok_cancel_widget(lv_obj_t *parent_obj, int startWidgetIndex);
void tick_user_widget_ok_cancel_widget(int startWidgetIndex);

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/