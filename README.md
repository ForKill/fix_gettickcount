Фикс отрицательного числа метода *GetTickCount*. Вместо *GetTickCount* используйте макрос *microtime*.

Подключение после инклуда ***a_samp***
```
#include <a_samp>
#include <fix_gettickcount>
```

Пример использования:
```
forward Timer500ms();
public Timer500ms()
{
    new microtime = microtime();

    /*
        Какой то код
    */
        
    microtime = microtime() - microtime;

    if(microtime > 20)
    {
        printf("[Timer500ms] Таймер завершил итерацию с повышенным временем: %dms", microtime);
    }
}
```
