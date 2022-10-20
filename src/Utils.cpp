#include "Utils.h"

namespace Utils
{

	RE::Actor* Utils::GetPlayerMount(RE::PlayerCharacter* player)
	{
		RE::NiPointer<RE::Actor> currentMount;
		if (player->GetMount(currentMount)) {
			return currentMount.get();
		}
		return nullptr;
	}
}
