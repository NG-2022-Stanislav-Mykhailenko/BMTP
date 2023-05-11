# Лабораторна робота № 12

Тема Програмна реалізація абстрактних типів даних

Мета роботи полягає у набутті ґрунтовних вмінь і практичних навичок об'єектного аналізу й проектування, створення класів C++ та тестування їх екземплярів, використання препроцесорних директив, макросів і макрооператорів під час реалізації програмних засобів у кросплатформовому середовищі Code::Blocks.

Завдання
1. Як складову заголовкового файлу ModulesMykhailenko.h розробити клас ClassLab12_Mykhailenko — формальне представлення абстракції сутності предметної області (об'єкта) за варіантом, — поведінка об'єкта якого реалізовує розв'язування задачі 7.1.
2. Реалізувати додаток Teacher, який видає 100 звукових сигналів і в текстовий файл TestResults.txt записує рядок "Встановлені вимоги порядку виконання лабораторної роботи порушено!", якщо файл проекта main.cpp під час його компіляції знаходився не в \Lab12\prj, інакше — створює об'єкт класу ClassLab12_Mykhailenko із заголовкового файлу ModulesMykhailenko.h та виконує його unit-тестування за тест-сьютом(ами) із \Lab12\TestSuite\, протоколюючи результати тестування в текстовий файл \Lab12\TestSuite\TestResults.txt.

Варіант № 1


Кропивницький | <a href="http://www.kntu.kr.ua/">ЦНТУ</a> | 2023