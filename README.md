# Bowling [![Build Status](https://travis-ci.org/LordLukin/Bowling.svg?branch=master)](https://travis-ci.org/LordLukin/Bowling)    [![Codacy Badge](https://api.codacy.com/project/badge/Grade/c777e4d15735473a874785aeb5fe52d3)](https://www.codacy.com/app/LordLukin/Bowling?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=LordLukin/Bowling&amp;utm_campaign=Badge_Grade)    [![codecov](https://codecov.io/gh/LordLukin/Bowling/branch/master/graph/badge.svg)](https://codecov.io/gh/LordLukin/Bowling)

Obsługa kręgielni 🎳
========================

Zasady liczenia punktów w pliku [bowling.txt](bowling.txt)

Wymagania obowiązkowe:
----------------------------------------
- wczytywanie linii jako string w formacie Name:Frames, np: Jurek:3-|X|4/|5
- liczenie punktów całościowych wraz z bonusami
- walidacja plików wejściowych w poniższym formacie:
~~~~~~
// przykładowa zawartość pliku lane1.txt
Name1:X|4-|3
Name2:34|X|-
:X|22|33
~~~~~~
~~~~~~
// przykładowa zawartość pliku lane2.txt
~~~~~~
~~~~~~
// przykładowa zawartość pliku lane3.txt
Michael:9-|9-|9-|9-|9-|9-|9-|9-|9-|9-||
Radek:X|7/|9-|X|-8|8/|-6|X|X|X||81
~~~~~~
Zakładamy, że wszystkie pliki ze stanem gier są w jednym katalogu, każdy plik z kilkoma graczami reprezentuje inny tor

- wyświetlanie wyników na ekranie z podziałem na tory (ze statusem gry) i graczy:
~~~~~~
### Lane 1: game in progress ###
Name1 7
Name2 17
10
### Lane 2: no game ###
### Lane 3: game finished ###
Michael 90
Radek 167
~~~~~~

Wymagania opcjonalne:
----------------------------------------
- zapis stanu gier do pliku zamiast na ekran
- program (main.cpp) ma przyjmować 2 parametry z linii komend. Pierwszy to katalog, w którym będą pliki txt ze stanami gier na torach, a drugi opcjonalny to plik wyjściowy, w którym mają zostać zapisane przetworzone wyniki. Jeśli drugi parametr nie zostanie podany to wyniki mają zostać wypisane na ekran. Przykład użycia: `./bowling inputDirectory results.txt`. Program oczywiście ma działać i realizować powierzone zadanie.
- program (main.cpp) po podaniu parametru -h lub --help ma wyświetlać krótką informację o tym co robi i jak go używać (czyli punkt powyżej)
