#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_EXCLAMATION MARK
#define LV_ATTRIBUTE_IMG_EXCLAMATION MARK
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_EXCLAMATION MARK uint8_t exclamation mark_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0xf8, 
  0xf8, 
  0xf8, 
  0xf8, 
  0xf8, 
  0xf8, 
  0xf8, 
  0xf8, 
  0xf8, 
  0xf8, 
  0xf8, 
  0xf8, 
  0xf8, 
  0xf8, 
  0xf8, 
  0xf8, 
  0xf8, 
  0xf8, 
  0x70, 
  0x00, 
  0x00, 
  0x20, 
  0xf8, 
  0xf8, 
  0xf8, 
  0xf0, 
};

const lv_img_dsc_t exclamation mark = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 5,
  .header.h = 26,
  .data_size = 34,
  .data = exclamation mark_map,
};
