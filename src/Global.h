#pragma once
#include <include_all.h>

#define PLUGIN_NAME "ChatFormatter"

extern ll::Logger logger;
extern ll::Logger chatLogger;

extern void listenEvent();
extern void registerPAPI();
extern void unregisterPAPI();