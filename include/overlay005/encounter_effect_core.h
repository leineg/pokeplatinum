#ifndef POKEPLATINUM_ENCOUNTER_EFFECT_CORE_H
#define POKEPLATINUM_ENCOUNTER_EFFECT_CORE_H

#include "sys_task_manager.h"

typedef struct {
	s16 x;
	s16 s_x;
	s16 dist;
	s16	add;
	u16 count;
} ENC_SHAKEMOVE_WORK;



typedef struct _ENC_BMP_FILL_SPREAD ENC_BMP_FILL_SPREAD;
typedef struct _ENC_BMP_PATAPATA_FILL ENC_BMP_PATAPATA_FILL;
ENC_BMP_PATAPATA_FILL* ENC_BMP_PatapataFillAlloc( u32 heapID );
BOOL ENC_BMP_FillSpreadMain( ENC_BMP_FILL_SPREAD* param );
void ENC_BMP_FillSpreadDelete( ENC_BMP_FILL_SPREAD* param );
void ENC_BMP_PatapataFillDelete( ENC_BMP_PATAPATA_FILL *param );
BOOL ENC_BMP_PatapataFillMain( ENC_BMP_PATAPATA_FILL *param );
BOOL ENC_BMP_PatapataFillMain3( ENC_BMP_PATAPATA_FILL *param );
extern void EncounterEffect_Field_GrassMorning(SysTask *task, void *param);
extern void EncounterEffect_Field_GrassNight(SysTask *task, void *param);
extern void EncountEffect_Field_WaterMorning(SysTask *task, void *param );
extern void EncountEffect_Field_WaterNight(SysTask *task, void *param );
extern void EncountEffect_Field_DanMorning(SysTask *task, void *param );
extern void EncountEffect_Field_DanNight(SysTask *task, void *param );
void EncounterEffect_Grass_HigherLevel(SysTask *task, void *param);
void EncounterEffect_Grass_LowerLevel(SysTask *task, void *param);
void EncounterEffect_Water_LowerLevel(SysTask *task, void *param);
void EncounterEffect_Water_HigherLevel(SysTask *task, void *param);
void EncounterEffect_Cave_LowerLevel(SysTask *task, void *param);
void EncounterEffect_Cave_HigherLevel(SysTask *task, void *param);
void EncounterEffect_Trainer_Grass_LowerLevel(SysTask *task, void *param);
void EncounterEffect_Trainer_Grass_HigherLevel(SysTask *task, void *param);
void EncounterEffect_Trainer_Water_LowerLevel(SysTask *task, void *param);
void EncounterEffect_Trainer_Water_HigherLevel(SysTask *task, void *param);
void EncounterEffect_Trainer_Cave_LowerLevel(SysTask *task, void *param);
void EncounterEffect_Trainer_Cave_HigherLevel(SysTask *task, void *param);
void EncounterEffect_Frontier(SysTask *task, void *param);
void EncounterEffect_Double(SysTask *task, void *param);
void EncounterEffect_GalacticGrunt(SysTask *task, void *param);
void EncounterEffect_GalacticBoss(SysTask *task, void *param);
void EncounterEffect_Mythical(SysTask *task, void *param);
void EncounterEffect_Legendary(SysTask *task, void *param);
void EncounterEffect_LeaderRoark(SysTask *task, void *param);
void EncounterEffect_LeaderGardenia(SysTask *task, void *param);
void EncounterEffect_LeaderWake(SysTask *task, void *param);
void EncounterEffect_LeaderMaylene(SysTask *task, void *param);
void EncounterEffect_LeaderFantina(SysTask *task, void *param);
void EncounterEffect_LeaderCandice(SysTask *task, void *param);
void EncounterEffect_LeaderByron(SysTask *task, void *param);
void EncounterEffect_LeaderVolkner(SysTask *task, void *param);
void EncounterEffect_EliteFourAaron(SysTask *task, void *param);
void EncounterEffect_EliteFourBertha(SysTask *task, void *param);
void EncounterEffect_EliteFourFlint(SysTask *task, void *param);
void EncounterEffect_EliteFourLucian(SysTask *task, void *param);
void EncounterEffect_ChampionCynthia(SysTask *task, void *param);
void EncounterEffect_Rival(SysTask *task, void *param);

#endif // POKEPLATINUM_ENCOUNTER_EFFECT_CORE_H
