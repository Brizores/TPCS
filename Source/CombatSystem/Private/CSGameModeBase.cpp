// CombatSystem


#include "CSGameModeBase.h"
#include "Player/CSBaseCharacter.h"
#include "Player/CSPlayerController.h"

ACSGameModeBase::ACSGameModeBase()
{
    DefaultPawnClass = ACSBaseCharacter::StaticClass();
    PlayerControllerClass = ACSPlayerController::StaticClass();
}
