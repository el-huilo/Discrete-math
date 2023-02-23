# Discrete-math
Чтобы добавить заголовочный файл в проект:

1. В "Обозревателе решений" (справа) открыть контекстное меню проекта
2. Открыть "свойства"
3. В ветке "C/C++" открыть "Общие"
4. В самом верху открыть для изменения "Дополнительные каталоги включаемых файлов"
5. В верхнем окне вставить путь к папке с заголовочным файлом (###\Include)
6. Добавить в код #include <binarydich.h>

Этого вполне достаточно для работы кода, в случае если нужно запускать код не с компилятора а с .exe, то нужно подключать библиотеку:
1. прошлые п. 1-2

"Через путь к библиотеке"

2. В ветке "Компоновщик" открыть "Ввод"
3. "Дополнительные зависимости" в верхнем окне вставить путь к библиотеке (###\Include\dich.lib)
4. Прошлый п. 6

//------------------------------------------

"Через название библиотеки + путь"

5. В ветке "Компоновщик" открыть "Общие"
6. В "Дополнительные каталоги библиотек" вписать путь к папке с библиотекой
7. Прошлый п. 3 только нужно написать название библиотеки с расширением (dich.lib)

# Примечание
Для того чтоб студия видела функции обязательно нужен "хедер" , если пытаться собрать проект без библиотеки получишь ошибку
# Как работают
Функции БО принимают < vector < vector < bool > > и возвращают значение bool

Названия фунций можно посмотреть в коде binaryrel.h 

Пример вызова функции binary::binrel::reflect(название вектора);
