#include "stdafx.h"
#include "GlobalVarManager.h"


GlobalVarManager* GlobalVarManager::m_pInstance = nullptr;

GlobalVarManager * GlobalVarManager::getInstance()
{
	if (m_pInstance == nullptr)
	{
		m_pInstance = new GlobalVarManager();
	}

	return m_pInstance;
}

void GlobalVarManager::DestroyInstance()
{
	if (m_pInstance)
	{
		delete m_pInstance;
		m_pInstance = nullptr;
	}
}

void GlobalVarManager::Init()
{
	
}

bool GlobalVarManager::GetBool(GlobalBool gb)
{
	return g_bool[gb];
}

void GlobalVarManager::SetBool(GlobalBool gb, bool value)
{
	g_bool[gb] = value;
}

int GlobalVarManager::GetInt(GlobalInt gi)
{
	return g_int[gi];
}

void GlobalVarManager::SetInt(GlobalInt gi, int value)
{
	g_int[gi] = value;
}

float GlobalVarManager::GetFloat(GlobalFloat gf)
{
	return g_float[gf];
}

void GlobalVarManager::SetFloat(GlobalFloat gf, float value)
{
	g_float[gf] = value;
}

double GlobalVarManager::GetDouble(GlobalDouble gd)
{
	return g_double[gd];
}

void GlobalVarManager::SetDouble(GlobalDouble gd, double value)
{
	g_double[gd] = value;
}

GlobalVarManager::GlobalVarManager()
{

}


GlobalVarManager::~GlobalVarManager()
{

}
