#include <stdio.h>
#include <Mod/CppUserModBase.hpp>

#include "GUI/MainWindow.h"

using namespace RC;
using namespace RC::Unreal;

class UnrealTrainer : public CppUserModBase
{
private:
public:
    UnrealTrainer() : CppUserModBase()
    {
        ModName = STR("UnrealTrainer");
        ModVersion = STR("1.0");
        ModDescription = STR("Unreal Trainer");
        ModAuthors = STR("Xiaom");
    }

    ~UnrealTrainer() override
    {
    }

    auto on_update() -> void override
    {
    }

    auto on_unreal_init() -> void override
    {
        WindowInit();
    }
};

#define MY_AWESOME_MOD_API __declspec(dllexport)
extern "C"
{
    MY_AWESOME_MOD_API RC::CppUserModBase *start_mod()
    {
        return new UnrealTrainer();
    }

    MY_AWESOME_MOD_API void uninstall_mod(RC::CppUserModBase *mod)
    {
        delete mod;
    }
}