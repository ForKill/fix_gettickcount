new fix_get_tick_count;
#define microtime(%0)	(GetTickCount(%0) - fix_get_tick_count)

public OnGameModeInit()
{
    fix_get_tick_count = GetTickCount();
    new result = 1;
    #if defined fix_tick_count_OnGameModeInit
        result = fix_tick_count_OnGameModeInit();
    #endif
    return result;
}

#if defined _ALS_OnGameModeInit
    #undef OnGameModeInit
#else
    #define _ALS_OnGameModeInit
#endif
#define OnGameModeInit fix_tick_count_OnGameModeInit
#if defined fix_tick_count_OnGameModeInit
    forward fix_tick_count_OnGameModeInit();
#endif