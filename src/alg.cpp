// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  int schetchik = 0, j = 0;
  for (j; size > j; j++) {
    if (arr[j] == value) {
      schetchik++;
    }
  }
  if (schetchik != 0) {
    return schetchik;
  } 
  else {
    return 0; // если ничего не найдено
  }
}
