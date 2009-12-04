#pragma once
#include "BWAgentInterface.h"
#include <BWAPITypes\UnitStruct.h>

namespace BWAgent
{
  class AGENT_API Unit
  {
  public:
    Unit();
    int getID() const;
    int getPlayer() const;
    int getType() const;
    int getInitialType() const;
    int getHitPoints() const;
    int getInitialHitPoints() const;
    int getShields() const;
    int getEnergy() const;
    int getResources() const;
    int getInitialResources() const;
    int getKillCount() const;
    int getGroundWeaponCooldown() const;
    int getAirWeaponCooldown() const;
    int getSpellCooldown() const;
    int getDefenseMatrixPoints() const;

    int getDefenseMatrixTimer() const;
    int getEnsnareTimer() const;
    int getIrradiateTimer() const;
    int getLockdownTimer() const;
    int getMaelstromTimer() const;
    int getPlagueTimer() const;
    int getRemoveTimer() const;
    int getStasisTimer() const;
    int getStimTimer() const;

/*
    Position getPosition() const;
    Position getInitialPosition() const;
    TilePosition getTilePosition() const;
    TilePosition getInitialTilePosition() const;
    double getDistance(Unit* target) const;
    double getDistance(Position target) const;
    double getAngle() const;
    double getVelocityX() const;
    double getVelocityY() const;

    Unit* getTarget() const;
    Position getTargetPosition() const;
    Order getOrder() const;
    Unit* getOrderTarget() const;
    int getOrderTimer() const;
    Order getSecondaryOrder() const;
    Unit* getBuildUnit() const;
    int getRemainingBuildTime() const;
    int getRemainingTrainTime() const;
    Unit* getChild() const;
    std::list<UnitType > getTrainingQueue() const;
    Unit* getTransport() const;
    std::list<Unit*> getLoadedUnits() const;
    int getInterceptorCount() const;
    int getScarabCount() const;
    int getSpiderMineCount() const;
    TechType getTech() const;
    UpgradeType getUpgrade() const;
    int getRemainingResearchTime() const;
    int getRemainingUpgradeTime() const;
    Position getRallyPosition() const;
    Unit* getRallyUnit() const;
    Unit* getAddon() const;
    int getUpgradeLevel(UpgradeType upgrade) const;
*/
    bool exists() const;
    bool isAccelerating() const;
    bool isBeingConstructed() const;
    bool isBeingGathered() const;
    bool isBeingHealed() const;
    bool isBlind() const;
    bool isBraking() const;
    bool isBurrowed() const;
    bool isCarryingGas() const;
    bool isCarryingMinerals() const;
    bool isCloaked() const;
    bool isCompleted() const;
    bool isConstructing() const;
    bool isDefenseMatrixed() const;
    bool isEnsnared() const;
    bool isFollowing() const;
    bool isGatheringGas() const;
    bool isGatheringMinerals() const;
    bool isHallucination() const;
    bool isIdle() const;
    bool isIrradiated() const;
    bool isLifted() const;
    bool isLoaded() const;
    bool isLockedDown() const;
    bool isMaelstrommed() const;
    bool isMorphing() const;
    bool isMoving() const;
    bool isParasited() const;
    bool isPatrolling() const;
    bool isPlagued() const;
    bool isRepairing() const;
    bool isResearching() const;
    bool isSelected() const;
    bool isSieged() const;
    bool isStartingAttack() const;
    bool isStasised() const;
    bool isStimmed() const;
    bool isTraining() const;
    bool isUnderStorm() const;
    bool isUnpowered() const;
    bool isUpgrading() const;
    bool isVisible() const;

//    bool attackMove(Position position);
    bool attackUnit(Unit* target);
//    bool rightClick(Position position);
    bool rightClick(Unit* target);
//    bool train(UnitType type);
//    bool build(TilePosition position, UnitType type);
//    bool buildAddon(UnitType type);
//    bool research(TechType tech);
//    bool upgrade(UpgradeType upgrade);
    bool stop();
    bool holdPosition();
//    bool patrol(Position position);
    bool follow(Unit* target);
//    bool setRallyPosition(Position target);
    bool setRallyUnit(Unit* target);
    bool repair(Unit* target);
//    bool morph(UnitType type);
    bool burrow();
    bool unburrow();
    bool siege();
    bool unsiege();
    bool cloak();
    bool decloak();
    bool lift();
//    bool land(TilePosition position);
    bool load(Unit* target);
    bool unload(Unit* target);
    bool unloadAll();
//    bool unloadAll(Position position);
    bool cancelConstruction();
    bool haltConstruction();
    bool cancelMorph();
    bool cancelTrain();
    bool cancelTrain(int slot);
    bool cancelAddon();
    bool cancelResearch();
    bool cancelUpgrade();
//    bool useTech(TechType tech);
//    bool useTech(TechType tech, Position position);
//    bool useTech(TechType tech, Unit* target);
    void _update(BWAPI::ClearanceLevels level,BWAPI::State* data);
  private:
    BWAPI::ClearanceLevels level;//type of struct that data points to
    BWAPI::State* data;
  };
}