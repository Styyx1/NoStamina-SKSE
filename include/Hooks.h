#pragma once
namespace Hooks



{
	void install();

	class ModActorValueHook
	{
	public:
		static void Hook()
		{
			auto hook_addr = REL::RelocationID{ 37522, 38467 }.address() + 0x14;
			SKSE::AllocTrampoline(14);
			_SetActorValueModifiers = SKSE::GetTrampoline().write_call<5>(hook_addr, (uintptr_t) DamageActorValue);
			

		}

	private:
		static void DamageActorValue(RE::Actor* actor, RE::ACTOR_VALUE_MODIFIER avModifier, RE::ActorValue actorValue, float value);
		static inline REL::Relocation<decltype(DamageActorValue)> _SetActorValueModifiers;


	};

}

