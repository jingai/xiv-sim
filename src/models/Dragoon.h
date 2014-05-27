#pragma once

#include "Base.h"

namespace models {

class Dragoon : public Base {
	public:
		Dragoon();

		virtual int maximumMP(const Actor* actor) const override;

	protected:
		virtual DamageType _defaultDamageType() const override;

		virtual std::chrono::microseconds _baseGlobalCooldown(const Actor* actor) const override;
		virtual double _basePotencyMultiplier(const Actor* actor) const override;
		virtual double _baseAutoAttackDamage(const Actor* actor) const override;
};

}