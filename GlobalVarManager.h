#pragma once

#ifndef __GLOBAL_VAR_MANAGER_H__
#define __GLOBAL_VAR_MANAGER_H__

enum GlobalBool
{
	GLOBAL_BOOL_FIRST_ELEMENT = 0,
	TOTAL_GLOBAL_BOOL_VARIABLE
};

enum GlobalInt
{
	GLOBAL_INT_FIRST_ELEMENT = 0,
	TOTAL_GLOBAL_INT_VARIABLE
};

enum GlobalFloat
{
	GLOBAL_FLOAT_FIRST_ELEMENT = 0,
	TOTAL_GLOBAL_FLOAT_VARIABLE
};

enum GlobalDouble
{
	GLOBAL_DOUBLE_FIRST_ELEMENT = 0,
	TOTAL_GLOBAL_DOUBLE_VARIABLE
};

class GlobalVarManager
{
public:

	///////////////////////////////////////////////////////////////////
	bool	g_bool[TOTAL_GLOBAL_BOOL_VARIABLE];
	int		g_int[TOTAL_GLOBAL_INT_VARIABLE];
	float	g_float[TOTAL_GLOBAL_FLOAT_VARIABLE];
	double	g_double[TOTAL_GLOBAL_DOUBLE_VARIABLE];
	///////////////////////////////////////////////////////////////////

	static GlobalVarManager* getInstance();
	static void DestroyInstance();

	void Init();

	///////////////////////////////////////////////////////////////////
	bool GetBool(GlobalBool gb);
	void SetBool(GlobalBool gb, bool value);
	///////////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////////////
	int GetInt(GlobalInt gi);
	void SetInt(GlobalInt gi, int value);
	///////////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////////////
	float GetFloat(GlobalFloat gf);
	void SetFloat(GlobalFloat gf, float value);
	///////////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////////////
	double GetDouble(GlobalDouble gd);
	void SetDouble(GlobalDouble gd, double value);
	///////////////////////////////////////////////////////////////////

private:

	GlobalVarManager();
	~GlobalVarManager();

	static GlobalVarManager* m_pInstance;
};

#define GetGlobalVar()			GlobalVarManager::getInstance()

#define GetGlobalBool(GB)		GlobalVarManager::getInstance()->GetBool(GB)
#define SetGlobalBool(GB, v)	GlobalVarManager::getInstance()->SetBool(GB, v)

#define GetGlobalInt(GI)		GlobalVarManager::getInstance()->GetInt(GI)
#define SetGlobalInt(GI, v)		GlobalVarManager::getInstance()->SetInt(GI, v)

#define GetGlobalFloat(GF)		GlobalVarManager::getInstance()->GetFloat(GF)
#define SetGlobalFloat(GF, v)	GlobalVarManager::getInstance()->SetFloat(GF, v)

#define GetGlobalDouble(GD)		GlobalVarManager::getInstance()->GetDouble(GD)
#define SetGlobalDouble(GD, v)	GlobalVarManager::getInstance()->SetDouble(GD, v)

#endif // __GLOBAL_VAR_MANAGER_H__