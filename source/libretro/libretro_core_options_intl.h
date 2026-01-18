#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include "libretro.h"

/*
 ********************************
 * VERSION: 2.0
 ********************************
 *
 * - 2.0: Add support for core options v2 interface
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/
/* RETRO_LANGUAGE_AR */

#define CATEGORY_INPUT_LABEL_AR "أجهزة الادخال"
#define CATEGORY_INPUT_INFO_0_AR NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_AR NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_AR NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_AR NULL

struct retro_core_option_v2_category option_cats_ar[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_AR,
      CATEGORY_INPUT_INFO_0_AR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ar[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_AR,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_AR,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_AR,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ar = {
   option_cats_ar,
   option_defs_ar
};

/* RETRO_LANGUAGE_AST */

#define CATEGORY_INPUT_LABEL_AST "Controles"
#define CATEGORY_INPUT_INFO_0_AST NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_AST NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_AST NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_AST NULL

struct retro_core_option_v2_category option_cats_ast[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_AST,
      CATEGORY_INPUT_INFO_0_AST
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ast[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_AST,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_AST,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_AST,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ast = {
   option_cats_ast,
   option_defs_ast
};

/* RETRO_LANGUAGE_BE */

#define CATEGORY_INPUT_LABEL_BE "Увод"
#define CATEGORY_INPUT_INFO_0_BE NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_BE NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_BE NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_BE NULL

struct retro_core_option_v2_category option_cats_be[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_BE,
      CATEGORY_INPUT_INFO_0_BE
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_be[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_BE,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_BE,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_BE,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_be = {
   option_cats_be,
   option_defs_be
};

/* RETRO_LANGUAGE_BG */

#define CATEGORY_INPUT_LABEL_BG "Вход"
#define CATEGORY_INPUT_INFO_0_BG NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_BG NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_BG NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_BG NULL

struct retro_core_option_v2_category option_cats_bg[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_BG,
      CATEGORY_INPUT_INFO_0_BG
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_bg[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_BG,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_BG,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_BG,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_bg = {
   option_cats_bg,
   option_defs_bg
};

/* RETRO_LANGUAGE_CA */

#define CATEGORY_INPUT_LABEL_CA "Entrada"
#define CATEGORY_INPUT_INFO_0_CA "Canvia la configuració específica d'aquest nucli."
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CA NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_CA NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_CA NULL

struct retro_core_option_v2_category option_cats_ca[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_CA,
      CATEGORY_INPUT_INFO_0_CA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ca[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CA,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_CA,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_CA,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ca = {
   option_cats_ca,
   option_defs_ca
};

/* RETRO_LANGUAGE_CHS */

#define CATEGORY_INPUT_LABEL_CHS "输入"
#define CATEGORY_INPUT_INFO_0_CHS "配置核心专属的输入设置。"
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CHS NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_CHS NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_CHS NULL

struct retro_core_option_v2_category option_cats_chs[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_CHS,
      CATEGORY_INPUT_INFO_0_CHS
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_chs[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CHS,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_CHS,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_CHS,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_chs = {
   option_cats_chs,
   option_defs_chs
};

/* RETRO_LANGUAGE_CHT */

#define CATEGORY_INPUT_LABEL_CHT "輸入"
#define CATEGORY_INPUT_INFO_0_CHT NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CHT NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_CHT NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_CHT NULL

struct retro_core_option_v2_category option_cats_cht[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_CHT,
      CATEGORY_INPUT_INFO_0_CHT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cht[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CHT,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_CHT,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_CHT,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cht = {
   option_cats_cht,
   option_defs_cht
};

/* RETRO_LANGUAGE_CS */

#define CATEGORY_INPUT_LABEL_CS "Vstup"
#define CATEGORY_INPUT_INFO_0_CS NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CS NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_CS NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_CS NULL

struct retro_core_option_v2_category option_cats_cs[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_CS,
      CATEGORY_INPUT_INFO_0_CS
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cs[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CS,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_CS,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_CS,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cs = {
   option_cats_cs,
   option_defs_cs
};

/* RETRO_LANGUAGE_CY */

#define CATEGORY_INPUT_LABEL_CY "Mewnbwn"
#define CATEGORY_INPUT_INFO_0_CY NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CY NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_CY NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_CY NULL

struct retro_core_option_v2_category option_cats_cy[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_CY,
      CATEGORY_INPUT_INFO_0_CY
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cy[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CY,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_CY,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_CY,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cy = {
   option_cats_cy,
   option_defs_cy
};

/* RETRO_LANGUAGE_DA */

#define CATEGORY_INPUT_LABEL_DA NULL
#define CATEGORY_INPUT_INFO_0_DA NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_DA NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_DA NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_DA NULL

struct retro_core_option_v2_category option_cats_da[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_DA,
      CATEGORY_INPUT_INFO_0_DA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_da[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_DA,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_DA,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_DA,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_da = {
   option_cats_da,
   option_defs_da
};

/* RETRO_LANGUAGE_DE */

#define CATEGORY_INPUT_LABEL_DE "Eingabe"
#define CATEGORY_INPUT_INFO_0_DE "Core-spezifische Eingabeeinstellungen konfigurieren."
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_DE NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_DE NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_DE NULL

struct retro_core_option_v2_category option_cats_de[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_DE,
      CATEGORY_INPUT_INFO_0_DE
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_de[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_DE,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_DE,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_DE,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_de = {
   option_cats_de,
   option_defs_de
};

/* RETRO_LANGUAGE_EL */

#define CATEGORY_INPUT_LABEL_EL "Εισαγωγή"
#define CATEGORY_INPUT_INFO_0_EL NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_EL NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_EL NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_EL NULL

struct retro_core_option_v2_category option_cats_el[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_EL,
      CATEGORY_INPUT_INFO_0_EL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_el[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_EL,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_EL,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_EL,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_el = {
   option_cats_el,
   option_defs_el
};

/* RETRO_LANGUAGE_EN */

#define CATEGORY_INPUT_LABEL_EN NULL
#define CATEGORY_INPUT_INFO_0_EN NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_EN NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_EN NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_EN NULL

struct retro_core_option_v2_category option_cats_en[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_EN,
      CATEGORY_INPUT_INFO_0_EN
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_en[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_EN,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_EN,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_EN,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_en = {
   option_cats_en,
   option_defs_en
};

/* RETRO_LANGUAGE_EO */

#define CATEGORY_INPUT_LABEL_EO "Input Driver"
#define CATEGORY_INPUT_INFO_0_EO NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_EO NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_EO NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_EO NULL

struct retro_core_option_v2_category option_cats_eo[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_EO,
      CATEGORY_INPUT_INFO_0_EO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_eo[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_EO,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_EO,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_EO,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_eo = {
   option_cats_eo,
   option_defs_eo
};

/* RETRO_LANGUAGE_ES */

#define CATEGORY_INPUT_LABEL_ES "Entrada"
#define CATEGORY_INPUT_INFO_0_ES "Cambia los ajustes específicos de este núcleo."
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_ES NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_ES NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_ES NULL

struct retro_core_option_v2_category option_cats_es[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_ES,
      CATEGORY_INPUT_INFO_0_ES
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_es[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_ES,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_ES,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_ES,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_es = {
   option_cats_es,
   option_defs_es
};

/* RETRO_LANGUAGE_FA */

#define CATEGORY_INPUT_LABEL_FA "ورودی"
#define CATEGORY_INPUT_INFO_0_FA NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_FA NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_FA NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_FA NULL

struct retro_core_option_v2_category option_cats_fa[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_FA,
      CATEGORY_INPUT_INFO_0_FA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fa[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_FA,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_FA,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_FA,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fa = {
   option_cats_fa,
   option_defs_fa
};

/* RETRO_LANGUAGE_FI */

#define CATEGORY_INPUT_LABEL_FI "Syöte"
#define CATEGORY_INPUT_INFO_0_FI "Määritä ydinkohtaiset syöteasetukset."
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_FI NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_FI NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_FI NULL

struct retro_core_option_v2_category option_cats_fi[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_FI,
      CATEGORY_INPUT_INFO_0_FI
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fi[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_FI,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_FI,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_FI,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fi = {
   option_cats_fi,
   option_defs_fi
};

/* RETRO_LANGUAGE_FR */

#define CATEGORY_INPUT_LABEL_FR "Entrées"
#define CATEGORY_INPUT_INFO_0_FR "Configurer les réglages de touches spécifiques au cœur."
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_FR NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_FR NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_FR NULL

struct retro_core_option_v2_category option_cats_fr[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_FR,
      CATEGORY_INPUT_INFO_0_FR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fr[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_FR,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_FR,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_FR,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fr = {
   option_cats_fr,
   option_defs_fr
};

/* RETRO_LANGUAGE_GA */

#define CATEGORY_INPUT_LABEL_GA "Ionchur"
#define CATEGORY_INPUT_INFO_0_GA "Cumraigh socruithe ionchuir croí-shonracha."
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_GA NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_GA NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_GA NULL

struct retro_core_option_v2_category option_cats_ga[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_GA,
      CATEGORY_INPUT_INFO_0_GA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ga[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_GA,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_GA,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_GA,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ga = {
   option_cats_ga,
   option_defs_ga
};

/* RETRO_LANGUAGE_GL */

#define CATEGORY_INPUT_LABEL_GL "Entrada"
#define CATEGORY_INPUT_INFO_0_GL "Configurar a entrada específica do núcleo."
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_GL NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_GL NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_GL NULL

struct retro_core_option_v2_category option_cats_gl[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_GL,
      CATEGORY_INPUT_INFO_0_GL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_gl[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_GL,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_GL,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_GL,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_gl = {
   option_cats_gl,
   option_defs_gl
};

/* RETRO_LANGUAGE_HE */

#define CATEGORY_INPUT_LABEL_HE "קלט"
#define CATEGORY_INPUT_INFO_0_HE NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_HE NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_HE NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_HE NULL

struct retro_core_option_v2_category option_cats_he[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_HE,
      CATEGORY_INPUT_INFO_0_HE
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_he[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_HE,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_HE,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_HE,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_he = {
   option_cats_he,
   option_defs_he
};

/* RETRO_LANGUAGE_HR */

#define CATEGORY_INPUT_LABEL_HR NULL
#define CATEGORY_INPUT_INFO_0_HR NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_HR NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_HR NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_HR NULL

struct retro_core_option_v2_category option_cats_hr[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_HR,
      CATEGORY_INPUT_INFO_0_HR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_hr[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_HR,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_HR,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_HR,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_hr = {
   option_cats_hr,
   option_defs_hr
};

/* RETRO_LANGUAGE_HU */

#define CATEGORY_INPUT_LABEL_HU "Bemenet"
#define CATEGORY_INPUT_INFO_0_HU "Magspecifikus bemeneti beállítások."
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_HU NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_HU NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_HU NULL

struct retro_core_option_v2_category option_cats_hu[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_HU,
      CATEGORY_INPUT_INFO_0_HU
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_hu[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_HU,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_HU,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_HU,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_hu = {
   option_cats_hu,
   option_defs_hu
};

/* RETRO_LANGUAGE_ID */

#define CATEGORY_INPUT_LABEL_ID "Masukan"
#define CATEGORY_INPUT_INFO_0_ID NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_ID NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_ID NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_ID NULL

struct retro_core_option_v2_category option_cats_id[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_ID,
      CATEGORY_INPUT_INFO_0_ID
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_id[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_ID,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_ID,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_ID,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_id = {
   option_cats_id,
   option_defs_id
};

/* RETRO_LANGUAGE_IT */

#define CATEGORY_INPUT_LABEL_IT NULL
#define CATEGORY_INPUT_INFO_0_IT "Configura le impostazioni di input per core."
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_IT NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_IT NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_IT NULL

struct retro_core_option_v2_category option_cats_it[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_IT,
      CATEGORY_INPUT_INFO_0_IT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_it[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_IT,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_IT,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_IT,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_it = {
   option_cats_it,
   option_defs_it
};

/* RETRO_LANGUAGE_JA */

#define CATEGORY_INPUT_LABEL_JA "入力"
#define CATEGORY_INPUT_INFO_0_JA NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_JA NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_JA NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_JA NULL

struct retro_core_option_v2_category option_cats_ja[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_JA,
      CATEGORY_INPUT_INFO_0_JA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ja[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_JA,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_JA,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_JA,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ja = {
   option_cats_ja,
   option_defs_ja
};

/* RETRO_LANGUAGE_KO */

#define CATEGORY_INPUT_LABEL_KO "입력"
#define CATEGORY_INPUT_INFO_0_KO "코어별 입력 설정을 구성합니다."
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_KO NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_KO NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_KO NULL

struct retro_core_option_v2_category option_cats_ko[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_KO,
      CATEGORY_INPUT_INFO_0_KO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ko[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_KO,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_KO,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_KO,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ko = {
   option_cats_ko,
   option_defs_ko
};

/* RETRO_LANGUAGE_NL */

#define CATEGORY_INPUT_LABEL_NL "Invoer"
#define CATEGORY_INPUT_INFO_0_NL NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_NL NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_NL NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_NL NULL

struct retro_core_option_v2_category option_cats_nl[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_NL,
      CATEGORY_INPUT_INFO_0_NL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_nl[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_NL,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_NL,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_NL,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_nl = {
   option_cats_nl,
   option_defs_nl
};

/* RETRO_LANGUAGE_NO */

#define CATEGORY_INPUT_LABEL_NO "Inndata"
#define CATEGORY_INPUT_INFO_0_NO NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_NO NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_NO NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_NO NULL

struct retro_core_option_v2_category option_cats_no[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_NO,
      CATEGORY_INPUT_INFO_0_NO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_no[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_NO,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_NO,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_NO,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_no = {
   option_cats_no,
   option_defs_no
};

/* RETRO_LANGUAGE_OR */

#define CATEGORY_INPUT_LABEL_OR NULL
#define CATEGORY_INPUT_INFO_0_OR NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_OR NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_OR NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_OR NULL

struct retro_core_option_v2_category option_cats_or[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_OR,
      CATEGORY_INPUT_INFO_0_OR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_or[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_OR,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_OR,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_OR,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_or = {
   option_cats_or,
   option_defs_or
};

/* RETRO_LANGUAGE_PL */

#define CATEGORY_INPUT_LABEL_PL "Wejście"
#define CATEGORY_INPUT_INFO_0_PL NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_PL NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_PL NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_PL NULL

struct retro_core_option_v2_category option_cats_pl[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_PL,
      CATEGORY_INPUT_INFO_0_PL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pl[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_PL,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_PL,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_PL,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pl = {
   option_cats_pl,
   option_defs_pl
};

/* RETRO_LANGUAGE_PT_BR */

#define CATEGORY_INPUT_LABEL_PT_BR "Entrada"
#define CATEGORY_INPUT_INFO_0_PT_BR "Altera as configurações de entrada específicas do núcleo."
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_PT_BR NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_PT_BR NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_PT_BR NULL

struct retro_core_option_v2_category option_cats_pt_br[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_PT_BR,
      CATEGORY_INPUT_INFO_0_PT_BR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_br[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_PT_BR,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_PT_BR,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_PT_BR,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_br = {
   option_cats_pt_br,
   option_defs_pt_br
};

/* RETRO_LANGUAGE_PT_PT */

#define CATEGORY_INPUT_LABEL_PT_PT "Entrada"
#define CATEGORY_INPUT_INFO_0_PT_PT NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_PT_PT NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_PT_PT NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_PT_PT NULL

struct retro_core_option_v2_category option_cats_pt_pt[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_PT_PT,
      CATEGORY_INPUT_INFO_0_PT_PT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_pt[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_PT_PT,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_PT_PT,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_PT_PT,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_pt = {
   option_cats_pt_pt,
   option_defs_pt_pt
};

/* RETRO_LANGUAGE_RU */

#define CATEGORY_INPUT_LABEL_RU "Устройства ввода"
#define CATEGORY_INPUT_INFO_0_RU "Настройки ввода для ядра."
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_RU NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_RU NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_RU NULL

struct retro_core_option_v2_category option_cats_ru[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_RU,
      CATEGORY_INPUT_INFO_0_RU
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ru[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_RU,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_RU,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_RU,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ru = {
   option_cats_ru,
   option_defs_ru
};

/* RETRO_LANGUAGE_SK */

#define CATEGORY_INPUT_LABEL_SK "Vstup"
#define CATEGORY_INPUT_INFO_0_SK NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_SK NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_SK NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_SK NULL

struct retro_core_option_v2_category option_cats_sk[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_SK,
      CATEGORY_INPUT_INFO_0_SK
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sk[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_SK,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_SK,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_SK,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sk = {
   option_cats_sk,
   option_defs_sk
};

/* RETRO_LANGUAGE_SR */

#define CATEGORY_INPUT_LABEL_SR "Ulaz"
#define CATEGORY_INPUT_INFO_0_SR NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_SR NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_SR NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_SR NULL

struct retro_core_option_v2_category option_cats_sr[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_SR,
      CATEGORY_INPUT_INFO_0_SR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sr[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_SR,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_SR,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_SR,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sr = {
   option_cats_sr,
   option_defs_sr
};

/* RETRO_LANGUAGE_SV */

#define CATEGORY_INPUT_LABEL_SV "Inmatning"
#define CATEGORY_INPUT_INFO_0_SV "Konfigurera kärmspecifika inmatningsinställningar."
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_SV NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_SV NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_SV NULL

struct retro_core_option_v2_category option_cats_sv[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_SV,
      CATEGORY_INPUT_INFO_0_SV
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sv[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_SV,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_SV,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_SV,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sv = {
   option_cats_sv,
   option_defs_sv
};

/* RETRO_LANGUAGE_TR */

#define CATEGORY_INPUT_LABEL_TR "Giriş"
#define CATEGORY_INPUT_INFO_0_TR "Çekirdeğe özgü giriş ayarlarını yapılandırın."
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_TR NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_TR NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_TR NULL

struct retro_core_option_v2_category option_cats_tr[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_TR,
      CATEGORY_INPUT_INFO_0_TR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_tr[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_TR,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_TR,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_TR,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_tr = {
   option_cats_tr,
   option_defs_tr
};

/* RETRO_LANGUAGE_TT */

#define CATEGORY_INPUT_LABEL_TT NULL
#define CATEGORY_INPUT_INFO_0_TT NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_TT NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_TT NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_TT NULL

struct retro_core_option_v2_category option_cats_tt[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_TT,
      CATEGORY_INPUT_INFO_0_TT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_tt[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_TT,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_TT,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_TT,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_tt = {
   option_cats_tt,
   option_defs_tt
};

/* RETRO_LANGUAGE_UK */

#define CATEGORY_INPUT_LABEL_UK "Керування"
#define CATEGORY_INPUT_INFO_0_UK "Налаштування параметрів введення."
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_UK NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_UK NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_UK NULL

struct retro_core_option_v2_category option_cats_uk[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_UK,
      CATEGORY_INPUT_INFO_0_UK
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_uk[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_UK,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_UK,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_UK,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_uk = {
   option_cats_uk,
   option_defs_uk
};

/* RETRO_LANGUAGE_VAL */

#define CATEGORY_INPUT_LABEL_VAL "Entrada"
#define CATEGORY_INPUT_INFO_0_VAL NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_VAL NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_VAL NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_VAL NULL

struct retro_core_option_v2_category option_cats_val[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_VAL,
      CATEGORY_INPUT_INFO_0_VAL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_val[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_VAL,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_VAL,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_VAL,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_val = {
   option_cats_val,
   option_defs_val
};

/* RETRO_LANGUAGE_VN */

#define CATEGORY_INPUT_LABEL_VN "Đều khiển"
#define CATEGORY_INPUT_INFO_0_VN "Cấu hình các thiết lập điều khiển riêng cho từng core."
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_VN NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_VN NULL
#define PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_VN NULL

struct retro_core_option_v2_category option_cats_vn[] = {
   {
      "input",
      CATEGORY_INPUT_LABEL_VN,
      CATEGORY_INPUT_INFO_0_VN
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_vn[] = {
   {
      "pd777_announce_course_switch",
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_VN,
      PD777_ANNOUNCE_COURSE_SWITCH_LABEL_CAT_VN,
      PD777_ANNOUNCE_COURSE_SWITCH_INFO_0_VN,
      NULL,
      "input",
      {
         {"disabled", NULL},
         {"enabled", NULL},
         {NULL, NULL},
      },
      "enabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_vn = {
   option_cats_vn,
   option_defs_vn
};


#ifdef __cplusplus
}
#endif

#endif