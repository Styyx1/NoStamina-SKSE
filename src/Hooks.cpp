#include "Hooks.h"
#include "Utils.h"
namespace Hooks
{
	void install()
	{
		logger::info("Hooking...");

		ModActorValueHook::Hook();

		logger::info("...success");
	}

	void ModActorValueHook::DamageActorValue(RE::Actor* actor, RE::ACTOR_VALUE_MODIFIER avModifier, RE::ActorValue actorValue, float value)
	{
		RE::PlayerCharacter* playerCharacter = RE::PlayerCharacter::GetSingleton();
		if ((actor == playerCharacter || actor == Utils::GetPlayerMount(playerCharacter)) 
			&& RE::ACTOR_VALUE_MODIFIER::kDamage == avModifier
			&& RE::ActorValue::kStamina == actorValue 
			&& value < 0.0f) {
			value = 0.0f;
		}
		_SetActorValueModifiers(actor, avModifier, actorValue, value);
	}

}
