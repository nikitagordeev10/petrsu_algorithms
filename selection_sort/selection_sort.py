def selection_sort(sq):
    for i in range(0, sq_len - 1):
        # (1) Найдём минимальный элемент в оставшемся несортированном массиве
        smallest = i
        for j in range(i + 1, sq_len):
            if sq[j] < sq[smallest]:
                smallest = j
        # (2) Заменим найденный минимальный элемент первым элементом
        sq[i], sq[smallest] = sq[smallest], sq[i]
 
 
# Открываю и считываю данные из файла
file = open("input.txt", "r")
sq_len = int(file.readline()) # sq_length
sq = file.readline() # sequence

# Подготавливаю и сортирую
sq = sq.split(" ")
sq = [int(x) for x in sq]
selection_sort(sq)
sq = ' '.join(str(v) for v in sq)

# Сохраняю результат в файл
file = open("output.txt", "w")
file.write(sq)
file.close()

# Суть сортировки
# 1) В неотсортированном подмассиве ищется локальный максимум (минимум).
# 2) Найденный максимум (минимум) меняется местами с последним (первым) элементом в подмассиве.
# 3) Если в массиве остались неотсортированные подмассивы — смотри пункт 1.
