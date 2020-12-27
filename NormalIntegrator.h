#pragma once
#include<nori/integrator.h>
#include<nori/scene.h>

NORI_NAMESPACE_BEGIN

class NormalIntegrator :
    public Integrator
{
	std::string m_myProperty;
public:
	NormalIntegrator(const PropertyList& props)
	{
		m_myProperty = props.getString("m_myProperty");
	}
	virtual Color3f Li(const Scene* scene, Sampler* sampler, const Ray3f& ray) const override;


	virtual std::string toString() const override;

};

NORI_NAMESPACE_END
