#pragma once

#include "cParts.h"
#include "cMesh.h"
#include "Hw.h"

class cModelBase : public cParts
{
public:
  float field_B0;
  float field_B4;
  float field_B8;
  float field_BC;
  float field_C0;
  float field_C4;
  float field_C8;
  float field_CC;
  float field_D0;
  float field_D4;
  float field_D8;
  float field_DC;
  float field_E0;
  float field_E4;
  float field_E8;
  float field_EC;
  int field_F0;
  int field_F4;
  int field_F8;
  int field_FC;
  int field_100;
  int field_104;
  int field_108;
  int field_10C;
  int field_110;
  int field_114;
  int field_118;
  int field_11C;
  int field_120;
  int field_124;
  int field_128;
  int field_12C;
  int field_130;
  int field_134;
  int field_138;
  int field_13C;
  int field_140;
  int field_144;
  int field_148;
  int field_14C;
  float field_150;
  float field_154;
  float field_158;
  float field_15C;
  float field_160;
  float field_164;
  float field_168;
  float field_16C;
  float field_170;
  float field_174;
  float field_178;
  float field_17C;
  float field_180;
  float field_184;
  float field_188;
  float field_18C;
  float field_190;
  float field_194;
  float field_198;
  float field_19C;
  int field_1A0;
  int field_1A4;
  int field_1A8;
  int field_1AC;
  int field_1B0;
  int field_1B4;
  int field_1B8;
  int field_1BC;
  int field_1C0;
  int field_1C4;
  int field_1C8;
  int field_1CC;
  int field_1D0;
  int field_1D4;
  int field_1D8;
  int field_1DC;
  int field_1E0;
  int field_1E4;
  int field_1E8;
  int field_1EC;
  int field_1F0;
  int field_1F4;
  int field_1F8;
  int field_1FC;
  int field_200;
  int field_204;
  int field_208;
  int field_20C;
  int field_210;
  int field_214;
  int field_218;
  int field_21C;
  int field_220;
  int field_224;
  int field_228;
  int field_22C;
  int field_230;
  int field_234;
  short field_238;
  short field_23A;
  short field_23C;
  short field_23E;
  int field_240;
  int field_244;
  int field_248;
  int field_24C;
  int field_250;
  int field_254;
  int field_258;
  int field_25C;
  int field_260;
  int field_264;
  int field_268;
  int field_26C;
  int field_270;
  int field_274;
  int field_278;
  int field_27C;
  int field_280;
  int field_284;
  int field_288;
  int field_28C;
  int field_290;
  int field_294;
  int field_298;
  int field_29C;
  int field_2A0;
  int field_2A4;
  int field_2A8;
  int field_2AC;
  int field_2B0;
  int field_2B4;
  int field_2B8;
  int field_2BC;
  int field_2C0;
  int field_2C4;
  int field_2C8;
  int field_2CC;
  int field_2D0;
  int field_2D4;
  int field_2D8;
  int field_2DC;
  int field_2E0;
  int field_2E4;
  int field_2E8;
  int field_2EC;
  int field_2F0;
  int field_2F4;
  int field_2F8;
  int field_2FC;
  int field_300;
  int field_304;
  int field_308;
  int field_30C;
  bool m_bStealthCamoEnabled;
  int field_314;
  int field_318;
  int field_31C;
  cMesh *m_pcMesh;
  short m_nMaxcMeshCount;
  int field_328;
  short field_32C;
  int field_330;
  cParts** m_pcBodyParts;
  int field_338;
  int field_33C;
  int field_340;
  int field_344;
  int field_348;
  Hw::cTexture* field_34C;
  cParts* m_pModelInstance;
  int field_354;
  short m_ncBodyParts;
  int field_35C;
  int field_360;
  int field_364;
  int field_368;
  int field_36C;
};

VALIDATE_SIZE(cModelBase, 0x370);